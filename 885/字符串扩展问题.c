/*behang
�ַ���������չ ���� a-d��չΪabcd 
Ҫ��
ֻ����[a-z]  [A-Z]  [0-9]  ��Χ�ڵ� ���ұ���ͬʱ��һ��Ž�����չ 
���� a-R  D-e  0-b 4-B ���ֶ�Ҫԭ�����

*/

//�ؼ�˼·  �� дһ���ж����͵ĺ����� �� - ǰ�� ͬһ���� �� ��ָ����Χ��
//�Ϳ�����չ  

#include <stdio.h>

int type(char ch)
{
	if(ch>='a'&&ch<='z') return 1;
	else if(ch>='A'&&ch<='Z')  return 2;
	else if(ch>='0'&&ch<='9')  return 3;
	else return -1; 
}

int main()
{
	char str[1000];
	while(1){
		gets(str);
		int i=0;
		while(str[i]!='\0'){
			if(str[i]=='-'&&i!=0){
				if(type(str[i-1])==type(str[i+1])&&type(str[i-1])!=-1&&str[i-1]<=str[i+1])
				{
					if(str[i-1]<str[i+1]){
						char ch=str[i-1]+1;
						while(ch!=str[i+1]){
							printf("%c",ch++);
					}
					}//str[i-1] == str[i+1] ʱ ȥ�� - ��Ҳ���ǲ���� 
				}
				else printf("%c",str[i]);
			}
			else{
				printf("%c",str[i]);
			}
			
			i++;
		}
	}
	
	
 } 
