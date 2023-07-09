#include <iostream>
using namespace std;

//using only class & composition only!!!!

class Node { // declear a Node Class Like the struct but in class also include the function to use
    private:
        int value;
        Node* next; // next is a pointer
    public:
        Node(int n) {
            value = n;
            next = NULL; // next node from this it gonna be a NULL pointer
        }

        void chagePtr(Node* nextPtr) { // change next pointer in this object use by delete or add list to last 
            next = nextPtr;
        }

        void changeValue(int n) { // modify the value of object
            value = n;
        }

        int getValue() { return value; } // accessor(getter) func of value

        Node* getPtr() { return next; }// accessor(getter) func of pointer next!
};

class LinkList { //linklist class
    private:
        string name; //include name on you prefer
        Node* head; //declear a head node
    
    public:
        LinkList(string text) { //name this linklist on the declear
            name = text;
            head = NULL; //set head pointer to NULL
        }

        void add(int n) { // add the list to head every time easy to write or if you want to add list to last it can be!
            Node* temp = new Node(n); // malloc but in c++
            if(head) { // if head != NULL
                temp->chagePtr(head);
            }
            head = temp;
        }

        void editValue(int target, int n) { // edit value
            Node* current = head; // use current to prevent the head pointer value
            while(current) { // while current != NULL
                if(current->getValue() == target) { // current->getValue cause value not in public in Node Class
                    current->changeValue(n);// current->changeValue cause value not in public in Node Class
                }
                    current = current->getPtr(); // current->getPtr() cause ptr not in public in Node Class
            }
        }

        void deleteNode(int target) { // choose target to remove
            Node* current = head; // use current to prevent the head pointer value
            Node* prev = NULL; 
            while(current) {
                if(current->getValue() == target) {
                    if(!prev) {
                        head = current->getPtr();
                    }
                    else 
                        prev->chagePtr(current->getPtr()); // use prev->chagePtr because cannot edit the value of ptr by dot(.) oparater
                    Node* temp = current; // use temp to remove current node
                    current = current->getPtr();
                    delete temp; // free(temp)
                } else {
                    prev = current;
                    current = current->getPtr(); // go to next node accessor by getPtr() func
                }
            }
        }

        void printNode() {
            Node* current = head;
            cout << name << " :" << endl << "-----------------------------" << endl;
            while(current) {
                cout << current->getValue() << " ";
                current = current->getPtr();
            }
            cout << endl << "-----------------------------" << endl;
        }

};

int main() {
    LinkList list1("One");

    for(int i = 0; i < 100; i+= 10) {
        list1.add(i);
    }

    list1.deleteNode(0);
    list1.deleteNode(90);

    list1.editValue(20, 5);
    
    list1.printNode();

    return 0;
}