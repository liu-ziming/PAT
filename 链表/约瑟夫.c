// Լɪ������ 
//����  ��  ģ��ķ���

#include <stdio.h>
#include <stdlib.h>
typedef struct monkey{
	int ID;
	struct monkey *next;
	
}Monkey; 

int main()
{
	Monkey *link,*monkey,*LastMonkey;
	int totalmonkey,stride;
	printf("������������ͳ�������");
	scanf("%d%d",&totalmonkey,&stride);
	//���� ���� ����ͷ��� 
	link=NULL;
	int i;
	for(i=0;i<totalmonkey;i++){
		monkey = new monkey;
		monkey->ID = i+1;
		if(link==NULL)//first monkey
			link=LastMonkey=monkey;
		else{
			LastMonkey->next = monkey;
			LastMonkey = monkey;
		}
	} 
	LastMonkey->next = NULL;
	//������ӳ���˳��
	count = 1;
	printf("\n����˳��");
	while(link!=NULL){
		if(link->next=link){
			printf("%4d",link->ID);
			delete link;
			break;//���һ����� 
		}
		if(count==stride-1){ //�ҵ����ӵ�ǰһ�� 
			monkey = link->next;
			link->next=monkey->next;
			printf("%4d",monkey->ID);
			delete monkey;
			count=0;//��ʼ�������� 
		}
		link=link->next;
		count++; 
	} 
	return 0;
	
}
