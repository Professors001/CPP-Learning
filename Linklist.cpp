#include <iostream>
using namespace std;

//using only class & composition only!!!!

class Node {
    private:
        int value;
        Node *next;
    public:
        Node(int n) {
            value = n;
            next = NULL;
        }

        void chagePtr(Node *nextPtr) {
            next = nextPtr;
        }

        int getValue() { return value; }

        Node* getPtr() { return next; }
};

class LinkList {
    private:
        string name;
        Node *head;
    
    public:
        LinkList(string text) {
            name = text;
            head = NULL;
        }

        void add(int n) {
            Node *temp = new Node(n);
            if(head) {
                temp->chagePtr(head);
            }
            head = temp;
        }

        void deleteNode(int target) {
            Node *current = head;
            Node *prev = NULL;
            while(current) {
                if(current->getValue() == target) {
                    if(!prev) {
                        head = current->getPtr();
                    }
                    else 
                        prev->chagePtr(current->getPtr());
                    Node *temp = current;
                    current = current->getPtr();
                    delete temp;
                } else {
                    prev = current;
                    current = current->getPtr();
                }
            }
        }

        void printNode() {
            Node *current = head;
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

    list1.printNode();

    return 0;
}