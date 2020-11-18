/*************************************************************************
    ###文件名       : test4.c
    ### 作者          : yuqiang
    ### Mail            : 2601458499@qq.com 
    ### 时间    : 2020年11月08日 星期日 17时15分44秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int datatype;
typedef struct linklist
{
	datatype data;  /* 数据域 */
	struct linklist *next;  /* 指针域 */
}link_list, *link_plist;

//初始化
void init_linklist(link_plist *list)
{
	*list = (link_plist)malloc(sizeof(link_list));
	(*list)->next = NULL;         //将next设为NULL，建立空链表
}

//插入
void insert_linklist(link_plist head, link_plist new)
{
    new->next = head->next;
    head->next = new;
}

