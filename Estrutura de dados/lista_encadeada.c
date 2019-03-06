#include <stdio.h>
#include <stdlib.h>


typedef struct dataNode {
    int id;
} DataNode;

typedef struct node {
    DataNode data;
    struct node* next;
} Node;

typedef struct list{
    int size;
    Node* head;
} List;

List* createList();


int main(){
    List* list = createList();

    printf("%d", list->size);

    system("pause");
}

List* createList(){
    List* list = (List*)  malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;

    return list;
}