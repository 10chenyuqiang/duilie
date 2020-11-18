/*************************************************************************
    ###文件名       : test6.c
    ### 作者          : yuqiang
    ### Mail            : 2601458499@qq.com 
    ### 时间    : 2020年11月12日 星期四 16时02分33秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20

void bubble1(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{for (j=0;j<n-i;j++){

		if (a[j]>a[j+1])
			{
			 t=a[j];
			 a[j]=a[j+1];
			 a[j+1]=t;
			 }
		}

	}
}
int main(int argc,char *argv[])
{int a[N], i;
srand(time(0));

for (i=0; i<N;i++)
	a[i] = rand () %100;
printf("初始数据为：");

for (i = 0;i<N;i++)
printf("%d ",a[i]);
printf("\n");
bubble1(a, N);
printf("排序后数据：");
for (i = 0;i<N;i++)
	printf("%d ",a[i]);
printf("\n");
}
