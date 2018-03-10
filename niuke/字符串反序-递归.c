
#include <stdio.h>
#include <string.h>
char s[1000];

void rev(int start,int end)
{
	int i=start;
	int j=end;
	if(i>=j) return ;
	char t;
	t=s[i];s[i]=s[j];s[j] = t;
	return rev(start+1,end-1);
	
}


int main()
{
	while(gets(s)!=EOF){
		int a,b;
		scanf("%d%d",&a,&b);
		rev(a,b);
		puts(s);
	} 
	
	return 0;
}
