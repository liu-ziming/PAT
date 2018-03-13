
#include <stdio.h>
#include <string.h>
int main()
{
	char exp[100];
	while(scanf("%s",exp)!=	EOF){
		int flag[100]={0};//括号位置标记1,
		int len = strlen(exp);
		int i,j,k;
		for(i=0;i<len;i++){
			if(exp[i]=='('){
				flag[i]=1;
				int tag=0;
				for(j=i+1;j<len;j++){
					if(exp[j]=='(') tag--;
					if(exp[j]==')') tag++; 
					if(tag==1) {flag[j]=1; break;}//标记匹配的右括号 
				}
				//分情况处理 
				//if(i==0||exp[i-1]=='+'){
					//不做啥 
				if(i>0&&exp[i-1]=='-'){//处理变号 
					for(k=i+1;k<j;k++){
						if(exp[k]=='-')
							 exp[k]='+';
						else if(exp[k]=='+')
							exp[k]='-';
					}
					
				}
			}
		} 
		for(i=0;i<len;i++){
			if(flag[i]==0)
				printf("%c",exp[i]);
		}
		printf("\n");
		
		
	}
	
	
	return 0;
 } 
