//9- 分数的四则运算

#include <stdio.h>
#include <math.h>
int gcd(int a,int b)
{
	while(a!=0&&b!=0) 
 { 
  if(a>b)a=a%b; 
  else if(a<b)b=b%a;  } 
 return (a>b?a:b); 
}
int plus(int a,int b,int x,int y)
{
	int fenzi=(a*y+b*x);
	int fenmu=b*y;
	int g=gcd(fenzi,fenmu);    //不能前后两次直接除gcd()，第一次调用改变里分子，导致第二次调用出错 
	fenzi /=g;
	fenmu /=g;
	if(fenzi==0)              //要讨论运算后分子是否为0 
	    printf("0");
	else    
	    printf("%d/%d",fenzi,fenmu);
}
int minus(int a,int b,int x,int y)
{
	int fenzi=(a*y)-(b*x);
	int fenmu;
	fenmu=b*y;
	int g=gcd(fenzi,fenmu);
	fenzi /=g;
	fenmu /=g;
	if(fenzi==0)              //要讨论运算后分子是否为0 
	    printf("0");
	else    
	    printf("%d/%d",fenzi,fenmu);
	
}
int mutiply(int a,int b,int x,int y)
{
	int fenzi=a*x;
	int fenmu=b*y;
	int g=gcd(fenzi,fenmu);
	fenzi /=g;
	fenmu /=g;
	if(fenzi==0)              //要讨论运算后分子是否为0 
	    printf("0");
	else    
	    printf("%d/%d",fenzi,fenmu);
	
}
int divide(int a,int b,int x,int y)
{
	if(x==0)                  //是否可以除？？？ 
	{
		printf("不能除");
		return 0;
	}
	int fenzi=a*y;
	int fenmu=b*x;
	int g=gcd(fenzi,fenmu);
	fenzi /=g;
	fenmu /=g;
	if(fenzi==0)              //要讨论运算后分子是否为0 
	    printf("0");
	else    
	    printf("%d/%d",fenzi,fenmu);
	
}
int main()
{
	int x,y,a,b;char op;
	scanf("%d %d %c %d %d",&a,&b,&op,&x,&y);
	switch(op)
	{
		case '+':plus(a,b,x,y);break;
		case '-':minus(a,b,x,y);break;
		case '*':mutiply(a,b,x,y);break;
		case '/':divide(a,b,x,y);break; 
	}
	
	
 } 
