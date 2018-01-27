//ÅÜ²½³öÀ´ 


#include <stdio.h>
int k=0;
char ch[3]={'a','b','c'};

 int func(int n,char *p,int top)     
{
	if(n==0)
	{
		p[top] = '\0';
		puts(p);
	    return 0;
	}
    else while(k<=2)
	   {
	        p[top++]=ch[k];
	        func(n-1,p,top);
	        --top;
	        ++k;
	    }
}

int main()
{    int n;
    scanf("%d",&n);
    char a[11];int top=0;
	func(n,a,top);
   // printf("%d",count);
}







