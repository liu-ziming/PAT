#include<stdio.h>
#include<malloc.h>
#define MAXSIZE 100
char ch1[]={'a','b','c'};
typedef struct st{
     int top;
	 char ch[MAXSIZE];
}st;
void printabc(int n,st *st1){
	if(n==0) {st1->ch[st1->top]='\0';puts(st1->ch);return;}
	for(int i=0;i<=2;i++){
	st1->ch[st1->top++]=ch1[i];
    printabc(n-1,st1);
	st1->top--;
	}

}
int main(){

    st *st1=(st *)malloc(sizeof(st));
    
	st1->top=0;
	st1->ch[0]='\0';
	int n;
	printf("«Î ‰»ÎN");
	scanf("%d",&n);
	
	printabc(n,st1);
	
	int sum=1;int i;
    for(i=1;i<=n;i++)
		sum*=3;
		
	printf("%d\n",sum);
    return 0;
}
