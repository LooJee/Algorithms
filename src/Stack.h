//
// Created by 卢杰 on 16/3/16.
//

#ifndef ALGORITHMS_STACK_H
#define ALGORITHMS_STACK_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef int ELETYPE;

typedef struct st_node_t {
    ELETYPE data;
    struct st_node_t *next;
}*pt_node;

typedef struct st_stack_t {
    pt_node top;
    pt_node bottom;
    size_t size;
}*pt_stack;

pt_stack InitStack();
pt_node CreateNewNode(ELETYPE data);
bool Push(ELETYPE data, pt_stack stack);
bool Pop(pt_stack stack);
bool DestroyStack(pt_stack stack);
void DisplayStack(pt_stack stack);

#endif //ALGORITHMS_STACK_H
