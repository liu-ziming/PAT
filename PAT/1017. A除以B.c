
/*
1017. A除以B (20)
时间限制
100 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue

本题要求计算A/B，其中A是不超过1000位的正整数，B是1位正整数。你需要输出商数Q和余数R，使得A = B * Q + R成立。

输入格式：

输入在1行中依次给出A和B，中间以1空格分隔。

输出格式：

在1行中依次输出Q和R，中间以1空格分隔。
输入样例：

123456789050987654321 7

输出样例：

17636684150141093474 3
*/
//A太长了，要用数组存成string  

#include <stdio.h>
#include <string.h>
int main()
{
	char A[1000];int B,t=0,flag=0;   //flag 标志被除数为个位数时  ，是否为第一个被除数t
	scanf("%s%d",A,&B);              //t 为除法运算中每次的被除数 
	int len = strlen(A);
	int i;
	for(i=0;i<len;i++)
	{
		t = 10*t +(A[i]-'0');
		if(t>=B)
		{
			printf("%d",t/B);
			flag = 1;
		}
		else if(flag)       //t<B  且不是第一个被除数，那么商是 0； 第一个被除数不输出，无需写； 
		    printf("0");
		t = t%B;
	}
	if(flag==0)
	    printf("0");
	printf(" %d",t);  //输出余数 
	
	
}

