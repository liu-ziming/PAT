#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
char s[100][10];
char *p[100];
int i=0;
double mul(double (*exp1)(),double (*exp2)()){
	return exp2()/exp1();
}
double exp()
{
    //char s[10];
	//scanf("%s",s);     //ÿ�εݹ�����ַ�������һλ 
	i--;
	
	switch(*s[i])
	{
	     case'+': return exp() + exp();
	     case'-': return mul(&(*exp)(),&(*exp)());
	     case'*': return exp() * exp();
	     case'/': return exp() / exp();
	     default : return atof(s[i]);  //���ַ�����������ѵ�һ������תΪ ������ 
    }
}
int main()
{
	char ch;;
	do{
		scanf("%s",s[i++]);
		ch=getchar();
	}while(ch!='\n');
	int len =i;
	
	printf("%lf",exp());
	return 0;
}
