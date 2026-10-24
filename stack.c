#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack {
    int* items;
    int top;
    int capacity;
};

void initStack(struct Stack* s, int cap) {
    s->capacity = cap;
    s->top = -1;
    s->items = (int*)malloc(cap * sizeof(int));
}

bool isFull(struct Stack* s) { return s->top == s->capacity - 1; }
bool isEmpty(struct Stack* s) { return s->top == -1; }

void push(struct Stack* s, int val) {
    if (isFull(s)) return;
    s->items[++(s->top)] = val;
}

int pop(struct Stack* s) {
    if (isEmpty(s)) return -1;
    return s->items[(s->top)--];
}

int peek(struct Stack* s) {
    if (isEmpty(s)) return -1;
    return s->items[s->top];
}

void freeStack(struct Stack* s) {
    free(s->items);
}

int main() {
    struct Stack s;
    initStack(&s, 5);
    push(&s, 10);
    push(&s, 20);
    printf("Top: %d\n", peek(&s));
    printf("Popped: %d\n", pop(&s));
    freeStack(&s);
    return 0;
}