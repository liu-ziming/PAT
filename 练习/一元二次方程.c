// 5 -���Ԫ���η���

#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	double t;
	t=(double)b*b-(double)4*a*c;
	double m,n;
	if(a==0&&b==0)
	    printf("erro");
	else if(a==0)
	    printf("%lf",(double)-c/b);
	else
	{
		m=-b/(2*a);
		
		if(t==0)
		    printf("%lf",m);
		else if(t>0)
		{
			n=(double)sqrt(t)/(a*2);
			printf("%lf��%lf",m-n,m+n);
		}		    
		else if(t<0)
		{
			n=(double)sqrt(-t)/(a*2);
			if(m!=0)
			    printf("%lf+%lfi��%lf-%lfi",m,n,m,n);  //ע��ʵ���Ƿ�Ϊ0 
			else
			    printf("%lfi��-%lfi",n,n);           
		}   
		    
		
	}
	
}

 
