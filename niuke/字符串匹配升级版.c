//
/*��Ŀ������ 
        ��������string[ ]��Ȼ�����һ�����ַ�����Ҫ�����string[ ]�кͶ��ַ���������ƥ�䣬����кš�ƥ���ַ�����ƥ��ʱ�����ִ�Сд�����ҿ�����һ���������ű�ʾ��ģʽƥ�䡣�硰aa[123]bb��������˵aa1bb��aa2bb��aa3bb����ƥ�䡣 
    ���룺 
    �����ж������ݡ� 
    ÿ�����ݵ�һ������n(1<=n<=1000)���ӵڶ��п�ʼ����n���ַ����������ո񣩣�����������һ��ƥ���ַ����� 
    ����� 
    ���ƥ�䵽���ַ������кź͸��ַ�����ƥ��ʱ�����ִ�Сд���� 
    �������룺 
    4 
    Aab 
    a2B 
    ab 
    ABB 
    a[a2b]b 
    ��������� 
    1 Aab 
    2 a2B 
    4 ABB 
*/ 
/*
��һ��ֻ����18%    ʹ�õ���strupr()  
�����ĳ���ģʽƥ���ʱ����  toupper()��������ĸתΪ��дͳһ�Ƚϣ���ͨ����
˵�� strupr�����е�ʱ����ܳ�ʱ�������
*/ 
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int match(char *master,char *pattern)
{
	int pos_m=0,pos_p=0;
	int len_m = strlen(master);
	int len_p = strlen(pattern);
	while(pos_m<len_m&&pos_p<len_p){
		if(toupper(master[pos_m])==toupper(pattern[pos_p])){
			pos_m++;
			pos_p++;
		}
		else if(pattern[pos_p++]=='['){//����[] �ڵ���ĸ�Ƿ�ƥ�� 
			while(toupper(pattern[pos_p])!=toupper(master[pos_m])&&pattern[pos_p]!=']')
				pos_p++;
			if(pattern[pos_p]==']')   return 0;
			else{ //������ƥ�䵽��
				while(pattern[pos_p]!=']') pos_p++;
				pos_m++;
				pos_p++;
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
		}
		gets(pat);
		//strupr(pat);  
		//puts(str[0]);
		//puts(pat);
		for(i=0;i<n;i++){
			if(match(str[i],pat)==1){
				printf("%d %s\n",i+1,str[i]);
			}
		} 	
	}
	
	
	return 0;
}



 





 
