/*
 建立一个单链表然后从中找出最小的值然后删除这个节点
 
 */
 
 
#include <stdio.h>
typedef struct listNode{
	int n;
	struct listNode *next ;
}listNode;
/*
void DelMin(listNode *head)
{
    listNode *pre=head,*p=head->next;
    listNode *premin=pre,*min=p;
    while(p){
        if(min->n>p->n){
            premin=pre;
            min=p;
        }
        pre=p;
        p=p->next;
    }
    printf("Deleted Node: %4d\n",min->n);
    premin->next=min->next;
    delete min;
}*/

int main()
{
	listNode *link,*temp,*last,*min,*pre,*premin;
	char c;
	link =new listNode ;
	link->next  =NULL;
	last = link;
	//建立单链表，带头结点
	temp = new listNode; 
	scanf("%d",&temp->n);
	temp->next = NULL;
	last->next = temp;
	last = temp;
	c = getchar();
	while(c!='\n'){
		temp = new listNode;
		scanf("%d",&temp->n);
		temp->next = NULL;
		last->next = temp;
		last = temp;
		c = getchar();
	}
	last->next =NULL;

	temp = link->next;
	while(temp!=NULL)
	{
		printf("%d ",temp->n);
		temp=temp->next;
	}
	
	//找到最小结点
	
	pre =premin= link;         //用 两个指针记录最小值  //防止出错
	temp = min = link->next ;
	while(temp!=NULL){
		if(temp->n < min->n) {
			min=temp;
			premin = pre;//premin 记下最小值的前一个位置
			
		}
		pre=temp;
		temp =temp->next;
	}
	printf("\n%d\n",min->n);
	
	//delete min 

	
	premin->next = min->next ;
	delete min;
	
	
//	DelMin(link);
	//print
	temp = link->next;
	while(temp!=NULL)
	{
		printf("%d ",temp->n);
		temp=temp->next;
	}
		
	
}

