/*��д���� ������ʽ-ֻ�мӼ���- ���ָñ��ʽ����������
/*������ı��ʽ�е�����ȫ��ȥ���������ȥ�����ź�ı��ʽ��
/*���磨a-(b+c))
    ��Ϊa-b-c
*/ 

#include <stdio.h>
#define MAXSIZE 100
int main() 
{
	char A1[MAXSIZE],A2[MAXSIZE]; 
	gets(A1);
	char *p = A1;
	int i=0,j=0;
	while(p!='\0')
	{
		if((*p!='(')&& (*p!=')'))
		    A2[j++] = A1[i++];
		else
		    ++i;
	    ++p;	
	}
	A2[j]='\0';
	puts(A2);
	
 } 
 
