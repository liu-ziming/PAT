/*
3-7����̣�����һ���ַ�����ɾ�����е�ָ���ַ���
���磬�����ַ���abcdcf��ָ��ɾ��c������Ϊ��abdf��

*/

#include <stdio.h>

int main()
{
	char s[100],c;
	gets(s);
	scanf("%c",&c);
	char *p,*q;
	p=s;
	while(*p!='\0')
	{
		if(*p==c)
		{
			q=p;
			while(*q!='\0')
			{
				*q=*(q+1);
				q++;
			}
		}
		else    //����else  ����Ȼ����������ظ������ 
		    p++;
		
	 } 
	puts(s);
	
	
}

