//
// Created by 卢杰 on 16/3/16.
//

#ifndef ALGORITHMS_LINKLIST_H
#define ALGORITHMS_LINKLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ELETYPE;

typedef struct st_node_t {
    ELETYPE data;
    struct st_node_t *next;
}*pt_Node;

typedef struct st_link_t {
    pt_Node head;
    size_t size;
}*pt_Link;

pt_Node CreateNewNode(ELETYPE data);
pt_Link InitLink();
pt_Node LastNode(pt_Link list);
bool AddData(ELETYPE data, pt_Link list);
void DisplayList(pt_Link list);
void DestroyList(pt_Link list);
void DeleteEle(pt_Link list, ELETYPE ele);
#endif //ALGORITHMS_LINKLIST_H
