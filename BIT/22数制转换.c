//22- 数值转换****

#include <stdio.h>
#include <string.h>
#include <math.h>
int transform(char a)
{
	if(a>='0'&&a<='9')
	   return a-'48';  //ASCⅡ码 
	else if(a>='A'&&a<='Z')
	    return a-'65'+10;
	else if(a>='a'&&a<='z')
	    return a-'97'+10; 
}
int max(int a[],int n)
{
	int max ,i;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		   max=a[i];
	}
	return max;
}
void cmp(char a[],int m ,char b[],int n,int *flag)
{
	int a_len,b_len;
	a_len = strlen(a);
	b_len = strlen(b);
	int a_num[200],b_num[200];  //转换为十进制
	int i,j;
	for(i=0;i<a_len;++i)
	    a_num[i]=transform(a[i]);
	for(j=0;j<b_len;++j)
	    b_num[i]= transform(b[i]);
	int a_base=0,b_base=0;
	for(i=0;i<a_len;++i)
	    a_base += a_num[i]*pow(m,a_len-i-1); //m为进制 
	for(j=0;j<b_len;++j)
	    b_base += b_num[i]*pow(n,b_len-i-1); //n为进制 
	if(a_base==b_base)
	    if(m==max(a_num,a_len)+1)
	    {
	    	printf("%s(base %d)=%s(base %d)",a_base,m,b_base,n);
	    	flag=1;
		}
}


int main()
{
	char a[200],b[200];
	int i,j,flag=0;
	scanf("%s%s",&a,&b);
	
	for(i=2;i<=36;++i)
	    for(j=2;j<=36;++j)
	        cmp(a,i,b,j,&flag);
	if(flag==0)
	    printf("%s is not equal to %s in any base of 2--36\n",a,b);
	
 } 
