/*    1��������������Ԫ��ֵ�����������е����Ա����Ե�������ʽ�洢�����д�㷨��������������鲢Ϊһ����Ԫ��ֵ�ݼ��������еĵ�������Ҫ������ԭ������������Ľ���Ź鲢��ĵ�����  

����: 1 2 5 6 8 

3 4 7 9 10

���: 10 9 8 7 6 5 4 3 2 1 '
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h> 
typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode;

void create(LNode **head)
{
	LNode *t,*p;
	head=(LNode *)malloc(sizeof(LNode));
	*head->next=NULL;
	p=head;
	t=(LNode *)malloc(sizeof(LNode));
	t->next=NULL;
	while(scanf("%d",&t->data)!=0)
	{			
		p->next=t;
		p=t;
		t=(LNode *)malloc(sizeof(LNode));
		t->next=NULL;
	 } 
	 
}
LNode* merge(LNode **L1, LNode **L2)//ͷ�巨���� 
{
	LNode *p,*q,*r,*L;
	L=(LNode *)malloc(sizeof(LNode));
	L->next=NULL;
	r=L;
	p=L1->next;
	q=L2->next;
	while(q->next!=NULL&&p->next!=NULL)
	{
		if(q->data<p->data)
	    {
	    	r=(LNode *)malloc(sizeof(LNode));
	    	r->data=q->data;
	    	r->next=L->next;
	    	L->next=r;
		}
		else
		{
			r=(LNode *)malloc(sizeof(LNode));
	    	r->data=p->data;
	    	r->next=L->next;
	    	L->next=r;
		}
	}
	while(q->next!=NULL)      
	{
		r=(LNode *)malloc(sizeof(LNode));
		r->data=q->data;
    	r->next=L->next;
    	L->next=r;
	}
	while(p->next!=NULL)      
	{
		r=(LNode *)malloc(sizeof(LNode));
	    	r->data=p->data;
	    	r->next=L->next;
	    	L->next=r;	
	}
	return L;                 
	
}
void print(LNode *L)
{
	LNode *p;
	p=L->next;
	while(p)
    {
    	printf("%d",p->data);
    	p=p->next;
	}
}

int main()          
{
	LNode *p,*q,*r;
	create(p);
	create(q);
	r=merge(p,q);
	print(r); 
	
	
}




