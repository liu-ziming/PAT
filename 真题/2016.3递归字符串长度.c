/*
2016.3
�����ַ������Ի���Ϊ���������ݹ����ַ����ĳ��ȣ��������κα�����ͳ�ƣ����ǵݹ鲻�÷֣�
*/

#include <stdio.h>

int len(char *s)
{
	if(*s=='\0') return 0;
	else 
	{
		
		return 1+len(s+1); 
	}
}

int main()
{
	char s[1000];
	gets(s);
	int n=len(s);
	printf("strlen == : %d",n);
	
}
