
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int match(char *master,char *pattern)
{
	int pos_m=0,pos_p=0;
	int len_m = strlen(master);
	int len_p = strlen(pattern);
	while(pos_m<len_m&&pos_p<len_p){
		if(master[pos_m]==pattern[pos_p]){
			pos_m++;
			pos_p++;
		}
		else if(pattern[pos_p++]=='['){//查找[] 内的字母是否匹配 
			while(pattern[pos_p]!=master[pos_m]&&pattern[pos_p]!=']')
				pos_p++;
			if(pattern[pos_p]==']')   return 0;
			else{
				pos_m++;// [] 内匹配到了后  后移 
				while(pattern[pos_p]!=']') pos_p++;
				pos_p++; // 后移到[] 外 
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
			strcpy(t[i],str[i]);//因为str 变成全大写了，最后要输出的原型用t 暂存 
			strupr(str[i]);
		}
		gets(pat);
		strupr(pat);  //不区分大小写 ，全部转为大写
		puts(str[0]);
		puts(pat);
		for(i=0;i<n;i++){
			if(match(str[i],pat)==1){
				printf("%d %s\n",i+1,t[i]);
			}
		} 	
	}
	
	
	return 0;
}
