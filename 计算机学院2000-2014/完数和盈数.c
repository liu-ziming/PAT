/*3-һ�������ǡ�õ������ĸ����ӣ�����������⣩ �Ӻͣ�
 �磺 6=3+2+1�� �����Ϊ���������������� ֮�ʹ��ڸ�����
 �����Ϊ��ӯ��������� 2 �� 60 ֮ �����С��������͡�ӯ����
 �� ����������ʽ����� E: e1e2e3......(ei Ϊ����)G:g1g2g3......(gi Ϊӯ��)
 
*/

#include <stdio.h>

//����
int isE(int n)
{
	int sum=0,i;
	for(i=1;i<n;i++)
	    if(n%i==0)
	        sum+=i;
	if(sum==n)
	    printf(" %d",n);
	
 } 
 
 int isG(int n)
 {
 	int sum=0,i;
	for(i=1;i<n;i++)
	    if(n%i==0)
	        sum+=i;
	if(sum>n)
	    printf(" %d",n);
 	
 	
  } 

int main()
{
	int i;
	printf("E:");
	for(i=2;i<=60;i++)
	    isE(i);
	
	printf("\nG:");
	for(i=2;i<=60;i++)
	    isG(i); 
	
	
 } 
