/*

9.3���������

//�ݹ�����
//˼·��ÿ���ڵ� n �ĸ��ڵ�Ϊ n/2  ���ݹ����������� 
*/

#include <stdio.h>

int common(int x,int y)
{
	if(x==y)  return x;
	else if(x>y)   return common(x/2,y);
	else if(x<y)   return common(x,y/2);
    return ;
 } 

int main()
{
    int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",common(x,y));
}
