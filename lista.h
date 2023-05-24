typedef struct node{
    int e;
    struct node *next;
}Node;

typedef struct list{
    Node *head;
    Node *tail;
}List;

void create(List *li);
void insertAtFirst(List *li, int e);
void insertAtEnd(List *li, int e);
void insertBefore(List *li, int e, Node *act);
void insertAfter(List *li, int e, Node *act);

// #include "list.c"