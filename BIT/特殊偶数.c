
// �����ż��  ÿһλ�ϵ�������������ͬ 
// Ҫ������������λ���������������������֮�����������  ����ż��

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
    int n,num;int a,b,c,d;  //�ֱ����num  �ӵ�λ����λ������ 
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
