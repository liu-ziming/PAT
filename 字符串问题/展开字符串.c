/*
3-28����̣����������ַ���s1��s2����s1���Ƶ�s2�����s1��s2��
����ʱ�����ַ���s1�д�����д��ʽ ���磺 a - z ) 
Ӧת��Ϊ�ַ���s2�е�������ʽ��abcd����xyz����
"-"��֮ǰ���ַ�����С��"-"��֮����ַ����ǺϷ�����д��ʽ��
���磬s1=abc-fg����s2=abcdefg�����s1=abc-af���� s2=abc-af��
Ӧ�ܹ������������ʾ��ASCII�ַ���
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100],s2[100];
	gets(s1);
	int i;int j=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]=='-')
		{
			int m=s1[i-1];
			int n=s1[i+1];
			if(m<n)
			{
				char r;
				for(r=m+1;r<=n-1;r++)
				    s2[j++]=r;
			}
			else
			{
				
				s2[j++]='-';
				
			}
		 } 
		 else
		{
			s2[j++]=s1[i];
		}
	}
	s2[j]='\0';
	puts(s2);
	
	
	
	
}


