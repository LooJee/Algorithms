//
// Created by 卢杰 on 16/3/16.
//

#ifndef ALGORITHMS_CIRCLEQUEUE_H
#define ALGORITHMS_CIRCLEQUEUE_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef int ELETYPE;

typedef struct st_curcle_queue_t {
    ELETYPE *queue;
    size_t front;
    size_t rear;
    size_t capacity;
    size_t size;
}*pt_cirque;

pt_cirque InitQueue(size_t size);
void Enqueue(ELETYPE data, pt_cirque circle_queue);
void Dequeue(pt_cirque circle_queue);
void DisplayQueue(pt_cirque circle_queue);
void DestroyQueue(pt_cirque circle_queue);
#endif //ALGORITHMS_CIRCLEQUEUE_H
