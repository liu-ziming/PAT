/*
1.����һ�鵥�ʣ����ִ�Сд����ͳ������ĸ��ͬ�ĵ��ʸ�����
��ͬ�ĵ��ʲ��ۼӣ�
����� ʽ����ĸ���Ը���ĸΪ�׵ĵ��ʸ���
*/

#include <stdio.h>
#include <stdio.h>

int main()
{
	char str[1000][100];char c;
	int count[1000]={0};
	int i=0,j;int n;
	scanf("%s",str[i++]);
	c=getchar();
	while(c!='\n')
	{
		scanf("%s",str[i++]);
		c=getchar();
	}
	n=i;
	for(i=0;i<n;i++)
	{
		
		count[str[i][0]-'A']++;
	}
	for(i=0;i<n;i++)//��ȥ�ظ����ʵ����� 
	{
		int num=0;
		for(j=0;j<n;j++)
			if(strcmp(str[i],str[j])==0&&i!=j){
				num++;
			}
		count[str[i][0]-'A']-=num;
	}
	for(i=0;i<100;i++)
	{
		if(count[i]!=0)
			printf("%c  %d\n",'A'+i,count[i]);
	}
}
 


 

