#include <stdio.h>
char k;


 void func(int n,char *p,int top)     
{
	if(n==0)
	{
		p[top] = '\0';
		puts(p);
	    return;
	}
    for(k='a';k<='c';++k)
	   {
	        p[top++]=k;
	        func(n-1,p,top);
	        --top;
	    }
}

int main()
{    int n;
    scanf("%d",&n);
    char a[110];int top=0;
	func(n,a,top);
   // printf("%d",count);
}







