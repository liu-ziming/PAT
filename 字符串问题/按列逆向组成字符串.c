/*
3.��д����void  fun(char  a[][N],  char  *b)����M��N�еĶ�ά�����е��ַ����ݰ����е�"����"�������η���һ���ַ����С����磬��ά����Ϊ 
4  3  2  1   
s  s  s  s 
h  h  h  h   
���ַ����е�����Ϊ1sh2sh3sh4sh����ֱ���ں���fun��{}����������
*/

#include <stdio.h>

int main()
{
	char a[100][100];
	int i,j;
	char s[100];
	char *t=s;
	int m,n;
	scanf("%d%d",&m,&n);
	getchar();
	for(i=0;i<m;++i)
	{
 
	   for(j=0;j<n;++j)
	    	scanf("%c",&a[i][j]);
	    getchar();	
	}
	for(i=n-1;i>=0;i--)
	    for(j=0;j<m;j++)
	         *t++=a[j][i];
	*t='\0';
	puts(s);

}
