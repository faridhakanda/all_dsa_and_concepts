#include <bits/stdc++.h>
using namespace std;
#define MAX 5

typedef struct queue {
    int data[MAX+1];
    int head, tail;
} Queue;

void enqueue(Queue *q, int data) {
    if ((q->tail+1) % (MAX+1) == q->head) {
        cout<<"Queue is Full!"<<endl;
    } else {
        q->data[q->tail] = data;
        q->tail = (q->tail+1)%(MAX+1);
    }
}

void dequeue(Queue *q) {
    if (q->tail == q->head) {
        cout<<"Queue is empty!"<<endl;
    } else {
        int val;
        val = q->data[q->head];
        q->head = (q->head+1)%(MAX+1);
        cout<<"Queue value is: "<<val<<endl;
    }
}

int main() {
    Queue q;
    q.head = 0;
    q.tail = 0;

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    return 0;
}