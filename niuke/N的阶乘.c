
//N 的阶乘

#include <stdio.h>

int main()
{
	int a[20000];
	int num,temp,digit=1,n,i,j;
	scanf("%d",&n);
	a[0] = 1;//从1 开始乘
	digit = 1;//位数从1开始 
	for(i=2;i<=n;i++){
		num=0;
		for(j=0;j<digit;j++){
			temp = i*a[j] + num;  //按位相乘 
			a[j] = temp%10;    //存储各位 ，从个位开始 
			num  = temp/10;
		}
		while(num){   //继续存没有存完的 
			a[digit] = num%10;
			num/=10;
			digit++;
		}
	} 
	for(i=digit-1;i>=0;i--){ //倒叙输出 
		printf("%d",a[i]);
	}
	printf("\n");
	
	
	return 0;
 } 
