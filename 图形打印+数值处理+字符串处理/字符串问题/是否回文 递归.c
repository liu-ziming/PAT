/*
3-17. ��̣�����һ�����֣��жϸ��������Ƿ��ǻ��ġ���ʹ�õݹ����ԣ�
     �������磬���룺MA DAM I MAD AM       �����YES
����     ���������룺ABCDBA.           �����NO

*/

#include <stdio.h>
#include <string.h>

int func(char s[],int n)
{
	if(n==0||n==1)
	    return 1;
	else if(s[0]==s[n-1])   return 1*func(s+1,n-2);
	else return 0*func(s+1,n-2);
}

int main()
{
	char s[100];
	gets(s);
	int len =strlen(s); 
	int flag=func(s,len);
	if(flag==1)  printf("YES");
	else  printf("NO");             
	
 } 
