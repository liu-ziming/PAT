/*  ��ƻ�� -�ݹ�
/*  ���������  ��  ����ȫ����  ������һ��������
/*  ȫ������
/*        ÿ����������һ�����ӣ���ô�ȼ���  guo-pan ������ȥ��
/*   	�������guo-pan < 0,�����Ӷ�����ӣ��ǿ϶���pan-guo������Ϊ�գ�
/*        ���Բ�����Щ�����ӣ��ȼ������ӵ��ڹ����� 
/*  ����һ�������ӣ�
/*       ��һ�������Ӿ͵ȼ��ڹ��ӷ� pan-1�����ӣ�ͬ��ݹ���ȥ��
/*      ��ֻ��һ�������ǣ���ֻ��һ�ַŷ�
*/
#include  <stdio.h>

int func(int apple,int dish)
{
	if(dish==1||apple==0) return 1;//����ֻʣһ�����߹��ӷ����ˣ���ֻ��һ��
	if(dish>apple)  return func(apple,apple);//���Ӷ࣬�ǿ϶�ֻ���õ�apple������
	return func(apple-dish,dish) + func(apple,dish-1);
	//     ÿ�����Ӷ���                 ������һ�����ӿ� 
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",func(m,n));
	
	return 0;
}


