/*
�������� a[1..n]��ͳ������ a ��С�� a[i]�ĸ�����
����������� c[1...n] ���С�
Ȼ����� c �д�ŵĸ����� a ������������ 
�� a �����е�Ԫ��: 2,9,4,5 ���� a �б� a[0]С��Ϊ 0,
�� c[0]��ֵΪ 0�� ���� a �б� a[1]С������ 3 ����
���� c[1]��ֵΪ 3 
*/

#include <stdio.h>

struct node{
	int a;
	int c;
}node[1000];
int main()
{
	int i,j; 

	int n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&node[i].a);
		node[i].c=0; 
	}
	for(i=0;i<n;i++)
	{
		int t=node[i].a;
		for(j=0;j<n;j++){
			if(node[j].a<t)
				node[i].c++;
		}
	}
	//sort
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(node[j].c<node[i].c){  //���� 
				struct node t;
				t=node[i];node[i]=node[j];node[j]=t;
			}
		}
	
	
	for(i=0;i<n;i++)
	{
		printf("%d ",node[i].a);
	}
	
 } 






