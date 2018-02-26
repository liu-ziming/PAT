//素数判定


#include <stdio.h>
#include <math.h>
int judge(int n)
{
	int i;int flag=1;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) flag =0;
	}
	if(flag==1) return 1;
	else return 0;
 } 
 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	if(n==0||n==1||n<0){  //必须注意 0  1  负数 都不所素数的特例 
        printf("no");return 0;
    }
 	if(judge(n)==1) printf("yes\n");
 	else printf("no\n");
	
 	
 }
