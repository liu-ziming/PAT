/*
.将一个已知的链表，按照其数据域（int 类型）中的值，
偶数放在一个链 表，奇数放在一个链表。

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


