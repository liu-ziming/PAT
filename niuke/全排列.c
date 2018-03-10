
//不同字符的全排列


#include <stdio.h>
char num[6];
char used[6];
char rcd[6];
int n;
int readdata()
{
	int i=0 ,j;
	char d[6];
	gets(d);
	while(d[i]) {
		num[i] = d[i];i++ ;
	}
	n=i;
	for(j=0;j<i;j++) used[j] = 0 ;
	return 1;
}

int full_perm(int l)
{
	int i;
	if(l==n){
		for(i=0;i<n;i++){
			printf("%c",rcd[i]);
		}
		printf("\n");
		return 0; 
	}
	for(i=0;i<n;i++){
		if(used[i]==0){
			used[i]=1;rcd[l] = num[i];
			full_perm(l+1);
			used[i]=0;
		}
	}
	
	return 0;
}
int cmp(const void *a,const void *b)
{
	return *(char *)a - *(char *)b ;
}
int main()
{
	readdata();
	qsort(num,n,sizeof(char),cmp);
	full_perm(0);
	
	
	return 0;
 } 

