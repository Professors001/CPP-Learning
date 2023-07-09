#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ {
    int value;
    struct Node_ *next;
} Node;

void printNode(Node *start) {
    Node *current = start;
    printf("[ ");
    while(current != NULL) {
        printf("%d ", current->value);
        current = current->next;        
    }
    printf("]\n");
}

void insertNode(Node **start, int value) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->value = value;
    if(*start == NULL) {
        temp->next = *start;
        *start = temp;
    } else if((*start)->value > value) {
        temp->next = *start;
        *start = temp;
    } else {
        Node *current = *start;
        while (current->next != NULL && current->next->value < value) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
}

void deleteNode(Node **start, int value) {
    Node *current = *start, *prev = NULL;
    while(current != NULL) {
        if(current->value == value) {
            if(current == *start)
                *start = current->next;
            else
                prev->next = current->next;
            Node *temp = current;
            current = current->next;
            free(temp);
        }
        else {
            prev = current;
            current = current->next;
        }
    }
}

int main() {
    Node *start = NULL;
    int check = 1, value;
    char christ, array[32];
    while(check) {
        christ = '0';
        printf("input> ");
        fgets(array,32,stdin);
        sscanf(array,"%c %d",&christ,&value);
        if (christ == 'i')
            insertNode(&start, value);
        else if (christ == 'p')
            printNode(start);
        else if (christ == 'd')
            deleteNode(&start, value);
        else if (christ == 'q')
            check = 0;
        
    }
}