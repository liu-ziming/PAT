# 上机编程笔记BIT

**Summary**

1 打印图形

2 递归问题  数字类的偏多

3 火车调度 （栈和队列）

4 排序

5 字符串匹配









## SECTION A真题

### 2014

#### 1

```c++

//输入n  1<=n<=9  ，输出高和上底均  n  的等腰梯形 ，如果 n =4 时
//输出图形 如下
//    ****
//   ******
//  ********
// ********** 

#include <stdio.h>

void main()
{
	int n;
	printf("scanf Your num :");
	scanf("%d",&n);
	while(n>9||n<1)
    {
    	printf("Please Try Again :");
    	scanf("%d",&n);
	}
	
	int i;int j,k;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		    printf(" ");
		for(k=0;k<n+2*i;++k)
		    printf("*");
		printf("\n");
	}
 } 
```

#### 2

```c
//输入  n  ， 递归  计算表达式  
//  s=1!+2!+3!+.... +n!

#include<stdio.h>

float singlesum(int n)
{
	if(n==1||n==0)
	    return 1;
	else
	    return n*singlesum(n-1);
}

void main()
{
	int n;float sum=0;
	scanf("%d",&n);
	while(n<1)
	{
		printf("Try Again : ");
		scanf("%d",&n);
	}
	int i=1;
	for(;i<=n;++i)
	    sum+=singlesum(i);
	printf("s = %d",sum);
 } 
```

##### 3

```c

// 特殊的偶数  每一位上的数字两两不相同 
// 要求输入两个四位整数，输出介于两个整数之间的所有这类  特殊偶数

#include <stdio.h>

void main()
{
	int down,up;
	printf("Please scanf with the folmat of 1234 1234 :"); 
	scanf("%d %d",&down,&up);
	while((down<1000||down>9999||up<1000||down>9999)||(down>=up))
	{
	    printf("Please Try Again:");
		scanf("%d %d",&down,&up);
    }
    int n,num;int a,b,c,d;  //分别代表num  从低位到高位的数字 
    for(n = down+1;n<up;n++)
		if(n%2==0)
		    {   num=n;
		    	a=num%10; num/=10;
		    	b=num%10; num/=10;
		    	if(a!=b)
				    {c=num%10; num/=10;} 
				else
				    continue;
		    	if(a!=c&&b!=c)
				    d=num%10;
				else
				    continue;
				if(a!=d&&b!=d&&c!=d)
				    printf("%d\n",n);
				else
				    continue;
			}
    
 } 
```

#### 4

```c
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

```



#### 2015

##### 02

```c
 //  设有字母 a b c  
 //  用递归的 方法 产生 这些字母的组合
 //   长度为  n  的有字符串  和  字符串 个数
 //   必须递归
 
 //分析  :  此类为 m 个字母  组合 n 位的字符串的题。
 // 思想是  有一个全局数组，  设一个指针指向数组，  递归地后移指针，改变数组的组合。 
 //   
 
 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #define MAXSIZE 100
 char s[MAXSIZE];
 
 void print(char str[])
 {  
    char *p;
 	for(p=s;p<=str;++p)     //这里s为 全局变量 
 	{
 		printf("%c",*p);
	 }
	 printf("\n");
  } 
 
 
 
 void func(char s[] ,int n )  //递归 
 {
 	char i = 'a';
	if(n>=1) 
 	    for(;i<='c';++i)
 	    {
 		    *s = i;
 		    func(s+1,n-1);   //n  是组合的位数    
 		                    //递归调用中 s 指针（局部变量）改变全局数组 s 
	    }
	else
 		    print(s); 
  } 
  
  void main()
  {
  	char *str = s;
  	int n;
  	scanf("%d",&n);
  	while(n<1)
  	    scanf("%d",&n);
  	func(str,n);
  	printf("%.0f\n",pow(3,n));
  	
   } 
  
  
  
```



补充题

