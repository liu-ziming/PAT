/*
��Ŀ����
����a��n������a+aa+aaa+a...a(n��a)�ĺ͡�
��������:

���������ж��飬����a��n��1<=a<=9,1<=n<=100����

�������:

����ÿ������,����������

ʾ��1
����

1 10

���

1234567900

*/
/* Խ�磬������������ 
#include <stdio.h>
int a,n;
double func(int x,int n)
{
	if(n==1) return x*10+a;
	else return x*10+a+func(x*10+a,n-1);
}

int main()
{
	
	scanf("%d%d",&a,&n);
	while(a<1||a>9||n<1||a>100){
		scanf("%d%d",&a,&n);
	}
	printf("%.0lf",func(0,n));
	
	return 0;
}
*/

#include <stdio.h>

int main()
{
	int a,n;int result[1000];
	scanf("%d%d",&a,&n);
	int p=0;
	int ben=0;
	int jin=0;
	int t=0;int i;
	for(i=n;i>=1;i--){
		t = i*a + jin;
		ben = t%10;
		jin = t/10;
		result[p++]=ben;
	}
	for(i=p-1;i>=0;i--)
		printf("%d",result[i]);
	
	
	
}
 
