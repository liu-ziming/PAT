//  �ݹ����  1-  n  ��n<=10)  ��������������ϵĽ��

//   ����Ϊ  λ�� ���� �� �ɷ� �ı� 

#include <stdio.h>

int count = 0; //��������
void func(int m,int n)
{
	int i;
	if(m==n)
	    return ;
	else
	{
		for(i=m+1;i<=n;++i)
		    if(++count%10==0)  //�������
			    printf("%d,%d\n",m,i);
			else
			     printf("%d,%d ",m,i);
		func(m+1,n);
		
	}
 } 
 
 void main()
 {
 	int n;
 	scanf("%d",&n);
 	if(n>1&&n<=10)
 	    func(1,n);
 	else
 	    printf("ERRO");
 }
