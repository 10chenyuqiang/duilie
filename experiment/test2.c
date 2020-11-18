/*************************************************************************
    ###文件名       : test5.c
    ### 作者          : yuqiang
    ### Mail            : 2601458499@qq.com 
    ### 时间    : 2020年11月10日 星期二 21时21分08秒
 ************************************************************************/

#include<stdio.h>
#include<malloc.h>

#define n 11
#define m 3

typedef struct node {
	int no;
	struct node *next;
}node;

int main(int argc,char *argv[]){
	int k = 0;
	node *p, *q, *r;
	p = q = (node*)malloc(sizeof(node));
	p -> no = 1;
	for (int i=2; i<=n; i++){
		r = (node*)malloc(sizeof(node));
		r ->no = i;
		q->next = r;
		q = r;
	}
	q ->next= p;
	 q = p;
/*	 while (q->next !=q){
		 k++;
		 if (k == m){
			 p->next = q->next;
			 free(q);
			 q = p->next;
			 k = 0;
		 }else{
			 p = q;
			 q = q->next;
		 }
	 }*/
	 while (q->next != q){
		 for (int i=1; i<m ; i++){
			 p = q ;
			 q = q ->next;
		 }
		 p->next = q-> next;
		 free (q);
		 q = p->next;
	 }
	 printf("最后一个获胜者编号是: %d\n", q->no);
     return 0;
}
