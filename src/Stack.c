/*************************************************************************
	> File Name: Stack
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 16/3/16
 ************************************************************************/

#include "Stack.h"

pt_stack InitStack()
{
    pt_stack stack = (pt_stack)malloc(sizeof(struct st_stack_t));
    if (!stack)
        return NULL;

    stack->bottom = CreateNewNode(0);
    if (!stack->bottom)
        return NULL;

    stack->bottom->next = NULL;
    stack->top = stack->bottom;
    stack->size = 0;

    return stack;
}

pt_node CreateNewNode(ELETYPE data)
{
    pt_node node = (pt_node)malloc(sizeof(struct st_node_t));
    if (!node)
        return NULL;
    node->data = data;
    node->next = NULL;

    return node;
}

bool Push(ELETYPE data, pt_stack stack)
{
    pt_node node = CreateNewNode(data);
    if (!node)
        return false;

    node->next = stack->top;
    stack->top = node;
    ++stack->size;

    return true;
}

bool Pop(pt_stack stack)
{
    if (!stack->size)
        return false;

    pt_node node = stack->top;
    stack->top = node->next;
    free(node);
    --stack->size;

    return true;
}

bool DestroyStack(pt_stack stack)
{
    if (!stack->size)
        return false;

    pt_node node = stack->top;
    while (node != stack->bottom) {
        stack->top = node->next;
        free(node);
        node = stack->top;
        --stack->size;
    }

    return true;
}

void DisplayStack(pt_stack stack)
{
    if (!stack->size) {
        printf("stack is empty\n");
        return ;
    }

    pt_node node = stack->top;
    printf("current stack: ");

    while (node != stack->bottom) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}