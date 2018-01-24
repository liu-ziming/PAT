#include <stdio.h>

int func(int i,int j)
{
	if(i==1||j==1||i==j)
		return 1 ;
	else
	    return func(i-1,j)+func(i-1,j-1);
}

int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for ( i = 1; i<=n; ++i)
	{
		/* code */
		for ( j = 1; j <=n-i ;++j)
		    printf(" ");
		for (k=1;k<=i;k++)
		    printf("%d ",func(i,k) );
	    printf("\n");

	}

}
