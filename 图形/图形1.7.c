/*

1-7. ��̣�����n�������������n=3����ʾ�ı߳�Ϊn�����Σ�
                        *
                       ***
                      *****
                       ***
                        *  
���ξ��Ƿ���������һ������ n ���������Σ���һ��  n-1 �� ��һ���ո����� �ĵ������� 

*/     

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		    printf(" ");
		for(k=0;k<2*i+1;++k)
		    printf("*");
		printf("\n");
		
	}
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<i+1;++j)  //��һ���ո�Ŷ 
		    printf(" ");
		for(k=0;k<2*(n-i-2)+1;++k)
		    printf("*"); 
		printf("\n");
	}
	
 } 
