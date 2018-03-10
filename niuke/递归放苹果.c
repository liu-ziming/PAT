/*  放苹果 -递归
/*  分两种情况  ：  盘子全放满  和至少一个空盘子
/*  全放满：
/*        每个盘子至少一个果子，那么等价于  guo-pan 个果子去放
/*   	其中如果guo-pan < 0,即盘子多余果子，那肯定有pan-guo个盘子为空，
/*        忽略不计这些空盘子，等价于盘子等于果子数 
/*  至少一个空盘子：
/*       有一个空盘子就等价于果子放 pan-1个盘子，同理递归下去，
/*      当只有一个盘子是，就只有一种放法
*/
#include  <stdio.h>

int func(int apple,int dish)
{
	if(dish==1||apple==0) return 1;//盘子只剩一个或者果子放完了，那只有一种
	if(dish>apple)  return func(apple,apple);//盘子多，那肯定只能用到apple个盘子
	return func(apple-dish,dish) + func(apple,dish-1);
	//     每个盘子都放                 至啊少一个盘子空 
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",func(m,n));
	
	return 0;
}