```c
//  递归输出  1-  n  （n<=10)  中任意两个数组合的结果

//   此题为  位数 不变 ， 成分 改变 

#include <stdio.h>

int count = 0; //输出项计数
void func(int m,int n)
{
	int i;
	if(m==n)
	    return ;
	else
	{
		for(i=m+1;i<=n;++i)
		    if(++count%10==0)  //输出换行
			    printf("%d,%d\n",m,i);
			else
			     printf("%d,%d ",m,i);
		func(m+1,n);
		
	}
 } 
 
 void main()
 {
 	int n;
 	scanf("%d",&n);
 	if(n>1&&n<=10)
 	    func(1,n);
 	else
 	    printf("ERRO");
 }
```



##### 03

```c++

//去除表达式的括号 （表达式只含有加减），
//保证去除括号后表达式值不变

//分析：1-括号前面是'-'时，括号内部变号 
#include <stdio.h>
#include <string.h>
#define MAXSIZE 50

int flag(char []);  //if there is ()
void getpos(char a[] ,int *left,int *right ); //get the position of ()
int del(char a[],int left,int right);//delete the '(' and ‘)' 

int main()
 {
 	char a[MAXSIZE];
 	int left,right;int flagdel=1;  //成功删除标志 
 	gets(a);
    int i=0;
    while(flag(a)==1&&flagdel==1)     //没判断一次，删除一对括号 
    {
    	getpos(a,&left,&right);
    	flagdel=del(a,left,right);
    	
	}
	if(flagdel==1) 
	    puts(a);
 }
 
 int flag(char a[])
 {
 	int i,flag=0;
 	for(i=0;a[i]!='\0';++i)    
	    if(a[i]=='('||a[i]==')')
 	         flag =1;            //  错误：  for循环里不要对判断结果直接return  
 	if(flag==1)                  //   导致了 如果最外层没有括号就flag()就失效了 
 	    return 1;
 	else
 	    return 0;
 }
 
 void getpos(char a[],int *left,int *right)
 {
 	int i=0;
 	while(a[i]!='\0')
 	    {
 	    	if(a[i]=='(')
 	            *left = i;
 	        else if(a[i]==')')  //匹配从左向右的最内侧括号！！！ 
 	        {
 	        	*right = i;
 	        	break;
			}
 	    ++i;
		 }
 	        
 	
  } 
  
  int del(char a[],int left,int right)
  {
  	int i;int j;
  	if(left==0||a[left-1]=='+')
  	    for(i=left,j=left;i<strlen(a);++i)
  	        if(i==left||i==right)
  	            continue;
  	        else
  	            a[j++] = a[i];
  	else if(a[left-1]=='-')          //左括号前是‘-’ 括号内部要变号 
  	    {
		  for(i=left,j=left;i<strlen(a);++i)
  	        if(i==left||i==right)    //待删除括号位置 
  	            continue;
  	        else if(i>left&&i<right)  //括号内部变号 
  	                if(a[i]=='+')
  	                    a[j++]='-';  //注意 是a[j]存储改变后的符号 
  	                else if(a[i]=='-')     //j每次都要+1  ！ 
  	                    a[j++]='+';
  	                else
  	                    a[j++]=a[i];
  	        else
			    a[j++] = a[i];
	    }
	else if(a[left-1]=='/')
	    { 
	   	    printf("the equation is erro") ;
	   	    return 0;
		} 
	a[j]='\0';
	return 1;     //注意 字符串结尾 
  }

 
```



04

![Snipaste_2018-01-13_09-06-55](C:\Users\liu-z\Desktop\Snipaste_2018-01-13_09-06-55.png)





### 2016

1.打印三角形，输入n(1<=n<=9)

2.大概是PI=4-4/3+4/5-4/7+.......+4/4*n-4加和，要求第n+1项小于输入的精度，输出第n项，和加起来的PI值

   比如输入0.01，输出n=100和PI的值

3.输入字符串，以换行为结束符，递归求字符串的长度（不可用任何变量来统计，不是递归不得分）

4.以空格为分隔符输入一行数字，对其中的奇数进行从小到大的排序，对偶数进行从大到小的排序，创建两个指针链表

   （不是指针链表分数减半），将排好的数放进去并输出（大概是这个样子，记不太清了）









