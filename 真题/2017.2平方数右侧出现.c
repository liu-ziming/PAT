/*
2017.2
����n���ж�n�Ƿ���nƽ�����ұ߳��֡�
����1,5,6,25,��������ƽ�����Ҳ���֣������yes���������no��
��������ǰ���һ������Ŀ�������е����⣬��ʱ�ö�������ʦ���š�
*/

#include <stdio.h>

int main()
{
	int n,n2;
	
	while(1)
	{
		scanf("%d",&n);
	n2=n*n;
	int flag=1;
	while(n&&n2)
	{
		int a=n%10;
		n/=10;
		int b=n2%10;
		n2/=10;
		if(a!=b)
		{
			flag=0;break;
		}
	}
	if(n2==0&&n!=0)flag=0;
	if(flag==1) printf("yes\n");
	else printf("no\n");
	 } 
}


 

