
#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
	stact<char>S;
	int num=0;
	char c;
	char str[1000];
	gets(str);
	int i=0;
	while(str[i]){
		if(str[i]=='(')
			S.push(str[i]);
		else if(str[i]==')'){
			if(!S.empty()){
				S.pop();
				num++;
			}
			
		}
		else{
			continue;
		}
			
		i++;
	}
	printf("%d\n",num);
}
