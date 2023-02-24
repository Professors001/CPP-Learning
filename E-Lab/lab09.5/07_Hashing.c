#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;

void printNode(Node *start) {
    for(int i = 0; i < SIZE; i++) {
        Node *current = start;
        printf("KEY% 3d: ", i);
        while(current != NULL) {
            if((current->item % SIZE) == i) {
                printf("%d ", current->item);
            }
            current = current->next;
        }
        puts("");
    }
}

void addNode(Node **start, int value) {
    //it work now dont touch it
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->item = value; temp->next = *start;
    *start = temp;
}

int main() {
    Node *start = NULL;
    int check = 1, value, i = 0;
    
    char christ, array[16];
    while(check) {
        christ = '0';
        printf("input> ");
        fgets(array,16,stdin);
        sscanf(array,"%c %d",&christ,&value);
        if (christ == 'a')
            addNode(&start, value);
        else if (christ == 'p')
            printNode(start);
        else if (christ == 'q')
            check = 0;
        
    }
}