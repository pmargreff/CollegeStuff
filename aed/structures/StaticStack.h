/* 
 * File:   StaticStack.h
 * Author: pmargreff
 *
 * Created on November 1, 2015, 1:35 PM
 */

#include <stdbool.h>

#ifndef STATICSTACK_H
#define	STATICSTACK_H
#define MAX 10

typedef struct {
    int number;
} Data;

typedef struct {
    Data data[MAX];
    int roof;
    int floor;
    int size;
} StaticStack;

/**
 * init or reset a stack
 * @param heap - pointer to stack
 */
void reset(StaticStack *stack);

/**
 * @param stack- pointer to stack
 * @return 0 - if isn't empty. 1 - if is empty.
 */
bool empty(StaticStack *stack);
/**
 * @param stack - pointer to stack
 * @return 0 - if isn't full. 1 - if is full.
 */
bool full(StaticStack *stack);

/**
 * @param stack- pointer to stack
 * @param newData - copy to new data in stack
 * @return 
 */
bool push(StaticStack *stack, Data newData);

/**
 * @param stack- pointer to stack
 * @param data - pointer to data structure
 * @return  - 0 - if doesn't pop.  1 - if do pop with success
 */
bool pop(StaticStack *stack, Data *data);

/**
 * print stack if has any data
 * @param stack - pointer to stack
 */
void printStack(StaticStack *stack);

#endif	/* STATICSTACK_H */

