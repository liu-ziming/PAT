//�������� 4 ���ַ�(�磺abcd)�������������(�磺 dcba)�� 

#include <stdio.h>

int main()
{
	char s[4];
	int i;
	for(i=0;i<4;i++)
	    scanf("%c",&s[i]);
	getchar(); 
	for(i=3;i>=0;i--)
	    printf("%c",s[i]); 
 } 
