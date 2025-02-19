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

int search(Node *head, int data) {
    int index = 0;
    while (head != NULL) {
        if (head->data == data) {
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}
void reverse(Node *head);

int main() {
    Node *head;
    return 0;
}