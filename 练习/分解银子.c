// 25- �����ֽ�
// �ֽ����� 
/*
#include <stdio.h>
#include <math.h>
#define MAXSIZE 100
int main()
{
	int num;
	scanf("%d",&num);
	int i,j=0,k,u;int a[MAXSIZE];
	int tn=num;
	 for(k=0;k<100;k++)//�����Ҽ��飬��Ϊ��ЩС�����ӻ��� 
	     for(i=2;i<sqrt(tn);++i)
	           if(num%i==0)  //i���Ա����� 
	           {
	           	    for(u=2;u<i;u++)//���i�Ѿ����������Ǿ������� 
	           	        if(i%u==0)
	           	            break;
	           	    if(u==i)
	           	    {
	           	    	a[j++]=i;
	           	    	num=num/i;
					}
			   }
	      
	
	a[j]='\0';
	j=0;
	while(a[j]!='\0')
	    printf("%d  ",a[j++]);
	
 } 
 
 */
 
 //pat�ⷨ   
 //˼·������������� Findprime����  �ٽ��������ӷֽ�
 
 #include <stdio.h>
 #include <math.h>
 
 
 int isPrime(int n)
 {
 	if(n==1)  return 0 ;
 	int i;
 	int sqr=(int)sqrt(1.0*n);
 	for(i=2;i<sqr;i++)
 	    if(n%i==0)
 	        return 0;
 	return 1;
  } 
  
 
  int prime[100010];int pnum=0;
  //������
  int Find_prime()
  {
  	int i;
  	for(i=1;i<100010;i++)
  	    if(isPrime(i)==1)
  	        prime[pnum++]=i;  //���������� 
   } 
 
 
 int main()
 {
 	Find_prime();//get prime biao
 	int n;
 	scanf("%d",&n);
 	int factor[100];//����
 	int j=0;
	if(n==1)  printf("1=1");
	else
	{
		printf("n=");
		int sqr = (int)sqrt(1.0*n);
		int i;
		for(i=0;i<pnum&&prime[i]<=sqr;++i)
		{
			while(n%prime[i]==0)
		    {
		    	factor[j++]=prime[i];
		    	
		    	n/=prime[i];
				
			}
			if(n==1)  break;//��ʱ�˳� 
		 } 	
	 } 
 	if(n!=1)//����һ������sqr������
	 factor[j++]=n;
	int i;
	for(i=0;i<j;++i)
	{
		if(i!=0)  printf("*");
		printf("%d",factor[i]);
	 } 
	   
 	
 	
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
