//4.3 487 - 3279

#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char telNumber[10000][9];  //号码串 + ‘\0'  =9 
char s[80];    //初始输入
char map[]="222333444555666777888999";  //数据结构来表示  字母号码 与键盘数字的对应关系

int cmp(const void *elem1,const void *elem2)   
{

	return(strcmp((char*)elem1,(char*)elem2));
 } 

void standardizeTel(int n)
{
	int j,k;   //j 是old下标  k是 new 下标；
	j=k=-1;
	 //因为while 循环每次先 ++  所以要j k 初始化 -1  
	while(k<8)          
	{
		j++;
		if(s[j]=='-')
		    continue;
		k++;
		if(k==3)
		{
			telNumber[n][k]='-';   //标准号码格式  123-1234 
			k++; 
		}
		if(s[j]>='A'&&s[j]<='Z')   //号码中字母的处理 
		{
			telNumber[n][k]=map[s[j]-'A'];continue;
		}
		   //号码是数字 
		telNumber[n][k]=s[j];
	}
	telNumber[n][k]='\0';       //字符串 
	return ;
	
}

void main()
{
	int n,i,j;
	int flag;  //是否存在重复号码;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		standardizeTel(i);   //标准化第i个输入号码  并存入telNumber[] 
		
	 } 
	
	qsort(telNumber,n,9,cmp);    //库函数 
	//搜索重复电话号码并输出 
	flag = 1;  //NO duplicates
	i=0;
	while(i<n)
	{
		j=i;i++;         //从  j  到  i  的长度是重复号码个数 
		while(i<n&&strcmp(telNumber[i],telNumber[j])==0)
		    i++;
		if(i-j>1)
		{
			printf("%s %d\n",telNumber[j],i-j);
			flag = 0;
		}
	 } 
	if(flag == 1)
	    printf("No duplicates.\n"); 
	
}
 
