//数字转科学计数 
#include <stdio.h>
#include <string.h>

int main()
{
	char s[1000];
	//gets(s);
	double num;
	scanf("%lf",&num);
	if(num<1){
		int power=0;
		while(num<1){
			num*=10;
			power++;
		}
		printf("%lfe-%d",num,power);
		
	}
	else{
		int power=0;
		while(num>10){
			num/=10;
			power++;
		}
		printf("%lfe%d",num,power);
		
		
	}
	
	return 0;
}
