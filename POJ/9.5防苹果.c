/*
9.5��ƻ��

��˳���������

*/
#include <stdio.h>

 
int count(int x,int y)
{
	if(y==1||x==0)  return 1;   //ֻ��һ�����ӻ���0��ƻ������ 
	if(x<y)   return count(x,x);        //���Ӷ���ƻ���ˣ�ƻ�� ƻ�� 
	return    count(x,y-1)+count(x-y,y);  //������  ����һ������y��   ȫ�����գ�ÿ�����Ӽ���һ��ƻ��x-y  
	
 } 

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int x,y;    //x��ƻ��y������ 
		scanf("%d%d",&x,&y);
		printf("%d\n",count(x,y));
	}
	
	
	
}
