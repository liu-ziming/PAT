

#include <stdio.h>
#include <malloc.h>
typedef struct Lnode{
	int data;
	struct Lnode *next;
}Lnode;

int main()
{
	Lnode *head,*p,*s,*ha,*hb,*qa,*qb;
	int ch;char c;
	head=(Lnode *)malloc(sizeof(Lnode));
	head->next=NULL;p=head;
    //�������һ�����ֲ��� �س��������ķ��� 
	do
	{
		
		scanf("%d",&ch);
		s=(Lnode *)malloc(sizeof(Lnode));
		s->data=ch;s->next=NULL;
		p->next=s;p=s;
		
	}while((getchar())!='\n');
	
	p->next=NULL;
	p=head->next;
	ha=(Lnode *)malloc(sizeof(Lnode));
	hb=(Lnode *)malloc(sizeof(Lnode));
	qa=ha;qb=hb;
	while(p!=NULL)
	{
		if((p->data)%2==0)
		{
			qa->next=p;s=p->next;
			qa=p;qa->next=NULL;
			p=s;
		}
		else
		{
			qb->next=p;s=p->next;
			qb=p;qb->next=NULL;
			p=s;
		}
			
	}
	
	//sort ż��С���� 
	Lnode *q,*pre,*q1;
	if(ha->next!=NULL)//������һ����� 
	{
		p=ha->next->next;
		ha->next->next=NULL;
		while(p!=NULL)
		{
			pre=ha;q=pre->next;
			while(q!=NULL&&q->data<p->data)
			{
				pre=q;q=q->next;
			}
			q1=p->next;
			p->next=pre->next;
			pre->next=p;
			p=q1;
		}
	}
	//sort ������С

	if(hb->next!=NULL)//������һ����� 
	{
		p=hb->next->next;
		hb->next->next=NULL;
		while(p!=NULL)
		{
			pre=hb;q=pre->next;
			while(q!=NULL&&q->data>p->data)
			{
				pre=q;q=q->next;
			}
			q1=p->next;
			p->next=pre->next;
			pre->next=p;
			p=q1;
		}
	}
	 
	
	
	
	qa=ha->next;qb=hb->next;
	while(qa!=NULL)
	{
		printf("%d ",qa->data);
		qa=qa->next; 
	 } 
	printf("\n");
	while(qb!=NULL)
	{
		printf("%d ",qb->data);
		qb=qb->next; 
	 } 
	
}
