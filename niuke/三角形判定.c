//三角形判定

#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){ //是三角形 
		if(a*a+b*b==c*c || a*a +c*c==b*b || b*b+c*c==a*a){
			printf("直角三角形\n");return ;
		}
		else if(a*a+b*b>c*c&&b*b+c*c>a*a&&a*a+c*c>b*b){
			printf("锐角三角形\n");return ;
		}
		else{
			printf("钝角三角形\n");return ;
		}
	}
	
	 
	
 } 
