 //  设有字母 a b c  
 //  用递归的 方法 产生 这些字母的组合
 //   长度为  n  的有字符串  和  字符串 个数
 //   必须递归
 
 //分析  :  此类为 m 个字母  组合 n 位的字符串的题。 有n 不变或者m 不变  --此题为 n 改变 ,m 不变 
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
  
  
  
