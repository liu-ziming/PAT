/*


    ����һ��ֻ����0��1���ַ�����������1��100֮�䣩������ÿһ���Ӵ����ֵĴ�����
����
    һ�У�һ��01�ַ�����
���
    �����г��ִ�����1�����ϵ��Ӵ���������Ӵ������ִ������м��õ����ո���������Ӵ����ֵ����С�������������ÿ��һ����
��������

    10101

�������

    0 2
    01 2
    1 3
    10 2
    101 2

*/

/*
˼· �� ��ö�������Ӵ� (��׼��ģ�飩  �������һ�������ͷ��� �洢���� ������ �ͼ��� ++   
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct substr{
	char str[100];
	int count ;
}store[1000]; 
int q=-1;//��Ϊ�洢����Ľ�βָ�� 

int count(char *s)
{
	if(q==-1){
		strcpy(store[++q].str,s);
		store[q].count=1;
		return;
	}
	//int flag=1;//s�Ӵ��Ѿ��洢 
	int i;
	for(i=0;i<=q;i++)
		if(strcmp(store[i].str,s)==0){
			store[i].count++;
			return;
		} 
	if(i>q){
		strcpy(store[++q].str,s);
		store[q].count=1;
		return; 
	}
	
}
int cmp(const void *a,const void *b)
{
	struct substr *aa= (struct substr *)a;
	struct substr *bb= (struct substr *)b;
	return strcmp(aa->str,bb->str);
}

int main()
{
	char str[1000],substr[1000]; 
	int i,j,len,sublen;
	gets(str);
	sublen = len = strlen(str);
	while(sublen>0)
	{
		for(i=0;i<=len-sublen;i++)
		{
			strncpy(substr,str+i,sublen);
			substr[sublen]='\0';
			count(substr); //����������� 
			
		}
		
		sublen--;
	}

	qsort(store,q+1,sizeof(store[0]),cmp);

	for(i=0;i<=q;i++)
	{
		if(store[i].count>1)
			printf("%s %d\n",store[i].str,store[i].count);
	}
	

} 




