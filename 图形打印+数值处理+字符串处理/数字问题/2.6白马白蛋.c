/*2-6. 100匹马驮100担货，大马一匹驮３担，中马一匹驮２担，小马两匹驮１担。编程，输出所有满足条件的方案（即大、中、小马的数目）。
*/
#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k;
	for(i=0;i<=100;i++)
		for(j=0;j<=100;j++)
			for(k=0;k<=100;k=k+2) //保证小马都是成对 
				if(i+j+k==100&&3*i+2*j+k/2==100)
					printf("%d %d %d\n",i,j,k);
}

// 或者/* 
/* 
int main()
{
	
	int i,j,k;
	for(i=0;i<100;++i)
	    for(j=0;j<=100-i;++j)
	    {
	    	k=100-i-j;
	    	if(3*i+2*j+k/2.0==100)
	    	    printf("%d %d %d\n",i,j,k);
		}
 } */ 
