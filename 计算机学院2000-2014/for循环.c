//2���� a��b��c ���� 0 �� 9 ֮������֣�abc��bcc �� ������λ�������У�abc+bcc=532��
//���������������� a��b��c ��ֵ��

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("����������ABCΪ ��\n"); 
	for(a=0;a<=9;a++)
	    for(b=0;b<=9;b++)
	        for(c=0;c<=9;c++)
	            if((100*a+10*b+c)+(100*b+10*c+c)==532)
	                printf("a=%d b=%d c=%d",a,b,c);
}
