/*��д���� ������ʽ ���ָñ��ʽ����������
/*������ı��ʽ�е�����ȫ��ȥ���������ȥ�����ź�ı��ʽ��
/*���磨a-(b+c))
    ��Ϊa-b-c
*/ 

#include <stdio.h>

#define MAXSIZE 20
void main() 
{
	char A1[MAXSIZE],A2[MAXSIZE]; 
	gets(A1);
	char *p = A1;
	int i=0,j=0;
	while(p)
	{
		if(p!='('&&p!=')')
		    A2[j++] = A1[i++];
		else
		    ++i;
		
	}
	A2[j]  =  '\0';
	puts(A2);
	
 } 
 
