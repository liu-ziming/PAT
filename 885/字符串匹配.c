/*
����һ�����룬Ҫ��ͳ�������if ,while ,for �ؼ��ֵ�λ�ã�
ע�� �������ڵĲ�ͳ�� 
Ҫ���ճ���˳���������  ��
*/
/* ˼· 
�Ȱ������ڶ����ó� #  �� ���� ֱ�����ַ��� ģʽƥ��
*/
#include <stdio.h>
#include <string.h>
void predeal(char *s)
{
	int i;int flag=0;
	while(s[i]){
		if(s[i]=='"')
			if(flag==0)//�������ţ� �� ������ 
				flag=1;//��Ϊ1 ��ʼ�� #
			else{
				flag=0;//������  �� 0 
			} 
		else if(flag==1){
			s[i]='#';
		}	
		
		i++;
	}
}

int main()
{
	char code[301],_if[3]="if",_while[6]="while",_for[4]="for";
	gets(code);
	predeal(code);
	int i,j,k,m,n;
	for(i=0;code[i]!='\0';i++)
	{
		for(j=i,k=0;code[j]==_if[k];j++,k++);
		if(_if[k]=='\0'){
			printf("if : %d\n",i+1);
		}
		for(j=i,k=0;code[j]==_while[k];j++,k++);
		if(_while[k]=='\0'){
			printf("while : %d\n",i+1);
		}
		for(j=i,k=0;code[j]==_for[k];j++,k++);
		if(_for[k]=='\0'){
			printf("for : %d\n",i+1);
		}
	}
	
	
	
}
 

