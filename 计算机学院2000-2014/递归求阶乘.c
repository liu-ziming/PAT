/*
2- ���дһ�����򣬴Ӽ��������� n��n �ķ�Χ�� 1��20�� ���� n �Ľ׳ˡ� 

*/

#include <stdio.h>

int func(int n)
{
	if(n==1||n==0)
	    return 1;
	else
	    return n*func(n-1);
 } 
 
 int main()
 {
 	
 	int n;
 	printf("����n��");
	scanf("%d",&n);
	while(n<1||n>20)
	{
		printf("�������룺");
		scanf("%d",&n);
	}
	int s;
	s=func(n);
	printf("%d",s); 
 }
 
 
