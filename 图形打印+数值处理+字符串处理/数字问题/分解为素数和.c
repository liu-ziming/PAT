/*
2-14. ��̣���������һ��ż��n���뽫���ֽ�Ϊ��������֮�͡������ʽΪ��*=*+*

*/
#include<stdio.h>
int fun(n)
{
	int i;int flag=0;
	for(i=2;i<n/2;++i)
	{
		if(n%i==0)
		{
			flag=1;break;
		}
	}
	if(flag==0)
	    return 1;
	else
	    return 0;
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n%2!=0)
	{
		printf("����ż��:");
		scanf("%d",&n);
	}
	int i;
	for(i=0;i<n;++i)
	{
	    if(fun(i)&&fun(n-i)&&i<n-i) //������ ��ֹ�ظ���� 
	        printf("%3d = %3d + %3d\n",n,i,n-i) ;
	}
	
}

