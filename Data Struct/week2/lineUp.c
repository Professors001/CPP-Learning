#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next;
}Node;

int main(){
    int n;
    scanf("%d",&n);
    Node *line[n], *newNode, *tail;
    for(int i = 0 ; i<n; i++){
        line[i] = NULL;
    }
    int row = 0, num;
    for(int i=0; i < n; i++){
        scanf("%d", &num);
        newNode = (Node*)malloc(sizeof(Node));
        newNode->value = num;
        newNode->next = NULL;
        
        if(line[row]==NULL){
            line[row] = newNode;
            tail = line[row];
        }else{
            if(num < line[row]->value){
                newNode->next = line[row];
                line[row] = newNode;
                
            }else{
                if(num < tail->value){
                    row++;
                    line[row] = newNode;
                    tail = line[row];
                }else{
                    tail->next = newNode;
                    tail = newNode;
                }
            }
        }
    }
    for (int i = 0; i < n && line[i] != NULL; i++){
        for(Node *runner = line[i]; runner; runner = runner->next){
            printf("%d ", runner->value);
        }
        if (line[i+1] != NULL){
            printf("\n");
        }
        
    }

}