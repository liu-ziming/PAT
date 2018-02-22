/*


    给出一个只包含0和1的字符串（长度在1到100之间），求其每一个子串出现的次数。
输入
    一行，一个01字符串。
输出
    对所有出现次数在1次以上的子串，输出该子串及出现次数，中间用单个空格隔开。按子串的字典序从小到大依次输出，每行一个。
样例输入

    10101

样例输出

    0 2
    01 2
    1 3
    10 2
    101 2

*/

/*
思路 ： 先枚举所以子串 (标准化模块）  ，如果第一次遇到就放入 存储数组 ，否则 就计数 ++   
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct substr{
	char str[100];
	int count ;
}store[1000]; 
int q=-1;//作为存储数组的结尾指针 

int count(char *s)
{
	if(q==-1){
		strcpy(store[++q].str,s);
		store[q].count=1;
		return;
	}
	//int flag=1;//s子串已经存储 
	int i;
	for(i=0;i<=q;i++)
		if(strcmp(store[i].str,s)==0){
			store[i].count++;
			return;
		} 
	if(i>q){
		strcpy(store[++q].str,s);
		store[q].count=1;
		return; 
	}
	
}
int cmp(const void *a,const void *b)
{
	struct substr *aa= (struct substr *)a;
	struct substr *bb= (struct substr *)b;
	return strcmp(aa->str,bb->str);
}

int main()
{
	char str[1000],substr[1000]; 
	int i,j,len,sublen;
	gets(str);
	sublen = len = strlen(str);
	while(sublen>0)
	{
		for(i=0;i<=len-sublen;i++)
		{
			strncpy(substr,str+i,sublen);
			substr[sublen]='\0';
			count(substr); //处理计数函数 
			
		}
		
		sublen--;
	}

	qsort(store,q+1,sizeof(store[0]),cmp);

	for(i=0;i<=q;i++)
	{
		if(store[i].count>1)
			printf("%s %d\n",store[i].str,store[i].count);
	}
	

} 




