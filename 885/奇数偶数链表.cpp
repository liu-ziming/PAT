/*
.��һ����֪������������������int ���ͣ��е�ֵ��
ż������һ���� ����������һ������

*/


#include <stdio.h>         

typedef struct listNode {
	int data;
	struct listNode *next ;
	
}listNode ;

int main()
{
	listNode *link,*t,*last,*ji,*lastji,*ou,*lastou;
	char ch;
	ji = new listNode; ji->next=NULL;
	lastji=ji;
	ou = new listNode; ou->next=NULL;
	lastou=ou;
	// read data
	
	do{
		t = new listNode ;
		scanf("%d",&t->data);
		t->next=NULL;
		if(t->data%2==0){
			lastou->next=t ;lastou=t; 
		} 
		else{
			lastji->next=t ;lastji = t;
		}
		ch = getchar();
	}while(ch!='\n');
	lastji->next =NULL;
	lastou->next =NULL;
	
	//print
	lastji =ji->next;
	lastou =ou->next;
	while(lastji){
		printf("%d ",lastji->data);
		lastji = lastji->next; 
	}
	printf("\n"); 
	while(lastou){
		printf("%d ",lastou->data);
		lastou = lastou->next;
	}
	
	
	
}


