//4.3 487 - 3279

#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char telNumber[10000][9];  //���봮 + ��\0'  =9 
char s[80];    //��ʼ����
char map[]="222333444555666777888999";  //���ݽṹ����ʾ  ��ĸ���� ��������ֵĶ�Ӧ��ϵ

int cmp(const void *elem1,const void *elem2)   
{

	return(strcmp((char*)elem1,(char*)elem2));
 } 

void standardizeTel(int n)
{
	int j,k;   //j ��old�±�  k�� new �±ꣻ
	j=k=-1;
	 //��Ϊwhile ѭ��ÿ���� ++  ����Ҫj k ��ʼ�� -1  
	while(k<8)          
	{
		j++;
		if(s[j]=='-')
		    continue;
		k++;
		if(k==3)
		{
			telNumber[n][k]='-';   //��׼�����ʽ  123-1234 
			k++; 
		}
		if(s[j]>='A'&&s[j]<='Z')   //��������ĸ�Ĵ��� 
		{
			telNumber[n][k]=map[s[j]-'A'];continue;
		}
		   //���������� 
		telNumber[n][k]=s[j];
	}
	telNumber[n][k]='\0';       //�ַ��� 
	return ;
	
}

void main()
{
	int n,i,j;
	int flag;  //�Ƿ�����ظ�����;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		standardizeTel(i);   //��׼����i���������  ������telNumber[] 
		
	 } 
	
	qsort(telNumber,n,9,cmp);    //�⺯�� 
	//�����ظ��绰���벢��� 
	flag = 1;  //NO duplicates
	i=0;
	while(i<n)
	{
		j=i;i++;         //��  j  ��  i  �ĳ������ظ�������� 
		while(i<n&&strcmp(telNumber[i],telNumber[j])==0)
		    i++;
		if(i-j>1)
		{
			printf("%s %d\n",telNumber[j],i-j);
			flag = 0;
		}
	 } 
	if(flag == 1)
	    printf("No duplicates.\n"); 
	
}
 
