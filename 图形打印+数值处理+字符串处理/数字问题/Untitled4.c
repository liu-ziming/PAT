
#include<stdio.h>
#include<math.h>
#include<math.h>
void main()
{
	int i,j,k,sum;
	for(i=2;i<1000;i++){
		sum=1;
		for(j=2;j<=sqrt(i);j++){
			k=i/j;
			if(i%j==0){
				sum+=j+k;
			}
		}
		if(i==sum)
			printf("%d\n",sum);
	}
	
}


