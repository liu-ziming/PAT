//8-�������λ��ֵ

#include <stdio.h>
#include <math.h>


/*����д������� !!!
int main()
{
	int n,a;
	scanf("%d%d",&a,&n);
	if(a>150)
	   return 0;
	printf("�����λ:%d",(int)pow(a,n)%1000);
	
 } */
 
 int main()
 {
 	int a,n,sum=1;
 	scanf("%d%d",&a,&n);
 	if(n==0)
 	    printf("�����λ��001");
 	else
 	{
 		int i;
 		for(i=0;i<n;i++)
 		{
 			sum=sum*a;
 			sum=sum%1000;
		 }
		printf("�����λ:%d",sum);
	 }
 	
  } 
