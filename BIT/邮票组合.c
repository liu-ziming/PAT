// 16-��Ʊ���
 

#include <stdio.h>
int a[5];            //�����������Ʊ�������� ����Ҫ��������ֵ��һ�� 0 
int find(int max)
{
	int i,j,k,m,n;
	int sum;
	for(i=0;i<5;i++)
	    for(j=0;j<5;j++)
	        for(k=0;k<5;k++)
	            for(m=0;m<5;m++)
	                for(n=0;n<5;n++)
	                {
	                	sum = a[i]+a[j]+a[k]+a[m]+a[n];
	                	if(sum==max)
	                	    return 1;
	                	
					}
	return 0;
	
}

int main()
{
	
	int i;
	a[0]=0; 
	for(i=1;i<=4;i++)
	    scanf("%d",&a[i]);
	int max=0;
	while(1)
	{
		if(find(max)==1) //����ܹ���ϳ�max
		    max=max+1;
		else
		    break; 
	 } 
	 printf("%d\n",max-1);
	 for(i=1;i<max;i++)  // 1~max-1 
	     printf("%d  ",i);
	
 } 
