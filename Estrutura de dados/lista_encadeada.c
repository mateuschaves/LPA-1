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
void push(List* list, DataNode data);


int main(){
    List* list = createList();

    DataNode data;
    data.id = 3;

    push(list, data);

    data.id= 9;

    push(list, data);

    printf("%d %d", list->head->data.id, list->head->next->data.id);

    system("pause");
}

List* createList(){
    List* list = (List*)  malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;

    return list;
}

void push(List* list, DataNode data){
    Node* node = (Node*) malloc(sizeof(Node));

    node->data = data;
    node->next = list->head;
    list->head = node;
    list->size++;
}