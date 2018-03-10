/*behang
字符串中有扩展 例如 a-d扩展为abcd 
要求：
只处理[a-z]  [A-Z]  [0-9]  范围内的 ，且必须同时是一类才进行扩展 
，如 a-R  D-e  0-b 4-B 这种都要原样输出

*/

//关键思路  ： 写一个判断类型的函数， 当 - 前后 同一类型 且 在指定范围内
//就可以扩展  

#include <stdio.h>

int type(char ch)
{
	if(ch>='a'&&ch<='z') return 1;
	else if(ch>='A'&&ch<='Z')  return 2;
	else if(ch>='0'&&ch<='9')  return 3;
	else return -1; 
}

int main()
{
	char str[1000];
	while(1){
		gets(str);
		int i=0;
		while(str[i]!='\0'){
			if(str[i]=='-'&&i!=0){
				if(type(str[i-1])==type(str[i+1])&&type(str[i-1])!=-1&&str[i-1]<=str[i+1])
				{
					if(str[i-1]<str[i+1]){
						char ch=str[i-1]+1;
						while(ch!=str[i+1]){
							printf("%c",ch++);
					}
					}//str[i-1] == str[i+1] 时 去掉 - ，也就是不输出 
				}
				else printf("%c",str[i]);
			}
			else{
				printf("%c",str[i]);
			}
			
			i++;
		}
	}
	
	
 } 
