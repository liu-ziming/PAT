
//�ַ���ȥ��ָ�� �ַ�c

#include <stdio.h>

#include <string.h>

int main()
{
	char s[1000],c;
	int i=0,j=0;
	scanf("%s",s);
	getchar();
	scanf("%c",&c);
	while(s[i]!='\0'){
		if(s[i]!=c){
			s[j++] = s[i++];
		}
		else
			i++; // ��Ҫ����  ���� ��ʱ�� i++ 
	}
	s[j] = '\0';
	puts(s);
	
	return 0;
 } 

