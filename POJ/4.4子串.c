//4.4 字串

//  找一组字符串的最大公共字串    
//对于字符串X ，其本身或者  x 的反序   是一组字符串的子串
//则输出  X 串的长度

// 输入  t 组字符串组   在分别输入字符串组个数 n 紧接着 n 个字符串

//输出   各组的最大字串的长度

//2
//3
//ABCD
//BCDEF
//BRCD
//2
//rose
//orchiel

//注意  大小写敏感
//思想  ：  把字符串组中最短的字符串x0取出， 对 x0 的各字串从 长到短  判断是否满足条件， 知道找到一个符合 条件的字串
//  难点   x0的字串要从长到短判断 -- 且大量运用  字符串处理函数 -- 
#include <stdio.h>
#include <string.h>

int t , n ;
char str[100][101];
 
int searchMaxSubString(char *source)
{
	int subStrLen=strlen(source),sourceStrLen=  strlen(source);
	char subStr[101],revSubStr[101];
	int i,j;
	int foundMaxSub;
	
	while(subStrLen>0) //搜索所有长度的字串，从最长开始 
	{
		for(i=0;i<=sourceStrLen-subStrLen;++i) //---erro  子串长度为substrlen时，有 sourcestrlen - substrlen +1 个子串 
	    {
	    	//搜索长度为subStrLen 的所有字串
			strncpy(subStr,source+i,subStrLen);        //strncpy 的用法(目标地址，来源串起始地址，复制长度） 
	    	strncpy(revSubStr,source+i,subStrLen); 
	    	subStr[subStrLen]=revSubStr[subStrLen]='\0'; //复制过来的字串都要加'\0'
		    strrev(revSubStr);  //Rev 
		    foundMaxSub = 1;
			for(j=0;j<n;j++)
			{
				if(strstr(str[j],subStr)==NULL&&strstr(str[j],revSubStr)==NULL)   //所有字符串中查找字串 
			    {
			    	foundMaxSub = 0;
			    	break;
				}
			 } 
			 if(foundMaxSub==1)
			     return subStrLen; //找到合适的长度 
						 
		}//for		
		subStrLen--;
	}//while
	return 0;
	
}

void main()
{
	int i,j=0,minStrLen;
	char minStr[101];  //记录最短的字符串；
	
    scanf("%d",&t);
    int subStrLen[t];
	while(t--)
	{
		scanf("%d",&n);
		minStrLen = 100;
		for(i=0;i<n;i++)   //对一组字符串操作 
		{
			scanf("%s",str[i]);
			if(strlen(str[i])<minStrLen)  //找出 最短 的字符串 并记录 
			{
				minStrLen = strlen(str[i]);
				strcpy(minStr,str[i]);				
			}
		}
		subStrLen[j++]= searchMaxSubString(minStr);  //在minStr中搜索满足条件的最长字串 		
	 } //while
	 
	 for(i=0;i<j;++i)      //统一输出各组的最大子串长度 
	     printf("%d\n",subStrLen[i]);
	 
}
 









 
