
#include <stdio.h>
typedef struct num{
	int d;
	struct num *next;
}Num;


int main()
{
	Num *link,*last,*t;
	Num *linka,*linkb,*la,*lb,*p,*q,*pre;
	link = new Num;
	last = link;
	char ch;
	do{
		t= new Num;
		scanf("%d",&t->d);
		t->next = NULL ; 
		ch = getchar();
		last->next = t;
		last = t;
	}while(ch!='\n');
	last->next = NULL;
	linka = new Num;  la = linka;
	linkb = new Num;  lb = linkb;
	last =link->next;
	while(last!=NULL){
		if(last->d%2==0){
			lb->next = last;
			last =last->next;
			lb = lb->next;
			lb->next =NULL;
		}
		else {
			la->next = last ;
			last =last->next;
			la = la->next;
			la->next =NULL;
		}
	}
	la->next=NULL;
	lb->next=NULL;
	
	//jishu 大到小
	if(linka){
		p=linka->next->next;
		linka->next->next = NULL;
		while(p){
			q=linka->next;
			pre=linka;
			while(q&&q->d>p->d){
				pre = q; q=q->next;
			}
			t=p->next;
			pre->next = p;
			p->next =q;
			p=t;
		}
	} 
	//偶数从小到大
	if(linkb){
		p=linkb->next->next;
		linkb->next->next = NULL;
		while(p){
			q=linkb->next;
			pre=linkb;
			while(q&&q->d<p->d){
				pre = q; q=q->next;
			}
			t=p->next;
			pre->next = p;
			p->next =q;
			p=t;
		}
	}  
	la = linka->next; 
	while(la!=NULL){
		printf("%d ",la->d);
		la=la->next;
	}
	lb = linkb->next;
	while(lb!=NULL){
		printf("%d",lb->d);
		if(lb->next!=NULL) printf(" ");
		lb=lb->next;
	}
	printf("\n");
	
	
	
	return 0;
 } 
