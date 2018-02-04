#include<stdio.h>

void main()
{
	int i,j,k,count=0;
	for(i=0;i<=200;i++){
		for(j=1;j<i;j++){
			for(k=1;k<i&&k<=j;k++){
				if(i*i==j*j+k*k){
					printf("%d\n",i);
					k=201;
					j=201;
					count++;
				}
			
			}
		}
	}
	printf("%d\n",count);
}

