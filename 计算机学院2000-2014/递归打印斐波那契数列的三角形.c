/*

2-����дһ����Ʋ���qie���еĵݹ麯�������� n ֵ��
 ʹ�øõݹ麯�����������ͼ�Ρ� 
 �� �磺�� n=6 ʱ�� 
             0 
           0 1 1
          0 1 1 2 3
         0 1 1 2 3 5 8 
       0 1 1 2 3 5 8 13 21 
    0 1 1 2 3 5 8 13 21 34 55 

*/


#include <stdio.h>

int func(int n)
{
	if(n==1||n==2)
		return 1;
	else if(n==0)
		return 0;
	else
		return func(n-1)+func(n-2);
}


int main() 
{
	int n;
	scanf("%d",&n);
    int i,j,k;
    for ( i = 0; i < n; ++i)
    {
    	for(j=0;j<n-i-1;++j)
    		printf("  "); //ÿ�������ÿո�����ˣ�����ÿ�еĿո�Ҫ˫�� 
    	for(k=0;k<2*i+1;++k)
    		printf("%d ",func(k) );
    	printf("\n");
    }


	return 0;
}
