//  15- �����ַ����� (��ĸ��ɣ�
#include <stdio.h>
int main()
{
	int h;char c; 
	scanf("%c%d",&c,&h);
	int i,j,k;
	for(i=0;i<h;i++)
	{
		for(j=0;j<h-i-1;j++)
		    printf(" ");
		printf("%c",c+i);
		for(k=0;k<2*i-1;k++)
		    printf(" ");
		if(i!=0) printf("%c",c+i);
		printf("\n");
	}
	
	for(i=h-2;i>=0;i--)    //ֻ�����Ӵ�С,ѭ���� ���ϰ벿��һ�� 
	{
		for(j=0;j<h-i-1;j++)
		    printf(" ");
		printf("%c",c+i);
		for(k=0;k<2*i-1;k++)
		    printf(" ");
		if(i!=0) printf("%c",c+i);
		printf("\n");
	}
	
	
	
 } 
