
// ������� C  �Ķ���������ж��ٸ����� �� 0  
#include <stdio.h>


int main()
{
	int n,m;
	int a[1000]={-1};int i=0,j;
	int count=0;
	int num;
	scanf("%d%d",&n,&m);
	for(i=n-m+1;i<=n;i++)  //������͵��� ����p(6,1) = 6!/(6-1)! =6  
	{                      //n-m+1�˵�n 
		int temp=i; 
		while((temp&1)==0){ // i%2 //�� ���ն�������� 0 �ĸ��� ��������˻��� 
			count++;       //ÿ�����Ķ����� ��� 0 �ĸ���  ֮�� 
			temp=temp>>1;  //i/2
		}
	}
	printf("%d\n",count);
	return 0;
}
