

#include <stdio.h>
#include <string.h>
#define MAXSIZE 100 
char map[10][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
	int sum=0,len;int i;
	char a[MAXSIZE];
	gets(a);
	len = strlen(a);
	for(i=0;i<len;i++)
		sum=sum+(a[i]-'0');
    int b[len];
    i=0;
    if(sum==0)
    {
    	printf("ling");
    	return 0;
	}
    while(sum)
    {
    	b[i++]=sum%10;
    	sum/=10;
	}
	int j ;
	for(j=i-1;j>0;--j)
	{
		printf("%s ",map[b[j]]);
	}
	printf("%s",map[b[0]]);
	return 0;
	
	
}
