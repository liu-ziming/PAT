/*
1-8. ��̣�����nֵ�������������n=4����ʾ�ı߳���Ϊn���������Σ�
                      ****
                     ******
                    ********
                   **********
                    ********
                     ******
                      ****            �� n=4 ʱ
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
    	for(k=0;k<2*i+n;++k)
    	    printf("*");
    	printf("\n");
    
	}
	//��һ��n-1 ���ƶ� һ�ո��ĵ�����
	for(i=0;i<n-1;++i) 
    {
    	for(j=0;j<i+1;++j)
    	    printf(" ");
    	for(k=0;k<2*(n-i-2)+n;++k)
    	    printf("*");
    	printf("\n");
    
	} 
	
	
}
