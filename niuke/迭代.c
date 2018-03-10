
#include <stdio.h>
int x;
double fun(int n)
{
	if(n==0) return x;
	else 
		return fun(n-1)*2.0/3 + x/(3.0*fun(n-1)*fun(n-1));
}

int main()
{
	int n;
	double f;
	scanf("%d%d",&x,&n);
	f= fun(n-1);
	printf("%lf",f);

	return 0;
}
