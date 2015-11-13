/* 
 * File:   StaticStack.c
 * Author: pmargreff
 *
 * Created on November 13, 2015, 12:52PM
 */
#include<stdio.h>
#include<stdlib.h>
#include"StaticStack.h"

void reset(StaticStack *stack) {
    stack->floor = 0;
    stack->roof = 0;
    stack->size = MAX;
}

bool empty(StaticStack *stack) {
    return stack->roof == 0;
}

bool full(StaticStack *stack) {
    return (stack->roof == stack->size);
}

bool push(StaticStack *stack, Data newData) {
    if (!full(stack)) {
        stack->data[stack->roof] = newData;
        stack->roof++;
        return true;
    } else {
        return false;
    }
}

bool pop(StaticStack *stack, Data *data) {
    if (stack->roof == 0)
        return false;

    stack->roof--;
    *data = stack->data[stack->roof];
    return true;
}

void printStack(StaticStack *stack) {
    int i;
    
    if (!empty(stack)) {
        for (i = stack->roof - 1; i >= 0; i--) {
            printf("%d ", stack->data[i].number);
        }
    }
    printf("\n");
}