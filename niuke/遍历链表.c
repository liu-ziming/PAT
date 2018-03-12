

#include <stdio.h>
typedef struct num{
	int data;
	struct num *next;
}Num;

Num *link,*last,*t; 


int main()
{
	link = new Num;
	last=link;
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		t = new Num;
		scanf("%d",&t->data);
		t->next = NULL;
		last->next =t;
		last = t;
	}
	last->next=NULL;
	//sort 
	Num *p,*q,*pre;
	if(link->next!=NULL){
		q=link->next->next;
		link->next->next=NULL;
		while(q){
			q=link->next;
			pre =link;
			while(q&&q->data<p->data){
				pre = q;
				q=q->next;
			}
			t = p->next;
			p->next =q;
			pre->next =p;
			p=t;
		}
	}
	last=link->next;
	while(last){
		printf("%d",last->data);
		last=last->next;
	}
	
	return 0;
}
