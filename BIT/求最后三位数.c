//8-求最后三位数值

#include <stdio.h>
#include <math.h>


/*这种写法会溢出 !!!
int main()
{
	int n,a;
	scanf("%d%d",&a,&n);
	if(a>150)
	   return 0;
	printf("最后三位:%d",(int)pow(a,n)%1000);
	
 } */
 
 int main()
 {
 	int a,n,sum=1;
 	scanf("%d%d",&a,&n);
 	if(n==0)
 	    printf("最后三位：001");
 	else
 	{
 		int i;
 		for(i=0;i<n;i++)
 		{
 			sum=sum*a;
 			sum=sum%1000;
		 }
		printf("最后三位:%d",sum);
	 }
 	
  } 
