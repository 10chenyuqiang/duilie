/*************************************************************************
    ###文件名       : testsort.c
    ### 作者          : yuqiang
    ### Mail            : 2601458499@qq.com 
    ### 时间    : 2020年11月14日 星期六 17时49分15秒
 ************************************************************************/

#include<stdio.h>
#include"sort.h"
#define N 20

int main(int argc,char *argv[])
{	
	int a[N]; 
	printf("冒泡排序结果如下：\n");
	Bubble(a, N);
	printf("插入排序结果如下：\n");
	Insert(a, N);
	printf("选择排序结果如下：\n");
	Select(a, N);
	printf("快速排序结果如下：\n");
	Quick(a, N);
	
	return 0;
}
