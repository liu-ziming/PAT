/*

1-给定一个程序， 关于字符串的， 要求输入并调试， 说出此程序的意图。意图是按字母顺序对两个字符串
比较排序。第二问要求用尽可能少的语句对该程序进
行修改， 使其能够对两个字符串比较长度排序

*/
//字符串排序  1》实现字典序
     //         2》实现按字符串长短年排序


#include <stdio.h>
#include <stdlib.h>
#include <String.h>


int cmpalphabet(const void *s1,const void *s2)
{
	return (strcmp((char*)s1,(char*)s2));
}
int cmplen(const void *s1,const void *s2)
{
    char *s11=(char*)s1;
    char *s22=(char*)s2;
	return(strlen(s11)>strlen(s22)); 
}
int main()
{
	char s[100][100];
	int i=0;
	while(scanf("%s\n",s[i])!=EOF)  //两次ctrl + z 结束 
	   i++;                         //while((c=getchar())!=EOF)//按一次ctrl+z就结束
	int j;
	printf("\n排序前:\n");
	for(j=0;j<i;j++)
		printf("%s  ",s[j] );
    printf("\n按照字典序:\n");
    qsort(s,i,sizeof(s[0]),cmpalphabet);
    for(j=0;j<i;j++)
		printf("%s  ",s[j] );
    printf("\n按照字符串长度排序：\n");
    qsort(s,i,sizeof(s[0]),cmplen);
    for(j=0;j<i;j++)
		printf("%s  ",s[j] );

}
