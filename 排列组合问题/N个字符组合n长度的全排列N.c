/*
//�ݹ�(10��)�����������a,b,c��ɵĳ���Ϊn���ַ��������������
*/
#include <stdio.h>
#include <stdlib.h>
#define N 3 
int n;
int total=0; 



void func(char s[],int count) //k�ǵ�ǰ�±� 
{
	int i;
	if(count==0){       //�ݹ�������� 
		 for(i=0;i<n;i++)
		   printf("%c",s[i]);
		printf("\n");
		total++;
	}
	else
	for(i=0;i<N;i++)   //N���ַ����n���ȵ�ȫ���� 
	{
		s[count-1] = 'a'+i; //count �����ַ������� ��Ҳ�䵱�±� 
		func(s,count-1);  
	}
	return ;
}

int main()
{
	char s[100];
	scanf("%d",&n);
	func(s,n);
	printf("total:%d\n",total);
	return 0;
 } 
