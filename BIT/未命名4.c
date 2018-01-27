#include<stdio.h>  
int Gcd(int a,int b)//求最大公约数，以便对结果进行约分
 { 
 while(a!=0&&b!=0) 
 { 
  if(a>b)a=a%b; 
  else if(a<b)b=b%a;  } 
 return (a>b?a:b); 
} 
void plus(int a,int b,int d,int e)   //计算加法 
{    int fenzi,fenmu;  
    int g;    
    fenmu=b*e;    
    fenzi=a*e+b*d;   
 g=Gcd(fenmu,fenzi);  fenmu=fenmu/g;//对分母约分 
 fenzi=fenzi/g;//对分子约分 
 if(fenzi==0) 
  printf("%d/%d + %d/%d = %d\n",a,b,d,e,fenzi);   
 else     printf("%d/%d + %d/%d = %d/%d\n",a,b,d,e,fenzi,fenmu);    
}     
void minus(int a,int b,int d,int e)   //计算减法 
{    int fenzi,fenmu;  
    int g;    
    fenmu=b*e;    
    fenzi=a*e-b*d; 
 if(fenzi>=0&&fenmu>=0)  { 
 g=Gcd(fenmu,fenzi); 
 fenmu=fenmu/g;//对分母约分 
 fenzi=fenzi/g;//对分子约分 
 }  if(fenzi==0) 
  printf("%d/%d - %d/%d = %d\n",a,b,d,e,fenzi); 
 else 
    printf("%d/%d - %d/%d = %d/%d\n",a,b,d,e,fenzi,fenmu);    
} void multiply(int a,int b,int d,int e)//乘法 
{ 
 int fenzi,fenmu; 
 int g; 
 fenzi=a*d;  fenmu=b*e; 
 g=Gcd(fenmu,fenzi); 
 fenmu=fenmu/g;//对分母约分 
 fenzi=fenzi/g;//对分子约分 
 if(fenzi==0)   printf("%d/%d * %d/%d = %d\n",a,b,d,e,fenzi);   
 else if(fenmu==1) 
   printf("%d/%d * %d/%d = %d\n",a,b,d,e,fenzi);    
 else 
    printf("%d/%d * %d/%d = %d/%d\n",a,b,d,e,fenzi,fenmu);    }  
void divide(int a,int b,int d,int e)//除法 
{ 
 int fenzi,fenmu;  int g; 
 fenzi= a * e; 
 fenmu= b * d; 
 g=Gcd(fenmu,fenzi); 
 fenmu=fenmu/g;//对分母约分  fenzi=fenzi/g;//对分子约分 
 if(fenzi==0) 
   printf("%d/%d / %d/%d = %d\n",a,b,d,e,fenzi);   
   else     printf("%d/%d / %d/%d = %d/%d\n",a,b,d,e,fenzi,fenmu);     
}  
void main()    {    
    int a,b,d,e;    
    char c;    
    scanf("%d/%d %c %d/%d",&a,&b,&c,&d,&e);    
    switch(c)        {    
    case '+': plus(a,b,d,e);break;    
    case '-': minus(a,b,d,e);break;    
    case '*': multiply(a,b,d,e);break;    
    case '/': divide(a,b,d,e);break;        }    } 
    
    
