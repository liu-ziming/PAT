/*
1.����void  fun(char  *s)�������ַ���s�����е��ַ�ǰ��һ��λ�ã����е�һ���ַ��Ƶ����
��ԭ�ַ���ΪMn.123xyz�����ú�����Ϊ��n.123xyzM.��ֱ���ں���fun��{}����������.
*/

 

#include <stdio.h>

void func(char *s)
{
	int t;
	t=s[0];
	int i;
	for(i=0;s[i+1]!='\0';i++)
	    s[i]=s[i+1];
	s[i]=t;
}

int main()
{
	char s[100];int n,i; 
	gets(s);
	scanf("%d",&n);
	for(i=0;i<n;i++)   //ѭ������nλ�͵���n�� 
	    func(s);
	
	puts(s);
	
 } 
