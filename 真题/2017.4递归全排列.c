/*
4.�����ַ������ݹ�������ǵ�ȫ���У������ظ�����
��������abc�����abc,acb,bac,bca,cba,cab��
��������������������һ���Ƚ���֣���abab����֪�������ʲô
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isswap(char *list, int begin, int end) {
   
	if(begin!=end)  //�Լ�������Լ����� 
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
		for(i=0;i<=n;i++)//С�ڵ���  ÿ�������к��Լ�������һ�Σ���Ȼ������ 
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



