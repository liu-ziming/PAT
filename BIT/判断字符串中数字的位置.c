/*/*
1-дһ�������ж��ַ��������ֵ�λ�ã�������ʹ�� ��������̣�
 ���磺 ���� a3b4c5 ��� 246 

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
    		printf("%d  ",i+1 );  //���ֵ�λ��
    }

} 
