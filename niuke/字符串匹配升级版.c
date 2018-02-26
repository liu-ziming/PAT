
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int match(char *master,char *pattern)
{
	int pos_m=0,pos_p=0;
	int len_m = strlen(master);
	int len_p = strlen(pattern);
	while(pos_m<len_m&&pos_p<len_p){
		if(master[pos_m]==pattern[pos_p]){
			pos_m++;
			pos_p++;
		}
		else if(pattern[pos_p++]=='['){//����[] �ڵ���ĸ�Ƿ�ƥ�� 
			while(pattern[pos_p]!=master[pos_m]&&pattern[pos_p]!=']')
				pos_p++;
			if(pattern[pos_p]==']')   return 0;
			else{
				pos_m++;// [] ��ƥ�䵽�˺�  ���� 
				while(pattern[pos_p]!=']') pos_p++;
				pos_p++; // ���Ƶ�[] �� 
			}
		}
		else   return 0;  //�Ȳ���ȣ�Ҳ������ [ ] �ڣ�ƥ��ʧ�� 
		
	}
	if(pos_m == len_m&&pos_p == len_p)  return 1;  //ֻ�����������ý�������ƥ�䵽�� 
	else return 0;
}

int main()
{
	int n;
	char str[1000][1000];
	char t[1000][1000];
	char pat[1000];
	int i,j,k;
	while(scanf("%d",&n)!=EOF){
		getchar();
		for(i=0;i<n;i++){
			gets(str[i]);
			strcpy(t[i],str[i]);//��Ϊstr ���ȫ��д�ˣ����Ҫ�����ԭ����t �ݴ� 
			strupr(str[i]);
		}
		gets(pat);
		strupr(pat);  //�����ִ�Сд ��ȫ��תΪ��д
		puts(str[0]);
		puts(pat);
		for(i=0;i<n;i++){
			if(match(str[i],pat)==1){
				printf("%d %s\n",i+1,t[i]);
			}
		} 	
	}
	
	
	return 0;
}
