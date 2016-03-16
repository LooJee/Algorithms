/*************************************************************************
	> File Name: CircleQueue
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 16/3/16
 ************************************************************************/

#include "CircleQueue.h"

pt_cirque InitQueue(size_t capacity)
{
    ELETYPE *queue = (ELETYPE *)malloc(sizeof(ELETYPE) * capacity);
    if (!queue)
        return NULL;

    pt_cirque circleQueue = (pt_cirque)malloc(sizeof(struct st_curcle_queue_t));
    if (!circleQueue)
        return NULL;

    circleQueue->queue = queue;
    circleQueue->front = 1;
    circleQueue->rear = 0;
    circleQueue->size = 0;
    circleQueue->capacity = capacity;

    return circleQueue;
}

void Enqueue(ELETYPE data, pt_cirque circle_queue)
{
    if (circle_queue->capacity == 0)
    {
        printf("capacity of queue is zero\n");
        return;
    }

    if (circle_queue->size == circle_queue->capacity) {
        printf("queue was full\n");
        return;
    }

    if (++circle_queue->rear == circle_queue->capacity)
        circle_queue->rear = 0;

    circle_queue->queue[circle_queue->rear] = data;
    ++circle_queue->size;
}

void Dequeue(pt_cirque circle_queue)
{
    if (circle_queue->capacity == 0) {
        printf("capacity of queue is zero\n");
        return;
    }

    if (circle_queue->size == 0) {
        printf("queue was empty\n");
        return;
    }

    if (++circle_queue->front == circle_queue->capacity)
        circle_queue->front = 0;
    --circle_queue->size;
}

void DisplayQueue(pt_cirque circle_queue)
{
    size_t n = circle_queue->front;
    size_t i = 0;

    printf("current queue: ");
    while (i++ != circle_queue->size)
    {
        printf("%d ", circle_queue->queue[n]);
        if (n == circle_queue->capacity)
            n = 0;
        ++n;
    }
    printf("\n");
}

void DestroyQueue(pt_cirque circle_queue)
{
    free(circle_queue->queue);
    free(circle_queue);
}