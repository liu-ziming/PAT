//7-̰�Եĺ���

#include <stdio.h>

double func(int i,int n)   //����Ϊdouble  ��֤�佡׳�� 
{
	if(i==1)
	    return 1;
	else
	    return (func(i-1,n) +n-i+1)*2;
	
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("��һ����%.0lf������",func(n,n));
	
 } 
