/*
�Ӽ��������������ַ��� str1,str2���ϲ� str1,str2 �� str3 ���У�
�� ��Ӧ����,str1 �ĵ� 1 ���ַ�+str2 �ĵ� 1 ���ַ���
str1 �ĵ� 2 ���ַ��� str2 �ĵ� 2 ���ַ�����
�������һ���ַ����ϲ���ϣ���ʣ����ַ���ֱ�Ӽ��뵽 str3 ���档

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1000],s2[1000],s3[1000];
	gets(s1);
	gets(s2);
	int i=0,j=0,k=0; 
	while(s1[i]&&s2[j]){
		s3[k++]=s1[i++] + s2[j++];
	}
	if(s1[i]){
		s3[k]=s1[i];
		i++;k++;
		
	}
	if(s2[j]){
		s3[k++] = s2[j++];
	}
	s3[k] = '\0';
	puts(s1);
	puts(s2);
	puts(s3);	
	
	
 } 












