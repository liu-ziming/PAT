/*
 
1-33. 编程, 输入顶行字符和图形的高。输出如下例（顶行字符为'A'，图形的高为5）所示的图形， 
                    A
                  B C D
                E F G H I
              J K L M N O P
            Q R S T U V W X Y　　
*/
#include<stdio.h>
#define N 100
void main()
{
	char c;int n;
	scanf("%c%d",&c,&n);
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		    printf(" ");
		for(k=0;k<2*i+1;++k)
		{
			if(c=='z'+1||c=='Z'+1)   //记得循环字母表 
			    c=c-26;
			printf("%c",c++);
		}
		printf("\n");
	}
	
	
 } 

