// fast and slow pointer
// with linked list
#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *createNode(int data) {
    Node *head = (Node *)malloc(sizeof(Node));
    head->data = data;
    head->next = NULL;
    return head;
}

bool detectLoop(Node *head) {
    Node *fast = head, *slow = head;
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {
    Node *head;
    head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = head->next;

    if (detectLoop(head)) {
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }

    return 0;
}