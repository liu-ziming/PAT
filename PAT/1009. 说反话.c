
/*
1009. ˵���� (20)
ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue

����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�

�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�
����������

Hello World Here I Come

���������

Come I Here World Hello
*/


#include <stdio.h>
#include <string.h>
int main()
{
	char str[81],result[81];
	gets(str);
	int len = strlen(str);
	*result=0;            //result��һλ����Ϊ�ջ�����ǰ������������Ӱ�������� 
	for(len--;len>=0;len--)
	{
		if(*(str+len)==' ')
		{   
		    *(str+len)='\0';
			strcat(result,str+len+1);
			strcat(result," ");	
		}		
	}
	strcat(result,str);
	puts(result);
	
	
	
}

