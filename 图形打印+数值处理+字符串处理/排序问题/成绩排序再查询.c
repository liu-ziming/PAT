/*
3-2. 编程，任意输入10个人的成绩，按从大到小的顺序排列。运行程序时，只要输入名次，计算机就能输出该名次对应的成绩。
*/

#include <stdio.h>
void qSort(int a[],int n)
{
	int i,j;
	for(i=1;i<n;++i)
	{
	    int temp=a[i];
	    for(j=i;j>0&&a[j-1]>temp;--j)
	        a[j]=a[j-1];
	    a[j]=temp;
	    
	}
}

int main()
{
	int a[100];
	int i,j;int m;
	for(i=0;i<10;++i)
	    scanf("%d",&a[i]);
	qSort(a,10);
	
	while(1)
	{
		printf("查询\n");
		scanf("%d",&m);
		printf("%d\n",a[m-1]);
	}
}
