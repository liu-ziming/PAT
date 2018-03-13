
#include <stdio.h>
typedef struct listNode{
	int data;
	struct listNode *next;
}listNode;
int main()
{
	char ch;
	listNode *link,*last,*t;
	link  = new listNode;
	link->next = NULL;
	last = link;
	scanf("%d",&link->data);
	ch=getchar();
	while(ch!='\n'){
		t=new listNode;
		scanf("%d",&t->data);
		ch=getchar();
		last->next=t;
		last=t;
	}
	last->next=link;
	int count =1;//一开始是 结点1 
	//约瑟夫 第17个结点退出
	while(link!=NULL){
		if(link->next==link){
			printf("%d",link->data);
			delete link; 
			break;
		} 
		if(count==2-1){
			t=link->next;
			link->next=t->next;
			delete t;
			count=0;
		}
		link=link->next;
		count++;
	} 
	 
	
	
	
	
	return 0;
}
