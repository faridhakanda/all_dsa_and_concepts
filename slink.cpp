#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    struct node *next;
} Node;


Node *create_list(int data) {
    Node *head = NULL, *temp = NULL, *current = NULL;
    temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        current = temp;
    } else {
        while (head != NULL) {
            head = head->next;
        }
        head->next = temp;
        current = temp;
        current = current->next;
    }
    return head;
}

void printList(Node *head) {
    while (head != NULL) {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"Null"<<endl;
}

void insert_at_beginning(Node *head, int data) {
    Node *current = (Node *)malloc(sizeof(Node));
    current->data = data;
    current->next = head;
    head = current;
    printList(head);
}
void insert_at_end(Node *head, int data) {
    Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    current->next = newNode;
    current = newNode;
    printList(head);
}
void insert_at_middle(Node *head, int position, int data) {
    Node *current = head;
    int index = 0;
    while (current->next != NULL) {
        index++;
        if (index == position) {
            Node *newNode = (Node *)malloc(sizeof(Node));
            newNode->data = data;
            newNode->next = current->next;
            current->next = newNode;
        }
        current = current->next;
    }
    printList(head);
}
void delete_beginning(Node *head) {
    Node *current = (Node *)malloc(sizeof(Node));
    current = head;
    head = head->next;
    free(current);
    printList(head);
}
void delete_end(Node *head) {
    Node *current = (Node *)malloc(sizeof(Node));
    current->next = head;
    Node *temp = current;
    while (current->next != NULL) {
        temp = current;
        current = current->next;
    }
    temp->next = NULL;
    free(current);
    printList(head);
}
void delete_middle(Node *head, int data) {
    Node *current = (Node *)malloc(sizeof(Node));
    current->next = head;
    Node *temp = current;
    while(temp->next != NULL) {
        if(temp->next->data == data) {
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
    }
    free(current);
    printList(head);
}
int search(Node *head, int data) {
    int index = 0;
    while (head != NULL) {
        if (head->data == data) {
            return index;
        }
        head = head->next;
        index++;
    }
    return -1;
}
void reverse(Node *head) {
    Node *next = NULL, *prev = NULL;
    while (head != NULL) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    printList(head);
}
int main() {
    Node *head;
    head = create_list(1);
    
    insert_at_beginning(head, 2);
    insert_at_end(head, 9);
    insert_at_end(head, 11);
    insert_at_middle(head, 1, 11);

    //delete_beginning(head);
    //delete_end(head);
    delete_middle(head, 11);

    //reverse(head);
    
    //cout<<search(head, 1)<<endl;
    
    return 0;
}

