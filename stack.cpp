#include <bits/stdc++.h>
using namespace std;
#define MAX 5

typedef struct stack {
    int data[MAX];
    int top;
} Stack;

void push(Stack *s, int data) {
    if (s->top < MAX) {
        s->data[s->top] = data;
        s->top += 1;
    } else {
        cout<<"Stack is Full!"<<endl;
    }
}

void pop(Stack *s) {
    if (s->top == 0) {
        cout<<"Stack is Empty!"<<endl;
    } else {
        s->top -= 1;
        cout<<"Stack value is: "<<s->data[s->top]<<endl;
    }
}

int main() {
    Stack s;
    s.top = 0;

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    push(&s, 5);
    push(&s, 6);

    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    return 0;
}