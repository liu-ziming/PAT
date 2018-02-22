/*求两个字符串 公共的字母存在 
问题描述：
	两个单词互为anagrams，意思是一个单词的字母经过重新排序后可以形成另一个单词，例如，单词"occurs"和"succor"互为anagrams。然而"dear"和"dared"不是互为anagrams，因为字母d在"dared"中出现了2次，而在"dear"只出现了1次。英语中最著名的anagrams是"dog"和"god"。
	两个单词的anagrammatic距离为N，意思是至少要在两个单词中一共去掉N个字母，才能使两个单词中剩下的部分互为anagrams。例如，给定两个单词："sleep"和"leap"，我们需要至少去掉3个字母（从单词"sleep"中去掉2个字母、从单词"leap"中去掉1个字母），才能使这两个单词中剩下的部分互为anagrams（每个单词只剩下lep）。对于单词"dog"和"cat"，由于两个单词没有相同的字母，所以它们的anagrammatic距离是两个单词字母个数的总和，因为要去掉所有字母才能使它们互为anagrams。（注意：一共单词总是和它本身互为anagrams的）
	你的任务是编写一个程序，计算两个单词的anagrammatic距离。
输入：
	输入文件的第一行为一个正整数N（小于60000），标明输入文件中测试数据的个数。每个测试数据包含两个单词，有可能为空，每个单词占一行（所以有可能为空行）。因此输入文件中第一行之后还有2N行。
	尽管单词可能为空，但它们肯定是很简单的单词（单词中的字母都是小写的），而且都是英文字母表中26个字母中的一个，最长的单词是pneumonoultramicroscopicsilicovolcanoconiosis。
输出：
	对每个测试数据，输出两个单词的anagrammatic距离，按照样例输出中的格式输出。
样例输入：
4
crocus
succor
dares
seared
empty

smell
lemon
样例输出：
Case #1:  0
Case #2:  1
Case #3:  5
Case #4:  4
解题分析：
	在求两个单词a和b的anagrammatic距离时，实际上只需要对单词a中的每个字母x，扫描单词b，如果能找到相同的字母，则字母x可以保留，否则不保留。但要注意，由于在单词中同一个字母可能出现多次，所以需要用数组记录每个字母是否保留。
	最终求得的单词a和b的anagrammatic距离=a的长度+b的长度-2*单词a中保留的字母数。
	注意，单词为空的情况。

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char stra[1000],strb[1000]; int flag[1000]={0};
	int n;int lena,lenb;int i,j;int count =0;//a中保留的字母数 
	int k=1;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		gets(stra);gets(strb);
		lena=strlen(stra);
		lenb=strlen(strb);
		count=0;
		for(i=0;i<lenb;i++) flag[i]=0;//初始化标志数组 
		if(lena==0||lenb==0) count=0;
		else
			for(i=0;i<lena;i++) //只需要知道a 和b中有多少共同字母就行 
			{
				for(j=0;j<lenb;j++)
				{
					if(strb[j]==stra[i]&&flag[j]!=1){ //统计共有字符，记得要设置标志  
						count++;
						flag[j]=1;break;
					} 
				
				}
			}
		printf("Case #%d: %d\n",k++,lena+lenb-2*count); 
		
	}
	
	 
	
	
}
























