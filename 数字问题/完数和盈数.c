/*
 2-22. һ�������ǡ�õ������ĸ����ӣ�����������⣩֮�ͣ��磺6=3+2+1���������Ϊ"����"��������֮�ʹ��ڸ����������Ϊ"ӯ��"�����2��60֮������"����"��"ӯ��"������������ʽ�����
		E: e1 e2 e3 ......(eiΪ����)
		G: g1 g2 g3 ......(giΪӯ��)
*/

#include<stdio.h>
#include<math.h>

//�������֮�� 
int func(int n)
{
	int sum=0;int j; 
	for(j=1;j<=n/2;j++)   //ע����С�ڵ��� 
	    if(n%j==0)  sum+=j;
	return sum;
 } 

int main()
{
	int i;int sum;
	printf("E: ");
	for(i=2;i<=60;++i)
	{
		
		sum=func(i);
		if(i==sum)
		    printf("%d ",i);
	}
	printf("\nG: ");
	for(i=2;i<=60;++i)
	{
		sum=func(i);
		if(i<sum)
		    printf("%d ",i);
	}
	
}
