//ËØÊı 

#include <stdio.h>
int sushu(int x)
{
	int i;
	for(i=2;i<=x/2;i++){
		if(x%i==0) break; 
	}
	if(i>x/2) return 1;
	else return 0;
}
int main()
{
	int i;
	for(i=2001;i<=2016;i++){
		if(sushu(i)==1) printf("%d ",i);
	}
	
	
}
 










