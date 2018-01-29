/*

42 集合排序

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct set
{
	int data[100];
	char type[10];
	int tvlue;
	int len;
}Set;


int cmpup(const void *a,const void *b)
{
	return *(int *)a>*(int *)b?1:-1;
 } 
 int cmpdown(const void *a,const void *b)
{
	Set *aa=(Set *)a;
	Set *bb=(Set *)b;
	
	return aa->tvlue<bb->tvlue?1:-1;
 } 
 
 
int main()
{   
    int i=0,j=0;int n=0;
	//输入数据 
	Set *set=(Set *)malloc(100*sizeof(Set));
	scanf("%s",set[i].type);
	while(strcmp(set[i].type,"*")!=0)
	{
		j=0;
		n++;
		int len=0;
		scanf("%d",&set[i].data[j]);
		while(set[i].data[j]!= 0); //读入集合 
		{
			len++;j++;
			scanf("%d",&set[i].data[j]);	
		}	
		set[i].len = len;  //  不等长数组 
		//计算  指标  存放在每行第一个 
		if(strcmp(set[i].type,"[max]")==0)
		{
			int max=0;int k;
			for(k=0;k<set[i].len;++k)
			    if(max<set[i].data[k])
			        max=set[i].data[k];
			set[i].tvlue = max;			
		}
		else if(strcmp(set[i].type,"[min]")==0)
		{
			int min=9999;int k;
			for(k=0;k<set[i].len;++k)
			    if(min>set[i].data[k])
			        min=set[i].data[k];
			set[i].tvlue = min;	
		}
		else if(strcmp(set[i].type,"[mean]")==0)
		{
			int sum=0;int k;
			for(k=0;k<set[i].len;k++)
			    sum+=set[i].data[k];
			set[i].tvlue = sum/len;
		}
		else if(strcmp(set[i].type,"[medium]")==0)
		{
			int max=0,min=9999;int k;
			for(k=0;k<set[i].len;++k)
			{
				if(max<set[i].data[k])
			        max=set[i].data[k];
			    if(min>set[i].data[k])
			        min=set[i].data[k];
			}
			set[i].tvlue = (min+max)/2;
		}
		i++;
		
		scanf("%s",set[i].type);
	}
	//排序
	qsort(set,n,sizeof(set[i]),cmpdown);
	for(i=0;i<n;i++)	
		qsort(set[i].data,set[i].len,sizeof(int),cmpup);

	
	for(i=0,j=1;i<n;i++)
	{
		printf("{%d}",set[i].tvlue);
		for(j=0;j<set[i].len;++j)
		 {
		 	
			 if(j!=1)   printf(" ");
			 printf("%d",set[i].data[j]);
		 }
		 printf("\n");
	}
	
	
	
}
