/*
3-31. ��̣�����һ���ַ������뽫���е��ַ����յ��ʽ��зָ��������а�����ȫ�����ʡ�(�������ÿո�\t��\n�ָ���ַ�����)
*/
#include<stdio.h>
#include<string.h>

int main()
{
   char s[100];
   int i=0;
   gets(s);
   
   while(s[i]!='\0'){
	   while(s[i]==' '||s[i]=='\t'||s[i]=='\n'&&s[i]!='\0')
		   i++;
	   
	   while(s[i]!=' '&&s[i]!='\n'&&s[i]!='\t'&&s[i]!='\0')
	       printf("%c",s[i++]);
	    printf("\n");
   }
   printf("\n");

	
}
