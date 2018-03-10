//A+B

#include <stdio.h>
#include <string.h>
long long tran(char s[])
{
	int i;
	long long t=0;
	int len =strlen(s);
	for(i=0;i<len;i++){
		if(s[i]==','||s[i]=='-') continue;
		else t=10*t+s[i];
	}
	if(s[0]=='-') return -t;
	else return t;
}

int main()
{
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	long long m = tran(a);
	long long n = tran(b);
	printf("%lld",m+n);
	
	return 0;
 } 
