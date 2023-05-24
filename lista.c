#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void create(List *li){
    li->head = NULL;
    li->tail = NULL; 
}
void insertAtFirst(List *li, int e){
    Node *new;
    new = (Node*)malloc(sizeof(Node));
    if(li->head == NULL){
        li->tail = new;
    }
    new->next = li->head;
    li->head = new;
    new->e = e;
}
void insertAtEnd(List *li, int e){
    Node *new;
    new = (Node*)malloc(sizeof(Node));
    if(li->head == NULL){
        li->head = new;
    }else{
        li->tail->next = new;
    }
    new->next = NULL;
    li->tail = new;
    new->e = e;
}
void insertBefore(List *li, int e, Node *act){
    if(act == li->head){
        insertAtFirst(li, e);
    }else{
        Node *aux, *new;
        aux = li->head;
        while(aux->next != act){
            aux = aux->next;
        }
        new = (Node*)malloc(sizeof(Node));
        aux->next = new;
        new->next = act;
        new->e = e;
    }
}
void insertAfter(List *li, int e, Node *act){
    if(act == li->tail){
        insertAtEnd(li, e);
    }else{
        Node *aux, *new;
        aux = li->head;
        while(aux->next != act->next){
            aux = aux->next;
        }
        new = (Node*)malloc(sizeof(Node));
        act->next = new;
        new->next = aux->next->next;
        new->e = e;  
    }
}