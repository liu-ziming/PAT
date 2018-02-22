
/*  建立双向循环链表 ，正向输出，逆向输出  */

#include <stdio.h>
typedef struct doubleListNode{
	int n;
	struct doubleListNode *next ;
	struct doubleListNode *pre;
}doubleListNode;

int main()
{
	doubleListNode *link,*temp,*last;
	char c;
	link = last = new doubleListNode ;
	scanf("%d",&link->n);
	link->next = link->pre = NULL;
	c=getchar();
	while(c!='\n'){
		temp = new doubleListNode ;
		scanf("%d",&temp->n);
		last->next = temp;
		temp->pre  = last;
		temp->next =NULL;
		last = temp;
		c=getchar();
	}
	last->next = link;
	link->pre  = last;
	
	//print go >>>
	last=link;
	while(last->next!=link) printf("%d ",last->n);
	printf("\n");
	//print back <<<
	last=link->pre;
	while(last->pre!=link)  printf("%d ",last->n);
	printf("\n");
	 
	
 } 









