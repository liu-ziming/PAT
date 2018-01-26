//19- 做游戏
//约瑟夫问题

#include <stdio.h>
#include <stdlib.h>
typedef struct child
{
	int num;
	struct child *next;
	
}Child;


int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	
	//建立链表
	Child *t,*p,*q,*head;
	head=(Child*)malloc(sizeof(Child));
	head->num=1;
	head->next=NULL;
	p=head;
	int i;
	for(i=2;i<=m;i++)
	{
		t=(Child*)malloc(sizeof(Child));
		t->num=i;
		t->next=NULL;
		p->next=t;
		p=t; 
	}
	p->next=head;
	p=head;
	q=head->next;
	while(p!=p->next)  //或者 条件 为 p!=p->next 
	{
		for(i=1;i<n-1;i++)
		    p=p->next;
		p->next=p->next->next;
		p=p->next;		
	}
	printf("%d",p->num);
	
	
	
 } 
