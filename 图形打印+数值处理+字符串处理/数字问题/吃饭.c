
#include<stdio.h>
int main()
{
	int i,j,k,n,m,a,b,c;
	for(i=0;i<18;i++)
		for(j=0;j<=25;j++)
			for(k=0;k<=30;k++)
				if(3*i+2*j+k==50&&i+j+k==30)
					printf("%d %d %d\n",i,j,k);

}

