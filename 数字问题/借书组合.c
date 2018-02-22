/*
2-4. 小明有五本新书，要借给A、B、C三位小朋友，每人每次只能借一本，编程，输出所有不同的借法。
*/ 
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i,j,k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			for(k=0;k<5;k++)
				if(i!=k&&i!=j&&k!=j)
					printf("%d %d %d\n",i,j,k);
}
 
