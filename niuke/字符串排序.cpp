
/* 
ÿ���ַ�����һ���ַ�λch����һ����־λflag
��ʼ��result��ʱ�����������ĸ��������ַ�λ������flag=1
�������ĸ��������ַ�λ(����������������)������flag=0

�����ʱ��2��for���ֱ���ѭ��Ŀ��Ҫ��
�ⲿforʵ����ĸ˳������ �ڲ�forʵ������˳������
����result�����ַ���ʱ��Ҫ����ǰλ��flag�Ƿ�Ϊ0 �����Ϊ0��������ƶ�����
ֱ��Ϊ0�ſ�ʼ���루�����������˳�ʼ����ʱ������������ţ���
*/ 
#include <stdio.h>
#include <string.h> 
char s[1000];
char result[1000];
int flag[1000];//����Ƿ�������ĸ 
int main()
{
	gets(s);
	int len= strlen(s);
	int i,j;
	for(i=0;i<len;i++){
		if(s[i]>='A'&&s[i]<='Z'||(s[i]>='a'&&s[i]<='z'))
			flag[i]=0;
		else {
			flag[i]=1;
			result[i]=s[i];
		}
	}
	int index =0;//���������±� 
	//��ѭ��������ĸ˳����ѭ������ԭ�ַ���˳�� 
	for(i='A';i<='Z';i++){
		for(j=0;j<len;j++){
			if(s[j]==i||s[j]==i+32){//�ҵ���ĸ�����Ҵ��λ�� 
				while(flag[index]==1)//indexλ���Ѿ����� 
					index++;
				result[index] = s[j];
				flag[index]   = 1 ;
			}
		}
	}
	for(i=0;i<len;i++)
		printf("%c",result[i]); 
	
	printf("\n");
	
	return 0;
}
