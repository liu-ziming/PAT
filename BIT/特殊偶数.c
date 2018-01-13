
// 特殊的偶数  每一位上的数字两两不相同 
// 要求输入两个四位整数，输出介于两个整数之间的所有这类  特殊偶数

#include <stdio.h>

void main()
{
	int down,up;
	printf("Please scanf with the folmat of 1234 1234 :"); 
	scanf("%d %d",&down,&up);
	while((down<1000||down>9999||up<1000||down>9999)||(down>=up))
	{
	    printf("Please Try Again:");
		scanf("%d %d",&down,&up);
    }
    int n,num;int a,b,c,d;  //分别代表num  从低位到高位的数字 
    for(n = down+1;n<up;n++)
		if(n%2==0)
		    {   num=n;
		    	a=num%10; num/=10;
		    	b=num%10; num/=10;
		    	if(a!=b)
				    {c=num%10; num/=10;} 
				else
				    continue;
		    	if(a!=c&&b!=c)
				    d=num%10;
				else
				    continue;
				if(a!=d&&b!=d&&c!=d)
				    printf("%d\n",n);
				else
				    continue;
			}
    
 } 
