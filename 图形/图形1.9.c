/*
1-9. ��̣�����nֵ�������������n=4����ʾ��ͼ�Σ�
                       ****
                         *
                        *
                       ****
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(j=0;j<n;++j)
		    printf("*");
	printf("\n");
	for(i=0;i<n-2;++i)    //���ı���  ��ֻʣn-2   / �� 
	{
		for(j=0;j<n-i-2;++j)
		    printf(" ");
		printf("*"); 
		printf("\n");
	}
	for(j=0;j<n;++j)
		    printf("*");
    printf("\n");
}
