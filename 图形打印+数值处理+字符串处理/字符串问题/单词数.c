/*
 3-21. �ÿո�ֿ����ַ�����Ϊ���ʡ���������ַ�����ֱ�������˵���"stop"ʱ��ֹͣ�����������ʵ�������
*/

#include<stdio.h>
#include<string.h>
#define N 100
void main()
{
	int count=1,i,j;
	char a[N];
	scanf("%s",a);
	while(strcmp(a,"stop")!=0){
		scanf("%s",a);
		count++;
		
	}
	printf("%d\n",count);	
}




 

