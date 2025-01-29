#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    struct node *next;
} Node;



void insert_at_beginning(Node *node, int data);
void insert_at_end(Node *node, int data);
void insert_at_middle(Node *node, int position, int data);
void delete_beginning(Node *head);
void delete_end(Node *head);
void delete_middle(Node *head, int data);
int main() {

    return 0;
}