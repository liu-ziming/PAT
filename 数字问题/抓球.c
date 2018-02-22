/*
2-3. 口袋中有12个球，其中3红，3白和6黑，从中任取8个球，编程，输出所有不同的取法。输出形式如下：
      RED   WHITE  BLACK
  ------------------------
   1:  0      2      6
   2:  0      3      5
     。。。。。。。
*/

#include <stdio.h>

int main()
{
	int i,j,k;int n=1;
	printf("        RED    WHITE  BLACK\n");
	for(i=0;i<=3;i++)
	    for(j=0;j<=3;j++)
	        for(k=0;k<=6;k++)
	            if(i+j+k==8)
	                printf("%d:%7d%7d%7d\n",n++,i,j,k);
	
}
