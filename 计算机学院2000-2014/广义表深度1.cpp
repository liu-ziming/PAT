#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
	stack<char> S;
	int num=0;
	char c;
	char str[1000];
	gets(str);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='(')
			S.push(str[i]);
		if(str[i]==')'){
			if(!S.empty()){
				S.pop();
				num++;
			}
			
		}
			
		i++;
	}
	printf("%d\n",num);
}
