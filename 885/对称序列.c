/*
从键盘输入一个大写字母，则输出一个对称的序列，如输入 E，则输出 AbCdEdCbA （这也不是很难就两个 for 循环） 
/*/

#include <stdio.h>

int main()
{
	char ch,str[100];
	printf("输入一个大写字母:"); 
	scanf("%c",&ch);
	int i;
	for(i=0;i<ch-'A';i++)
	{
		if((i)%2==0) printf("%c",'A'+i);
		else  printf("%c",'a'+i);
	}

	for(i=0;i<=ch-'A';i++)
	{
		if((i)%2==0) printf("%c",ch-i);
		else  printf("%c",ch-i+32);
	}

	
}
