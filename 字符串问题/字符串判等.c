/*
����������
�ж������ɴ�Сд��ĸ�Ϳո���ɵ��ַ����ں��Դ�Сд��ѹ�����ո���Ƿ���ȡ�
���룺
��1���ǲ������ݵ�����n��ÿ���������ռ2�У���1���ǵ�һ���ַ���s1����2���ǵڶ����ַ���s2��
ÿ���������֮����һ�����У�ÿ�����ݲ�����100���ַ���ע���ַ����ĳ��ȿ���Ϊ0����
�����
n�У���������YES���������NO
�������룺
3
a A bb BB ccc CCC
Aa BBbb CCCccc

a              dfadf              fasdf
adasddfsfsaf
���������
YES
YES
NO

*/

#include  <stdio.h>
#include <string.h>
int main()
{
	int n;int i,j;char s1[100],s2[100],source[100],dest[100];
	scanf("%d",&n);getchar();
	while(n--)
	{
		gets(s1);gets(s2);
		//��׼ȥ�ո��㷨 
		 j=0;
		for(i=0;s1[i]!='\0';i++)
			if(s1[i]!=' ') source[j++]=s1[i]; 
		source[j]='\0';
		j=0;
		for(i=0;s2[i]!='\0';i++)
			if(s2[i]!=' ') dest[j++]=s2[i];
		dest[j]='\0';
		if(stricmp(source ,dest)==0) printf("YES\n");//���Դ�Сд���е� 
		else printf("NO\n");
		
	}
	
	
 } 









