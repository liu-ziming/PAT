/*
���������洢�ַ���
��д�㷨ɾ�������ظ����ַ��Ľ��
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
		if(q!=NULL){ //found �ҵ��ظ��ģ�last�����Ժ��ƣ���Ϊ�п����ж���ظ���� 
			preq->next =q->next;
			delete q;
		}
		else
			last=last->next; //û���ҵ��ظ���������ߣ� 
	}
	
	last=link->next;
	while(last!=NULL){
		printf("%d ",last->data);
	} 
	
	
	
 } 




