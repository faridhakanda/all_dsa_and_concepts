// doubly linked list 
#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
} Node;

Node *create_list(int data) {
    Node *head = NULL, *temp = NULL, *current = NULL;
}

void print_list(Node *head);

// inserting data in the doubly linked list
void insertAtBeginning(Node *head, int data);
void insertAtMiddle(Node *head, int position, int data);
void insertAtEnd(Node *head, int data);

// deleting data in the doubly linked list
void deleteBeginning(Node *head);
void deleteMiddle(Node *head, int data);
void deleteEnd(Node *head);

int main() {
    
    return 0;
}