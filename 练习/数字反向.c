/*

2-.дһ���࣬�ܽ��� int �͵ı��������ձ������ܴ� ��ԭ������Ʃ�� 12345�����䷴�����(54321) ���� �ദ������Ϊ 10 ����������ﵽ 10 ����������� ��Ϊ 0 ��ʱ��ֹͣ��������������ǰ����洢������ ������
 ���磺 ����:12345,2234,0 ���:1234554321 22344322 

 */

//��ʵ�������ַ���������

#include <stdio.h>
//���캯��
int rev(int *a,int *b)
{
	while(*a)
	{
		*b=(*b)*10+(*a)%10;
		(*a)=*a/10;
	}
	return ;
}

int main()
{
	int init[10],after[10]={0};
	int count=0;int i=0;
	while(scanf("%d",&init[i])&&i<10)
	{
		if(init[i]==0)
		    break; 
		i++;
		count++;
		
 
	}
	
	for(i=0;i<count;i++)
	{
		printf("%d  ",init[i] );
		rev(&init[i],&after[i]);
		printf("%d\n",after[i] );
	}






}
