
#include <stdio.h>
#include <stack>
stack<double> S;
char exp[100];


int main()
{
	gets(exp);
	int i=0;
	while(exp[i]){
		if(exp[i]>='0'&&exp[i]<='9')
			S.push(exp[i]-'0');
		if(exp[i]=='+'){
			int a = S.top();
			S.pop();
			int b = S.top();
			S.pop();
			S.push(a+b);
		}
		if(exp[i]=='-'){
			int a=S.top();
			S.pop();
			int b=S.top();
			S.pop();
			S.push(b-a);
		}
		if(exp[i]=='/'){
			int a=S.top();
			S.pop();
			int b=S.top();
			S.pop();
			S.push(b/a); 
		}
		if(exp[i]=='*'){
			int a=S.top();
			S.pop();
			int b=S.top();
			S.pop();
			S.push(b*a);
		} 
		i++;
		
	}
	
	
	return 0;
} 
