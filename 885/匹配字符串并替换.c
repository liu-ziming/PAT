/*

�Ӽ�������һ�����ַ�����һ��ƥ���ַ�����һ���滻�ַ�����
�����ڳ� �ַ����в���ƥ���ַ�����
�����ƥ���ַ����������滻�ַ����滻��
��:�� ��:abcdd bc a ���Ϊ:aadd ����:adc d aaa ���:aaaac

*/

//����ģʽƥ��

#include <stdio.h>
#include <string.h>

int main()
{
	char source[1000],pattern[1000];
	char *qian,*hou,new[1000];
	char *q;
	int i=0,j=0,k=0;int start=-1;
	gets(source);
	gets(pattern);
	gets(new);
	for(i=0;source[i]!='\0';i++)
	{
		for(j=i,k=0;source[j]&&source[j]==pattern[k];j++,k++) ;
		if(pattern[k]=='\0') {
			start=i;//�Ӵ�λ�� 
			break;
			
		}
	}
	if(start==-1){
		printf("ƥ��ʧ��");return ;
	}
	hou=&source[start+strlen(pattern)];//Դ�ַ����ֳ����� 
	q=&source[start+strlen(pattern)-1];
	*q='\0';
	q=&source[start];
	*q='\0';
	qian=source;
	//�滻�м�
	strcat(qian,new);
	strcat(qian,hou);
	puts(source);
	
	
	
 } 


