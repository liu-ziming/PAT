/*/*
1-写一个程序判断字符串中数字的位置（不限制使用 面向对象编程）
 例如： 输入 a3b4c5 输出 246 

 */

#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
int main()
{
	char s[MAXSIZE];
    gets(s);
    int len = strlen(s);
    int i;
    for ( i = 0; i < len; ++i)
    {
    	if(s[i]>'0'&&s[i]<'9')
    		printf("%d  ",i+1 );  //数字的位置
    }

} 
