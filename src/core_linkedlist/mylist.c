//
// Created by 26790 on 2026/8/17.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"list.h"

#define NAMESIZE 20

typedef struct stu {
    int id;
    char name[NAMESIZE];
    int math;
    struct list_head node;
} STU;

void print(const void *data) {
    const STU *p = data;
    printf("%d\t%s\t%d\n", p->id, p->name, p->math);
}

int main(void) {
    LIST_HEAD(handler); //创建头节点
    STU *data = NULL; //data指针指向开辟的空间(存储数据)
    STU *datap = NULL; //datap指向每个数据节点的数据域(数据节点的起始地址)
    struct list_head *pos = NULL; //pos指针指向每个数据节点的指针域
    int find_id = 100; //存储要查找的ID号
    char *find_name = "stu4"; //指向要查找的姓名
    int i = 0; //循环变量

    for (i = 0; i < 5; i++) {
        data = malloc(sizeof(STU)); //开辟空间
        if (data == NULL) {
            break;
        }
        data->id = 100 + i;
        sprintf(data->name, "stu%d", i);
        data->math = 100 - i;
        list_add(&data->node, &handler); //头插法插入数据节点
        //list_add_tail(&data->node,&handler);//尾插法插入数据节点
    }

    list_for_each(pos, &handler) {
        //遍历链表
        datap = list_entry(pos, STU, node);
        print(datap);
    }
    list_for_each(pos, &handler) {
        //查找节点
        datap = list_entry(pos, STU, node);
        if (datap->id == find_id) {
            print(datap);
        } else {
            printf("NOT FOUND\n");
        }
    }

    list_for_each(pos, &handler) {
        //销毁链表
        datap = list_entry(pos, STU, node); //计算出数据节点中数据域的首地址
        list_del(pos); //把数据节点从链表中摘除
        free(datap); //释放整个数据结构
        pos = &handler; //pos指针指向头节点
    }

    list_for_each(pos, &handler) {
        //取出节点
    }

    list_for_each(pos, &handler) {
        //删除节点
    }
    return 0;
}
