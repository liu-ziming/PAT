/*
3- �Ӽ�������������һ�����Ȳ����� 20 ���ַ� ��������������ַ�����
���� ASCII ��Ĵ�С��С�� �������������������Ľ���� 
*/ 

#include <stdio.h>
#include <string.h>

int main()
{
	char s[21];char t; 
	gets(s);
	int i,j;
	for(i=1;i<strlen(s);i++)     //�������� 
	{
		t = s[i];
		j=i;
		while(t<s[j-1]&&j>0)
		{
			s[j] = s[j-1];
			j--;
		}
		s[j]=t;   //t  �Ĳ���λ�ø���� 
		
	}//for
	
	puts(s);
	

	
}
 




