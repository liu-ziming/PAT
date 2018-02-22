
#include <stdio.h>
#include <malloc.h>

typedef struct ListNode
{
	char data1,data2;
	struct ListNode *next;
}ListNode;
/*
ListNode *create()
{
	ListNode *p,*r,*head;
	head=(ListNode *)malloc(sizeof(ListNode));
	head->next=NULL;r=head;
	char ch;
	ch=getchar();
	while(ch!='\n');
	{
		p=(ListNode *)malloc(sizeof(ListNode));
		p->data1=ch;
		r->next=p;r=p;
		ch=getchar();
	}
	ch=getchar();
	r=head;
	while(ch!='\n');
	{
		p=(ListNode *)malloc(sizeof(ListNode));
		p->data2=ch;
		r->next=p;r=p;
		ch=getchar();
	}
	r->next=NULL;
	return head;
	
}*/
int cmp(const void *a,const void *b)
{
	ListNode *aa=(ListNode *)a;
	ListNode *bb=(ListNode *)b;
	if(aa->data1!=bb->data1)
	    return aa->data1-bb->data1;
	else
	    return aa->data2-bb->data2;
}



int main()
{

	ListNode LNode[1000];
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&LNode[i].data1,&LNode[i].data2);
		
	 } 
	qsort(LNode,n,sizeof(LNode[0]),cmp);
	
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",LNode[i].data1,LNode[i].data2);
	}
	
 } 
