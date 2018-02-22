/*beihang
孪生数字
A的约数（因数，包含1 不包含自身，且A  B不想等）
之和等于B， B的约数之和等于A  ；则称之为 孪生

输入 M  N  1<=M<N<=20000 ,中间 一个空格分隔 ；
输出
	没有符合要求的输出NONE；  孪生数空格分割
*/

#include <stdio.h>
int sum(int x)
{
	int i;int sum=0;
	if(x==1) return 0; //不包括自身
	for(i=1;i<x;i++){
		if(x%i==0) sum+=i;
	} 
	return sum;
}
int main()
{
	
	int M,N,i,j,sumA,sumB;
	int flag=0;
	scanf("%d%d",&M,&N);
	for(i=M;i<=N;i++)
		for(j=i+1;j<N;j++)
			if(i!=j){
				sumA=sum(i);
				sumB=sum(j);
				if(sumA==j&&sumB==i){
					printf("%d %d\n",i,j);
					flag=1;
				}
			} 
	if(flag==0) printf("NONE\n");
 } 
