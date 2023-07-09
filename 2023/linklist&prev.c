#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ {
    int value;
    struct Node_ *next;
    struct Node_ *prev;
}Node;

void newNode(Node* *head, int value) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->value = value;
    if(*head == NULL) {
        node->next = *head; 
        node->prev = NULL;
        *head = node;
        return;
    }
    Node* runner = *head;
    while(runner->next != NULL) {
        runner = runner->next;
    }
    node->prev = runner;
    node->next = NULL;
    runner->next = node;
}

void printNode(Node* head, int key) {
    if(key) {
        while(head != NULL) {
            printf("%d\n", head->value);
            head = head->next;
        }
        return;
    }
    while(head != NULL) {
        printf("%d\n", head->value);
        head = head->prev;
    }
}

void deleteNode(Node* *head, int target) {
    Node* runner = *head; Node* prev = NULL;
    if(*head == NULL) {return;}
    else if (runner->value == target) {*head = runner->next; free(runner);}
    else {
        while(runner != NULL) {
            if(runner->next != NULL && runner->next->value < target) {
                prev = runner;
                runner = runner->next;
            }
            else if(runner->value = target) {
                prev->next = runner->newNode;
            }
        }
    }
}

Node* getLast(Node* head) {
    while(head->next != NULL) {
        head = head->next;
    }
    return head;
}

int main() {
    Node* head;
    head = NULL;
    for(int i = 0; i < 20; i++) {newNode(&head, i);}
    printNode(head, 1);
//     puts("-----------------------------");
//     printNode(getLast(head), 0);
// }