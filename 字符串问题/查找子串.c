/*
All in All
����Դ��poj.grids.cn 1936��������Ƶ���������ʵ���������£���ϰ2 P117��
����������
���������ַ���s��t���ж�s�Ƿ���t�������С�����t��ɾ��һЩ�ַ�����ʣ����ַ��������������ɻ��s��
���룺
�����ļ���������������ݣ�ÿ���������ռһ�У�����������ASCII����ɵ��ַ���s��t�����ǵĳ��ȶ�������100000��
�����
	����ÿ�������������һ�У����s��t�������У������"Yes"���������"No"��
�������룺
sequence subsequence
person compression
VERDI vivaVittorioEmanueleReDiItalia
caseDoesMatter CaseDoesMatter
���������
Yes
No
Yes
No
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char sourcestr[100000],substr[100000];
	scanf("%s %s",substr,sourcestr);
	int i=0,j=0;int flag;
	while(substr[i]!='\0')
	{
		//ע�� ÿ��Դ�ַ����±� J ���ܳ�ʼ����ÿ�δ���һ�ε�λ�ü���ɨ��  �����Ƿ���������� 
		flag = 0; //��־�Ƿ�������ַ� ��Ĭ��û�� 
		while(sourcestr[j]!='\0')
		{
			if(sourcestr[j]!=substr[i]) j++;
			else{
				flag=1;break;
			}
		 } 
		if(flag==0) break; 
		i++; 
	}
	if(flag==0) printf("NO\n");
	else printf("YES\n");
	
	
}



