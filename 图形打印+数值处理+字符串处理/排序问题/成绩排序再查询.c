/*
3-2. ��̣���������10���˵ĳɼ������Ӵ�С��˳�����С����г���ʱ��ֻҪ�������Σ������������������ζ�Ӧ�ĳɼ���
*/

#include <stdio.h>
void qSort(int a[],int n)
{
	int i,j;
	for(i=1;i<n;++i)
	{
	    int temp=a[i];
	    for(j=i;j>0&&a[j-1]>temp;--j)
	        a[j]=a[j-1];
	    a[j]=temp;
	    
	}
}

int main()
{
	int a[100];
	int i,j;int m;
	for(i=0;i<10;++i)
	    scanf("%d",&a[i]);
	qSort(a,10);
	
	while(1)
	{
		printf("��ѯ\n");
		scanf("%d",&m);
		printf("%d\n",a[m-1]);
	}
}
