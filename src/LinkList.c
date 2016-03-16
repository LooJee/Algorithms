/*************************************************************************
	> File Name: LinkList
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 16/3/16
 ************************************************************************/

#include "LinkList.h"

pt_Link InitLink()
{
    pt_Link list = (pt_Link)malloc(sizeof(struct st_link_t));
    if (!list)
        return NULL;
    list->head = CreateNewNode(0);

    if (!list->head)
        return NULL;

    list->size = 0;

    return list;
}

pt_Node CreateNewNode(ELETYPE data)
{
    pt_Node node = (pt_Node)malloc(sizeof(struct st_node_t));
    if (!node)
        return NULL;

    node->data = data;
    node->next = NULL;

    return node;
}

pt_Node LastNode(pt_Link list)
{
    pt_Node node = list->head;

    while (node->next)
        node = node->next;

    return node;
}

bool AddData(ELETYPE data, pt_Link list)
{
    pt_Node node = CreateNewNode(data);

    if (!node)
        return false;

    pt_Node endNode = LastNode(list);
    endNode->next = node;
    ++list->size;

    return true;
}

void DisplayList(pt_Link list)
{
    pt_Node node = list->head->next;

    printf("current list: ");
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void DestroyList(pt_Link list)
{
    pt_Node head = list->head;
    pt_Node node = head->next;
    while (node) {
        head->next = node->next;
        free(node);
        node = head->next;
        --list->size;
    }

    free(list);
}

void DeleteEle(pt_Link list, ELETYPE ele)
{
    pt_Node prenode = list->head;
    pt_Node node = prenode->next;
    while (node) {
        if (node->data == ele) {
            prenode->next = node->next;
            free(node);
            node = prenode->next;
            --list->size;
        }
        else {
            prenode = prenode->next;
            node = node->next;
        }
    }
}