/*
有一个神奇的口袋，总的容积是40，用这个口袋可以变出一些物品，这些物品的总体积必须是40。John现在有n个想要得到的物品，每个物品的体积分别是a1，a2……an。John可以从这些物品中选择一些，如果选出的物体的总体积是40，那么利用这个神奇的口袋，John就可以得到这些物品。现在的问题是，John有多少种不同的选择物品的方式。
输入描述:

输入的第一行是正整数n (1 <= n <= 20)，表示不同的物品的数目。接下来的n行，每行有一个1到40之间的正整数，分别给出a1，a2……an的值。

输出描述:

输出不同的选择物品的方式的数目。

示例1
输入

3
20
20
20


输出

3



*/

#include <stdio.h>
	int a[10000];
	int n;
int fun(int i,int sum)
{
	if(sum==40)  return 1; //刚好40 一种方案
	else if(sum>40||i==n)  return 0;
	else return fun(i+1,sum+a[i]) + fun(i+1,sum);
	//加上 第i个物品和不加第i个物品 
	
}

int main()
{

	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("%d\n",fun(0,0));
	
	
	return 0;
 } 
