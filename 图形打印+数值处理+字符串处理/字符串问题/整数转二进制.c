/*
3-32. ��̣�����һ������ת��Ϊ��������ʽ��
*/

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	int i=0;
	while(n)
	{
		a[i++]=n%2;
		n=n/2; 
	}
	int j;
	for(j=i-1;j>=0;j--)
	    printf("%d",a[j]);
	
}

