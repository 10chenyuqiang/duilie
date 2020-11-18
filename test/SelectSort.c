/*************************************************************************
    ###文件名       : SelectSort.c
    ### 作者          : yuqiang
    ### Mail            : 2601458499@qq.com 
    ### 时间    : 2020年11月14日 星期六 13时43分40秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"SelectSort.h"
#include"InsertSort.h"
#include<time.h>
#define N 20


int main(int argc,char *argv[])
{
	int a[N], i;
	srand(time(0));
	for (i=0; i<N; i++) 
		a[i] = rand() % 100;
	printf("初始数据为：");
	for (i=0; i<N; i++)
		printf("%d ",a[i]);
	printf("\n");
	//InsertSort(a, N);
	SelectSort(a, N);
	printf("排序后数据：");
	for (i=0; i<N; i++)
		printf("%d ", a[i]);

	printf("\n");
     return 0;
}
