/*
4.输入字符串，递归输出它们的全排列（不可重复）。
比如输入abc，输出abc,acb,bac,bca,cba,cab。
测试样例基本正常，有一个比较奇怪，是abab，不知道该输出什么
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isswap(char *list, int begin, int end) {
   
	if(begin!=end)  //自己必须和自己交换 
        if (list[begin] == list[end])
            return 0;
    return 1;
}
void prime(char *s,int n)
{
	if(n==0)
		printf("%s\n",s);
	else
	{
		int i,t;
		for(i=0;i<=n;i++)//小于等于  每个数都有和自己交换的一次，不然就少了 
		if(isswap(s,i,n))
		{
			t=s[i];s[i]=s[n];s[n]=t;
			prime(s,n-1);
			t=s[i];s[i]=s[n];s[n]=t;
		}
	}
}

int main()
{
	char s[1000];int len;
	gets(s);
	len = strlen(s);
	prime(s,len-1);
	
	
}



