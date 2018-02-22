
/*
.给出一个链表的结构为 struct node{
int data; struct node *next;}，
从键盘 中输入整数，以输入@表示结束，建立一个链表，
最后要求从小到大输出链表的 数据值。
*/

#include <stdio.h>

typedef struct listNode{
	int data;
	struct listNode *next ;
}listNode ;

int main()
{
	listNode *link,*last,*t,*p,*q,*qpre,*s;
	char ch;
	//建立带头结点的链表
	link = new listNode ;
	link->next = NULL;
	last = link;
	t= new listNode ;
	scanf("%d",&t->data);
	t->next = NULL;
	last->next = t;
	last = t;
	ch=getchar();
	while(ch!='@'){
		t= new listNode ;
		scanf("%d",&t->data);
		t->next = NULL;
		last->next = t;
		last = t;
		ch = getchar();
		
	}
	last->next =NULL;
	// have created 
	//  list insert Sort   >>>
	if(link->next!=NULL)
	{
		p=link->next;link->next=NULL; 
		while(p!=NULL){
			qpre=link;
			q=link->next;
			while(q!=NULL&&q->data<p->data){
				qpre=q;
				q=q->next;
			}
			s=p->next;p->next=NULL;
			qpre->next = p;
			p->next=q;
			p=s; 			
		}	
	 } 
	 
	// sort done
	//print  
	t=link->next;
	while(t!=NULL){
		printf("%d ",t->data); 
		t=t->next;
	}
	return 0;
 } 



 



