
//����n  1<=n<=9  ������ߺ��ϵ׾�  n  �ĵ������� ����� n =4 ʱ
//���ͼ�� ����
//    ****
//   ******
//  ********
// ********** 

#include <stdio.h>

void main()
{
	int n;
	printf("scanf Your num :");
	scanf("%d",&n);
	while(n>9||n<1)
    {
    	printf("Please Try Again :");
    	scanf("%d",&n);
	}
	
	int i;int j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		    printf(" ");
		for(k=0;k<n+2*i;++k)
		    printf("*");
		printf("\n");
	}
 } 
