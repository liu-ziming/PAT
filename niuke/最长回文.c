
#include <stdio.h>
#include <string.h>

char s[1000];
int len;
int flag[1000];
int huiwen(int i,int j){
	int k;
	for(;i<j;i++,j--)
	{
		while(flag[i]==0&&i<j)i++;
		while(flag[j]==0&&i<j)j--;
		if(toupper(s[i])!=toupper(s[j])) return 0;
	}
	return 1;
}
int main()
{
	gets(s);
	int i=0;
	while(s[i]){
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
		{
			flag[i]=1;
		}
		else
			flag[i]=0;
		i++;
	}
	int j;
	len=strlen(s);
	int max=-1;
	int left,right;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(huiwen(i,j)==1){
				if(j-i+1>max) {
					 max=j-i+1;
					 left=i;
					 right=j;
				}
			}
		}
	}
	if(max==-1) printf("%c",s[0]);
	else{
		int k;
		while(flag[left]==0) left++;
		for(k=left;k<=right;k++) printf("%c",s[k]);
		printf("\n");
	}
	
	
	return 0;
}
