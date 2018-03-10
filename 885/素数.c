//ËØÊı 

#include <stdio.h>
#include <math.h> 
int sushu(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++){
		if(x%i==0) return 0; 
	}
	 return 1;
	
}
int main()
{
	int i;
	for(i=2001;i<=2016;i++){
		if(sushu(i)==1) printf("%d ",i);
	}
	
	
}
 










