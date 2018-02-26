//1-10 的数字输入20个  ，求 出现最多的数


#include <stdio.h>

int main()
{
	int a[21],count[11]={0};
	int i;
	int max=-1,maxpos;
	for(i=0;i<20;i++){
		scanf("%d",&a[i]);
	} 
	for(i=0;i<20;i++){
		count[a[i]]++;
	}
	for(i=1;i<=10;i++){
		if(count[i]>max){
			max=count[i];
			maxpos = i;
		}
	}
	printf("%d",maxpos) ;
	
 } 
