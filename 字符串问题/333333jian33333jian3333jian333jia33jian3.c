/*
6.����long fun(int a,int  n)�Ĺ����ǣ���s=aa..aa-.......-aaa-aa-a���˴�a��n��ֵ����[1��9]��Χ�ڣ�aa..aa��ʾn��a�������磺 a=3,n=6,�����ϱ��ʽΪs=333333-33333-3333-333-33-3,fun(3,6)�ķ���ֵΪ296298��
�����޸���������������������ֱ���ں���fun��{}���������ݡ�


*/   

#include <stdio.h>
#include<math.h>
double fun(int a,int n)
{
	double sum=0,x=0;  //�����ʼ�� 
	int i;
	for(i=0;i<n;i++)
	{
		x+=-a*pow(10,i);   //ÿһ�� ����ǰһ��Ļ��������� 
		if(i==n-1)  x=-x;  //�������һ�α�ţ����ǰ���������Դ���� 
		sum+=x;
	}
	return sum;
}
void main(void)
{
 printf("the result is %.0lf\n",fun(3,6));
}

