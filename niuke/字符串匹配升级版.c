//
/*题目描述： 
        读入数据string[ ]，然后读入一个短字符串。要求查找string[ ]中和短字符串的所有匹配，输出行号、匹配字符串。匹配时不区分大小写，并且可以有一个用中括号表示的模式匹配。如“aa[123]bb”，就是说aa1bb、aa2bb、aa3bb都算匹配。 
    输入： 
    输入有多组数据。 
    每组数据第一行输入n(1<=n<=1000)，从第二行开始输入n个字符串（不含空格），接下来输入一个匹配字符串。 
    输出： 
    输出匹配到的字符串的行号和该字符串（匹配时不区分大小写）。 
    样例输入： 
    4 
    Aab 
    a2B 
    ab 
    ABB 
    a[a2b]b 
    样例输出： 
    1 Aab 
    2 a2B 
    4 ABB 
*/ 
/*
第一次只对了18%    使用的是strupr()  
后来改成在模式匹配的时候用  toupper()将单个字母转为大写统一比较，就通过了
说明 strupr处理有的时候可能超时等问题吧
*/ 
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int match(char *master,char *pattern)
{
	int pos_m=0,pos_p=0;
	int len_m = strlen(master);
	int len_p = strlen(pattern);
	while(pos_m<len_m&&pos_p<len_p){
		if(toupper(master[pos_m])==toupper(pattern[pos_p])){
			pos_m++;
			pos_p++;
		}
		else if(pattern[pos_p++]=='['){//查找[] 内的字母是否匹配 
			while(toupper(pattern[pos_p])!=toupper(master[pos_m])&&pattern[pos_p]!=']')
				pos_p++;
			if(pattern[pos_p]==']')   return 0;
			else{ //括号内匹配到了
				while(pattern[pos_p]!=']') pos_p++;
				pos_m++;
				pos_p++;
			}
		}
		else   return 0;  //既不相等，也不是在 [ ] 内，匹配失败 
		
	}
	if(pos_m == len_m&&pos_p == len_p)  return 1;  //只有两个都正好结束才算匹配到了 
	else return 0;
}

int main()
{
	int n;
	char str[1000][1000];
	char t[1000][1000];
	char pat[1000];
	int i,j,k;
	while(scanf("%d",&n)!=EOF){
		getchar();
		for(i=0;i<n;i++){
			gets(str[i]);
		}
		gets(pat);
		//strupr(pat);  
		//puts(str[0]);
		//puts(pat);
		for(i=0;i<n;i++){
			if(match(str[i],pat)==1){
				printf("%d %s\n",i+1,str[i]);
			}
		} 	
	}
	
	
	return 0;
}



 





 
