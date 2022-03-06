#ifndef STACK_H_INCLUDE
#define STACK_H_INCLUDE

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct st {
    size_t top;
    size_t cap;
    int* arr;

    char isEmpty;
};

struct st* st_construct(size_t cap) {
    struct st* stack = (struct st*) malloc(sizeof(struct st));
    stack->cap = cap;
    stack->top = 0;
    stack->isEmpty = 1;

    stack->arr = (int*) malloc(cap * sizeof(int));
    return stack;
}

void st_print(struct st* stack) {
    printf("[ ");
    for(size_t i = 0; i <= stack->top; i++) {
        printf("%d", stack->arr[i]);
        if(i != stack->top) {
            printf(", ");
        }
    }
    printf(" ]\n");
}

int st_isEmpty(struct st* stack) {
    return (int)stack->isEmpty;
}

int st_isFull(struct st* stack) {
    if(stack->isEmpty == 0 && stack->top == (stack->cap - 1) )
        return 1;
    return 0;
}

void st_push(struct st* stack, int e) {
    if(st_isFull(stack)) {
        return;
    }

    stack->arr[++stack->top] = e;
    st_print(stack);
}

int st_pop(struct st* stack) {
    if(st_isEmpty(stack)) {
        return INT_MIN;
    }
    return stack->arr[stack->top--];
}

int st_peek(struct st* stack) {
    if(st_isEmpty(stack)) {
        return INT_MIN;
    }
    return stack->arr[stack->top];
}

#endif