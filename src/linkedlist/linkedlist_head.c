#include "linkedlist.h"
//
// Created by 26790 on 2026/8/12.
//
#define HEADINSERT 0
#define TAILINSERT 1

struct llist_node {
    int data;
    struct llist_node *next;
};

//创建头节点
struct llist_node *llist_create(void) {
    struct llist_node *handler = NULL; //指针保存开辟空间的首地址
    handler = malloc(sizeof(struct llist_node)); //开辟头节点的空间
    if (handler == NULL) {
        //判断开辟头节点空间是否失败
        return NULL; //开辟失败就结束并返回空
    }
    handler->next = NULL; //有头单向不循环链表,头节点的next指向NULL
    return handler; //返回开辟空间的首地址
}

//插入数据节点
int llist_insert(struct llist_node *handler, const void *data, int mode) {
    struct llist_node *newnode = NULL; //newnode指向新的数据节点
    struct llist_node *p = handler; //p指针代替handler指针做操作
    newnode = malloc(sizeof(struct llist_node)); //malloc给新的数据节点开辟空间
    if (newnode == NULL) {
        return -1; //开辟失败就返回-1并结束
    }
    memcpy(newnode, data, sizeof(struct llist_node)); //把data指针指向的数据cp到新的数据节点
    switch (mode) {
        case HEADINSERT:
            break;
        case TAILINSERT:
            while (p->next != NULL) {
                p = p->next;
            }
            break;
        default:
            free(newnode);
            return -2;
    }
    newnode->next = p->next; //游标指针p将
    p->next = newnode;
    return 0;
}

//遍历链表
void llist_display(const struct llist_node *handler) {
    struct llist_node *cur = NULL; //cur指向每一个数据节点
    for (cur = handler->next; cur != NULL; cur = cur->next) {
        printf("%d ", cur->data);
    }
}

//销毁链表
void llist_destroy(struct llist_node *handler) {
    struct llist_node *back = handler; //指针指向要释放节点的前一个节点
    struct llist_node *cur = back->next; //cur指向要释放的节点
    while (cur != NULL) {
        back->next = cur->next; //要释放的节点赋值cur指向后一个节点
        free(cur); //释放当前节点
        cur = back->next; //头节点的下一个节点
    }
    free(back);
}

//查找节点
static struct llist_node *find(const struct llist_node *handler, const void *find_data) {
    struct llist_node *cur = NULL;
    int target = *(const int *) find_data;
    for (cur = handler->next; cur != NULL; cur = cur->next) {
        if (cur->data == target) {
            return cur;
        }
    }
    return NULL;
}

//删除节点
int llist_delete(struct llist_node *handler, const void *find_data) {
    struct llist_node *back = handler; //定义一个指向要删除节点前一个的指针
    struct llist_node *cur = NULL; //cur指向要删除的节点
    cur = find(handler, find_data); //查找要删除的节点
    if (cur == NULL) {
        //如果没找到返回-1结束函数
        return -1;
    }
    while (back->next != NULL) {
        back = back->next; //back指向要删除的节点
    }
    back->next = cur->next; //cur指向的节点摘除
    free(cur);
    return 0;
}

//取出节点
int llist_fetch(struct llist_node *handler, const void *find_data, void *save) {
    struct llist_ndoe *back = handler; //back指向要拿出节点的前一个节点
    struct llist_node *cur = NULL; //cur指向要拿出的节点
    cur = find(handler, find_data);
    if (cur == NULL) {
        return -1;
    }
    while (back->next != cur) {
        back = back->next;
    }
    back->next = cur->next;
    memcpy(save, cur, sizeof(struct llist_node));
    free(cur);
    return 0;
}
