/*�ݹ� 

1-һ��С�򣬴Ӹ�Ϊ H �ĵط����䣬���䵯��֮�� ����߶�Ϊ����ʱ��һ�룬�����һ�ε���߶�Ϊ H/2����������������С�� H �߶����䵽�� n �� ������������·�̡�

Ҫ�� 1���õݹ�ķ���ʵ�� 2������ H �� n,������ 3��ע�����Ľ�׳�� 4�������� C �� C++ ʵ�� 
*/

#include <stdio.h>

double func(double n,double H)
{
	if(n==1)
	    return H+0.5*H;  //��n�ε� 
	else
	    return 1.5*H+func(n-1,H/2);
	
 } 
// h+h/2  >> h+h/2 +(h/2)*(1.5��>> h+h/2 +(h/2)*(1.5��+(h/4)*1.5 
int main()
{
	double n,H;
	scanf("%lf%lf",&n,&H);
	if(H==0||n<1)
	    return ;
	int i;double sum=0;
	
    sum=func(n,H); 
	printf("%.2lf",sum);
}

