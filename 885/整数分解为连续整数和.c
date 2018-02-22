/*beihang 
整数分解成若干连续整数和形式  如
15=1+2+3+4+5+6
15=4+5+6
15=7+8
某些整数不能分解为   连续整数  的和  如16
输入 ：N
输出 :对应分解，每个分解占一行，  如果没有就输出NONE  

*/

/*思路：
	因为是连续整数， 也就是等差数列，  考虑求和公式 n*(a1+an)/2
	暴力尝试所有  开始 和 结束  数字
	
*/

#include <stdio.h>

int main()
{
	
	int N;
	int i,begin,end;
	while(scanf("%d",&N)!=EOF)
	{
		int have=0; 
		for(begin=1;begin<N;begin++)
			for(end=begin+1;end<N;end++){
				int sum = ((end-begin+1)*(end + begin))/2.0;
				if(sum==N){
					for(i=begin;i<=end;i++)
						printf("%d ",i);
					printf("\n");
					have=1;
				}
			}
		if(have==0) printf("NONE");
	 } 
 } 



 
