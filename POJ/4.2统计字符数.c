//  4.2统计字符数

//判断a-z 26个字符组成的字符串中哪个字符出现次数最多

//注意  次数相同时取ASCⅡ最小的
//      不超过1000字符 要定义1001大小的数组

#include <stdio.h>
#include <string.h>
#define MAXSIZE 1001

void main()
{
	char s[MAXSIZE];
	int count[26]={0};
	int i;
	int cases,max;
	scanf("%d",&cases);
	while(cases>0)
	{
		scanf("%s",s);
		for(i=0;i<26;++i)  //计数count【】每次都要重新初始化 
		    count[i]=0;
	    for(i=0;i<strlen(s);++i) //统计每个字符出现次数 
	        count[s[i]-'a']++;
    	max =0;
	    for(i=1;i<26;++i)
	        if(count[i]>count[max])
	            max = i;
	    printf("%c %d",'a'+max,count[max]); 
    	cases--;
	}
	
}
 
