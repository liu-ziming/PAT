
//KMP  ��Сѭ���� 

#include <stdio.h>
#include <string.h>
char s[1000],next[1000];
int len;
void getnext(){  //kmpǰ׺�� 
	int i=0;
	int l=-1;  //l �ǵ�ǰ���Ĺ���ǰ��׺ 
	next[0]=-1;
	while(i<len){
		if(l==-1||s[i]==s[l]){
			l++;i++;
			next[i]=l;
		}
		else
			l = next[l];
	}
}
int print()
{
	int k=len-next[len-1]-1;  //��Сѭ���ڳ��� 
	 if(k==0) return 1;
	 if(len%k==0)  return len/(len-next[len-1]-1);
	 else return 1; 
}
int main()
{
	
	while(gets(s)&&s[0]!='.')
	{
		len=strlen(s);
		getnext();
		printf("%d",print());
	}
	
 } 



