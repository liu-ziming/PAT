/*
�Ӽ�������һ����д��ĸ�������һ���ԳƵ����У������� E������� AbCdEdCbA ����Ҳ���Ǻ��Ѿ����� for ѭ���� 
/*/

#include <stdio.h>

int main()
{
	char ch,str[100];
	printf("����һ����д��ĸ:"); 
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
