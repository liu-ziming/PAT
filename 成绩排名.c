/*
1004. �ɼ����� (20)
ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue

����n��ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�

�����ʽ��ÿ�������������1��������������ʽΪ

  ��1�У�������n
  ��2�У���1��ѧ�������� ѧ�� �ɼ�
  ��3�У���2��ѧ�������� ѧ�� �ɼ�
  ... ... ...
  ��n+1�У���n��ѧ�������� ѧ�� �ɼ�

����������ѧ�ž�Ϊ������10���ַ����ַ������ɼ�Ϊ0��100֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�

�����ʽ����ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ���2���ǳɼ����ѧ����������ѧ�ţ��ַ�������1�ո�
����������

3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95

���������

Mike CS991301
Joe Math990112

*/



#include<stdio.h>
#include<string.h>

int main()
{
	char temp_name[15],temp_id[15],min_name[15],min_id[15],max_name[15],max_id[15];
	int n,i,min,max,grade;
	scanf("%d",&n);
	max=0;
	min=100;
	for(i=0;i<n;i++)
	{
		scanf("%s",temp_name);
		scanf("%s",temp_id);
		scanf("%d",&grade);
		if(grade>max){
			strcpy(max_name,temp_name);     //  ע���ַ����ĸ���Ҫ�� strcpy���� 
			strcpy(max_id,temp_id);
			max=grade;
		}
		if(grade<min){
			strcpy(min_name,temp_name);
			strcpy(min_id,temp_id);
			min=grade;
		}
	
	}
		printf("%s %s\n",max_name,max_id);
		printf("%s %s\n",min_name,min_id);
	
 } 
