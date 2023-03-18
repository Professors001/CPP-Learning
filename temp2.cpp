#include <iostream>
using namespace std;

class Node {
    private:
        int value;
        Node* next;
    public:
        Node(int n) {value = n; next = NULL;}
        //getter
        int getValue() {return value;}
        Node* getNext() {return next;}
        //mututor
        void changeNext(Node* newNext) {next = newNext;}
        void changeValue(int newValue) {value = newValue;}
};

class LinkList {
    private:
        string name;
        Node* head;
    public:
        LinkList(string str) {name = str; head = NULL;}
        //getter or printer
        void printNode() {
            Node* runner = head;
            cout << name << endl;
            while(runner) {
                cout << runner->getValue() << " ";
                runner = runner->getNext();
            }
            cout << endl;
            cout << "------------------------------" << endl;
        }
        //mututor
        void addList(int value) {
            Node* temp = new Node(value);
            if(!head) {head = temp; return ;}
            Node* runner = head;
            while(runner->getNext()) {
                runner = runner->getNext();
            }
            runner->changeNext(temp);
        }
        void deleteList(int target) {
            Node* runner = head; Node* prev = NULL;
            while(runner) {
                if(runner->getValue() == target) {
                    if(runner == head) {head = runner->getNext();}
                    else {prev->changeNext(runner->getNext());}
                    Node* temp = runner;
                    runner = runner->getNext();
                    delete temp;
                } else {prev = runner; runner = runner->getNext();}
            }
        }
};

int main() {
    LinkList list("list1");
    for(int i = 0; i < 10; i++) {
        list.addList(i);
    }
    list.printNode();
    list.addList(5);
    list.printNode();
    list.addList(6);
    list.printNode();
    list.deleteList(0);
    list.printNode();
    list.deleteList(6);
    list.printNode();
    list.deleteList(5);
    list.printNode();

    return 0;
}