/*
3-26. ��̣���������ַ������뽫���ǰ��Ӵ�С��˳�����к������
*/
#include<stdio.h>
#include<string.h>


int main()
{
	char s[100][100];
	int i;
	for(i=0;i<5;++i)
	    scanf("%s",s[i]);
	int j;
	for(i=0;i<5;++i)
	    for(j=i+1;j<5;j++)
	        if(strcmp(s[i],s[j])<0)
	        {
	        	char t[100];
	        	strcpy(t,s[i]);strcpy(s[i],s[j]);strcpy(s[j],t); 
			}
	printf("�����\n");
	for(i=0;i<5;i++)
	    printf("%s\n",s[i]);
	
}
