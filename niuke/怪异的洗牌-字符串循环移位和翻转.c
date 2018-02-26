// 循环移位 操作
// 翻转数组操作


#include <stdio.h>
#include <string.h>

void shift(int *s,int len) //完成一步循环移动 
{
	int i;
	int ch=s[len-1];
	for(i=len-1;i>=1;i--){
		s[i]=s[i-1];
	}
	s[0]=ch;
 } 
void flip(int  *s,int len) //翻转数组 
{
	int i,j;
	for(i=0,j=len-1;i<j;i++,j--){
		int  t;
		t=s[i];s[i]=s[j];s[j]=t;
	}
}

int main()
{
	int s[1000],pos[1000];
	int n,k;
	int i,j;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++) s[i-1] = i;
	for(i=0;i<k;i++)
		scanf("%d",&pos[i]);//移位的开始位置
	for(i=0;i<k;i++){
		int f = n-pos[i];//移位几位 
		for(j=0;j<f;j++)  shift(s,n);
		//伴随着一次flip
		flip(s,n/2);
		 
	} 
	for(i=0;i<n;i++){
		if(i!=0)printf(" ");
		printf("%d",s[i]);
	}
	 
	
	return 0;
 } 


