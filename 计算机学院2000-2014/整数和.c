/*
 2- ��д���� ����һ������ N�� �� N Ϊ�Ǹ����� ����� N �� 2N ֮��������ͣ��� N Ϊһ�������� ���� 2N �� N ֮��������͡� 
 */
#include <stdio.h>
int main()
{
	int N;int sum=0;
	int i;
	printf("����N : \n");
	scanf("%d",&N);
    if(N>=0)
    {
    	for(i=N;i<=2*N;i++)
            sum+=i;
        printf("sum = %d",sum);
	}
    else
    {
    	for(i=2*N;i<=N;i++)
            sum+=i;
        printf("sum = %d",sum);
	}
    
	
 } 
