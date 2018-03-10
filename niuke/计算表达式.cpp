
#include <stdio.h>
#include <stack>
stack<char> S;
char exp[100];
char bexp[100];
void trans()
{
	int i=0,k=0;
	while(S.top()) S.pop();
	while(exp[i]){
		if(exp[i]>='0'&&exp<='9')
			bexp[k++] = exp[i]	;
		if(exp[i])=='+'||exp[i]=='-'){
			char ch=S.top();
			while(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
				bexp[k++] = ch;
				S.pop();
				ch=S.top();
			}
			S.push(exp[i]);
		}
		if(exp[i]=='*'||exp[i]=='/'){
			char ch=S.top();
			while(ch=='/'||ch=='*'){
				bexp[k++] = ch;
				S.pop();
				ch = S.top();
			}
			S.push(exp[i]);
		}	
		
		
		i++;
	}
	while(S.size()>0){
		bexp[k++]=S.top();
		S.pop();
	}
	bexp[k]='\0';
}
int cal(){
	while(S.top()) S.pop();
	int i=0;
	while(bexp[i]){
		if(bexp[i]>='0'&&bexp[i]<='9'){
			S.push(bexp[i]);
		}
		if(bexp[i]=='+'){
			int m=S.top();
			S.pop();
			int n=S.top();
			S.pop();
			int x=n+m;
			S.push(x); 
		}
		if(bexp[i]=='-'){
			int m=S.top();
			S.pop();
			int n=S.top();
			S.pop();
			int x=n-m;
			S.push(x);
		}
		if(bexp[i]=='*'){
			int m=S.top();
			S.pop();
			int n=S.top();
			S.pop();
			int x=n*m;
			S.push(x);
		}
		if(bexp[i]=='/'){
			int m=S.top();
			S.pop();
			int n=S.top();
			S.pop();
			int x=n/m;
			S.push(x);
		}
		
		
		i++;
	}
	int result=S.top();
	return result;
	
}
int main(){
	gets(exp);
	trans();
	printf("%d",cal());
	
	return 0;
}
