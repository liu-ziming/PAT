/*用指针对五个字符串排序输出*/

#include <stdio.h> 
#include<string.h>
#define LINEMAX 20
void main()
{
	void sort(char * *  p);
	int i;
	char * *p,*pstr[5],str[5][LINEMAX];
		for(i=0;i<5;i++)
		pstr[i]=str[i]; 
	for(i=0;i<5;i++)
		scanf("%s",pstr[i]);
	p=pstr;
	sort(p);
	printf(" strings sorts");
	for(i=0;i<5;i++)
		printf("%s\n",pstr[i]);
		 
}
void sort(char * * p)        //冒泡排序 
{	int i,j;
	char *temp;
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
			{if(strcmp(*(p+i),*(p+j))>0)
				{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;}
				 
			}
			
}




