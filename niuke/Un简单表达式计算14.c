
#include <stdio.h>
#include <string.h>

int main()
{
	double val[1000];
	
	while(scanf("%lf",&val[0])!=EOF){
		char op;
		int ai=0;
		double next;
		while(scanf("%c",&op)&&op!='\n'){
			scanf("%lf",&next);
			switch(op){
				case '+':val[++ai] = next;break;
				case '-':val[++ai] =-next;break;
				case '*':val[ai]*= next;break;
				case '/':val[ai]/= next;break;//这里不能++ 
			}
		}
		double sum=0;
		int i;
		for(i=0;i<=ai;i++) //是等于
		{
			sum+=val[i];
		 } 
		printf("%lf\n",sum);
	}
	
	
	return 0;
}

