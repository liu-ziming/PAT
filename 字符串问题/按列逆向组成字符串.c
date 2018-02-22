/*
3.编写函数void  fun(char  a[][N],  char  *b)，将M行N列的二维数组中的字符数据按照列的"倒序"次序依次放入一个字符串中。例如，二维数组为 
4  3  2  1   
s  s  s  s 
h  h  h  h   
则字符串中的内容为1sh2sh3sh4sh。请直接在函数fun的{}中输入内容
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
