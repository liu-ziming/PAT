/*
9.4 逆波兰式求解

//递归计算前置表达式

//思路  一共两类情况，一是输入数字，返回数字（浮点数！！）
                     二是输入运算符 ，返回值是   继续读入两个表达式  并运算之 
*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
double exp()
{
    char s[10];
	//scanf("%s",s);     //每次递归读入字符串后退一位 
	gets(s);
	switch(s[0])  
	{
	     case'+': return exp() + exp();
	     case'-': return exp() - exp();
	     case'*': return exp() * exp();
	     case'/': return exp() / exp();
	     default : return atof(s);  //对字符串操作，会把第一个数字转为 浮点数 
    }
}


int main()
{
    double ans;
	ans = exp();
	printf("%lf",ans);
}


