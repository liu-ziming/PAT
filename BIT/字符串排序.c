/*

1-����һ������ �����ַ����ģ� Ҫ�����벢���ԣ� ˵���˳������ͼ����ͼ�ǰ���ĸ˳��������ַ���
�Ƚ����򡣵ڶ���Ҫ���þ������ٵ����Ըó����
���޸ģ� ʹ���ܹ��������ַ����Ƚϳ�������

*/
//�ַ�������  1��ʵ���ֵ���
     //         2��ʵ�ְ��ַ�������������


#include <stdio.h>
#include <stdlib.h>
#include <String.h>


int cmpalphabet(const void *s1,const void *s2)
{
	return (strcmp((char*)s1,(char*)s2));
}
int cmplen(const void *s1,const void *s2)
{
    char *s11=(char*)s1;
    char *s22=(char*)s2;
	return(strlen(s11)>strlen(s22)); 
}
int main()
{
	char s[100][100];
	int i=0;
	while(scanf("%s\n",s[i])!=EOF)  //����ctrl + z ���� 
	   i++;                         //while((c=getchar())!=EOF)//��һ��ctrl+z�ͽ���
	int j;
	printf("\n����ǰ:\n");
	for(j=0;j<i;j++)
		printf("%s  ",s[j] );
    printf("\n�����ֵ���:\n");
    qsort(s,i,sizeof(s[0]),cmpalphabet);
    for(j=0;j<i;j++)
		printf("%s  ",s[j] );
    printf("\n�����ַ�����������\n");
    qsort(s,i,sizeof(s[0]),cmplen);
    for(j=0;j<i;j++)
		printf("%s  ",s[j] );

}
