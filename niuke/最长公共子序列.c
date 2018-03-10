//求解最长公共子序列 
#include <stdio.h>
#include <string.h>
int maxlen[1000][1000];
char s1[1000],s2[1000];
int main()
{
	int i,j,k;
	while(scanf("%s%s",s1+1,s2+1)>0){
		int len1 = strlen(s1+1);
		int len2 = strlen(s2+1);
		for(i=0;i<=len1;i++) maxlen[i][0]=0;//第一列 
		for(i=0;i<=len2;i++) maxlen[0][i]=0;//第一行 
		for(i=1;i<=len1;i++){
			for(j=1;j<=len2;j++){
				if(s1[i]==s2[j])
					maxlen[i][j] = maxlen[i-1][j-1] + 1;
				else{
					int n1=maxlen[i-1][j];
					int n2=maxlen[i][j-1];
					if(n1>n2) maxlen[i][j] = n1;
					else      maxlen[i][j] = n2; 
				}
			}
		}
		printf("%d\n",maxlen[len1][len2]);
		
		
	}
	
	
	return 0;
 } 
