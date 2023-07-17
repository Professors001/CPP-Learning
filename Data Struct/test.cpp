#include <iostream>
using namespace std;
class Node {
    private:
        int value;
        Node* next;
    public:
        Node(int n) {
            value = n;
            next = NULL;
        }
        void setNext(Node* nextPtr) {
            next = nextPtr;
        }

        void changeValue(int n) {
            value = n;
        }

        int getValue() { return value; }

        Node* getNext() { return next; }
};

int main() {
    int temp, n, row = 0;
    cin >> n;
    Node* line[n], *newNode, *tail;
    for(int i = 0;i < n; i++) {
        line[i] = NULL;
    }
    for(int i = 0; i < n; i++) {
        cin >> temp;
        newNode = new Node(temp);

        if(line[row] == NULL) {
            line[row] = newNode;
            tail = line[row];
        } else {
             if(temp < line[row]->getValue()) {
                newNode->setNext(line[row]);
                line[row] = newNode;
                
            }else{
                if(temp < tail->getValue()){
                    row++;
                    line[row] = newNode;
                    tail = line[row];
                }else{
                    tail->setNext(newNode);
                    tail = newNode;
                }
            }
        }
    }
    for(int i = 0;(i < n) && (line[i] != NULL);i++) {
        for(Node* runner = line[i]; runner; runner = runner->getNext()) {
            cout << runner->getValue() << " ";
        } if(line[i+1] != NULL) {
            cout << endl;
        }
    }
}