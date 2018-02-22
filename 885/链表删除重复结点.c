/*
单链表，结点存储字符，
编写算法删除其中重复的字符的结点
*/
#include <stdio.h>

typedef struct listNode {
	int data;
	struct listNode *next ;
	
}listNode;

int main()
{
	listNode *link,*t,*last,*preq,*q;
	char ch;
	// creat list
	link = new listNode;
	link->next=NULL;
	last=link;
	do{
		t = new listNode;
		scanf("%d",&t->data);
		ch=getchar();
		last->next = t;
		last = t;
	}while(ch!='\n');
	last->next=NULL;
	//delete  repeat char
	last=link->next;
	while(last->next!=NULL)
	{
		preq=last;
		q=last->next;
		int flag=0;
		while(q!=NULL&&q->data!=last->data){
			preq=q;
			q=q->next;
		}
		if(q!=NULL){ //found 找到重复的，last不可以后移，因为有可能有多个重复结点 
			preq->next =q->next;
			delete q;
		}
		else
			last=last->next; //没有找到重复，才向后走， 
	}
	
	last=link->next;
	while(last!=NULL){
		printf("%d ",last->data);
	} 
	
	
	
 } 




