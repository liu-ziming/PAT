/*3-23.任意输入一个4位自然数，输出该自然数的各位数字组成的最大数。例如，输入1593，则输出为9531。
*/
#include<stdio.h>
#include<string.h>

int main()
{
	int n;int a[4];
	scanf("%d",&n);
	int i=0;
	while(n)
	{
		a[i++]=n%10;
		n/=10;
	}
	int j;
	for(i=0;i<4;++i)
	    for(j=i+1;j<4;++j)
	    {
	    	if(a[j]<a[i])
	    	{
	    		int temp;
	    		temp=a[i];a[i]=a[j];a[j]=temp;
			}
		}
	for(i=3;i>=0;i--)
	    printf("%d",a[i]);
	
	
}

