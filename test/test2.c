/*************************************************************************
    ###文件名       : test2.c
    ### 作者          : yuqiang
    ### Mail            : 2601458499@qq.com 
    ### 时间    : 2020年11月05日 星期四 15时56分46秒
 ************************************************************************/

#include<stdio.h>
#include<malloc.h>

typedef int dataType;
typedef struct node {
//struct node {
	dataType date;
	struct node *next;
}LinkList,node;

//创建链表
LinkList* CreateList(){
	LinkList *head;
	head = (LinkList*)malloc(sizeof(LinkList));
	head->next = NULL;
	return head;
}

//求链表的元素个数
int Size(LinkList *l){
	node *p = l->next;
	int k = 0;
	while (p)
	{
	k++;
	p = p->next;
	}
	return k;
}


//求链表l的第k个位置插入元素x
void Insert(LinkList *l,int k, dataType x){
	if (k<1) exit(1);
	node *p = l;
	int i = 0;
	while (p && i<k-1){
		p = p->next;
		i++;
	}
	if (!p) exit(1);
	node *s = (node*)malloc(sizeof(node));
	s->data = x;
	s->next = p->next;
	p->next = s;
}

//删除链表l的第k个元素
void Delete(LinkList *l, int k){
	if (k<1) exit (1);
	node *p =l;
	int i = 0;
	while (p->next && i<k-1){
		p = p->next;
		i++;
	}
	if (p->next==NULL) exit(1);
	node *q = p->next;
	p->next == q->next;
	free(q);
}

//判断链表是否为空
int Empty (LinkList *l) {
	return 1->next == NULL;
}

//求链表l的第k个元素值
dataType GetData(LinkList *l, int k){
	if (k<1) exit (1);
	node *p = l;
	int i = 0;
	while (p && i<k) {
		p = p->next;
		i++;
	}
	if (!p) exit (1);
	return p->data;
}
 //判断链表是否为空
int Empty(LinkList *l){
	return l->next == NULL;
}

//求链表l的第k个元素的值
dataType GetData(LinkList *l,int k){
	if (k=1)exit(1);
	node *p = 1;
	int i = 0;
	while (p && i<k){
		p = p->next;
		i++;
	}
	if (!p) exit(1);
	return p->data;

}
int main(int argc,char *argv[])
{
	LinkList *list = CreateList();
	Insert (list, 1, 10);
	Insert (list, 1, 20);
	Delete (list, 2);
	Insert (list, 1, 30);
	Insert (list, 1, 40);
	printf("链表的元素个数为： %d\n", Size(list));
	//Print(list);

     return 0;
}
