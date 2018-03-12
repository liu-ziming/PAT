/*
All in All
（来源：poj.grids.cn 1936，程序设计导引及在线实践（李文新）练习2 P117）
问题描述：
给定两个字符串s和t，判断s是否是t的子序列。即从t中删除一些字符，将剩余的字符连接起来，即可获得s。
输入：
输入文件包括多组测试数据，每组测试数据占一行，包括两个由ASCII码组成的字符串s和t，它们的长度都不超过100000。
输出：
	对于每个测试数据输出一行，如果s是t的子序列，则输出"Yes"，否则输出"No"。
样例输入：
sequence subsequence
person compression
VERDI vivaVittorioEmanueleReDiItalia
caseDoesMatter CaseDoesMatter
样例输出：
Yes
No
Yes
No
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char sourcestr[100000],substr[100000];
	scanf("%s %s",substr,sourcestr);
	int i=0,j=0;int flag;
	while(substr[i]!='\0')
	{
		//注意 每次源字符串下标 J 不能初始化，每次从上一次的位置继续扫描  ，看是否有相等数据 
		flag = 0; //标志是否有相等字符 ，默认没有 
		while(sourcestr[j]!='\0')
		{
			if(sourcestr[j]!=substr[i]) j++;
			else{
				flag=1;break;
			}
		 } 
		if(flag==0) break; 
		i++; 
	}
	if(flag==0) printf("NO\n");
	else printf("YES\n");
	
	
}



