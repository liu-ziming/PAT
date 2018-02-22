/*
//递归(10分)，输出所有由a,b,c组成的长度为n的字符串，并输出个数
*/
#include <stdio.h>
#include <stdlib.h>
#define N 3 
int n;
int total=0; 



void func(char s[],int count) //k是当前下标 
{
	int i;
	if(count==0){       //递归结束条件 
		 for(i=0;i<n;i++)
		   printf("%c",s[i]);
		printf("\n");
		total++;
	}
	else
	for(i=0;i<N;i++)   //N个字符组合n长度的全排列 
	{
		s[count-1] = 'a'+i; //count 控制字符串长度 ，也充当下标 
		func(s,count-1);  
	}
	return ;
}

int main()
{
	char s[100];
	scanf("%d",&n);
	func(s,n);
	printf("total:%d\n",total);
	return 0;
 } 
