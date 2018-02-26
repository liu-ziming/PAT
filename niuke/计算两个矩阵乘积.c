
#include <stdio.h>

int main()
{
	int i,j,k;
	int a1[2][3],a2[3][2],re[2][2];
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	
	for(i=0;i<2;i++){ //a1 row
		for(j=0;j<2;j++)  //a2 col
		{
			int sum=0;
			for(k=0;k<3;k++)
				sum+=a1[i][k]*a2[k][j];
			re[i][j] = sum;
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(j!=0)printf(" ");
			printf("%d",re[i][j]);
		}
		printf("\n");
	}
	
 } 
