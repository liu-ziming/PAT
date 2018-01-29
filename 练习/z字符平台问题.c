// 求字符串的  字符平台
// 一个字符串中任意子序列  若子序列中各字符均相同，则成为字符平台
// 输入不超过100  的字符串S  
// 输出S中长度最大的所有字符平台的起始位置 和所含字符  
// 字符平台可能不止一个  

 
#include <stdio.h>
#define MAXSIZE 101
void main()
{
	int count[MAXSIZE]={0};  //以字母[i] 开始的 字符平台长度 
	int len = 0;  //最长子序列 
	int flag=0;  //标记是否存在字符平台 
	char S[MAXSIZE];  
	gets(S);
	int i=0,j;
	for(;S[i]!='\0';++i)
    {
    	for(j=i;S[j+1]!='\0'&&S[j]==S[j+1];++j)  //统计  以字母【i】开头的字符平台长度 
    	{
    		count[i]++;
    		flag = 1;
		 } 
    	count[i]++;
    	if(count[i]>len)
    	{
    		len = count[i];
		}
		
	}
	if(flag== 0 )
	    return ;
	else
	    for(i=0;S[i]!='\0';++i)
	        if(count[i]==len)
	        
	    	    printf("%d,%c\n",i+1,S[i]);
		    
}
	
	
	
/*	
	while(S[i]!='\0')
	{
		if(S[i]==S[i-1])
        {	tpos = i-1;
	    	tch  =S[i];
	    	flag=1; 
	        while(S[i]==S[i-1])
	        {
			    count++;  
			    i++;
		    }
		}	
		if(count>len)
		{
			len = count;
			pos = tpos;
			ch = tch;
		}
		
		i++;
	}
	
	if(flag)
	printf("%d,%c",pos,ch);
 } */
