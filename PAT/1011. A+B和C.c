
/* 
1011. A+B��C (15)
ʱ������
150 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
HOU, Qiming

��������[-231, 231]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��

�����ʽ��

�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���

�����ʽ��

��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����
����������

4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647

���������

Case #1: false
Case #2: true
Case #3: true
Case #4: false

*/

#include <stdio.h>

int main()
{
	int n;long A,B,C;   //ע������ 
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%ld%ld%ld",&A,&B,&C);
		if(A+B>C)
		    printf("Case #%d: true\n",i+1);
		else
		    printf("Case #%d: false\n",i+1);
	 } 
	
	
 } 
