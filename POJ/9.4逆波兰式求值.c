/*
9.4 �沨��ʽ���

//�ݹ����ǰ�ñ��ʽ

//˼·  һ�����������һ���������֣��������֣�������������
                     ������������� ������ֵ��   ���������������ʽ  ������֮ 
*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
double exp()
{
    char s[10];
	//scanf("%s",s);     //ÿ�εݹ�����ַ�������һλ 
	gets(s);
	switch(s[0])  
	{
	     case'+': return exp() + exp();
	     case'-': return exp() - exp();
	     case'*': return exp() * exp();
	     case'/': return exp() / exp();
	     default : return atof(s);  //���ַ�����������ѵ�һ������תΪ ������ 
    }
}


int main()
{
    double ans;
	ans = exp();
	printf("%lf",ans);
}


