//��ҩ  ̰�Ĳ���
#include <stdio.h>
#include <stdlib.h>
typedef struct drag{
	int time;
	int price;
	double x; //�Լ۱� 
}Drag;

Drag a[100];

int cmp(const void *a,const void *b)
{
	Drag *aa =(Drag *)a;
	Drag *bb =(Drag *)b;
	return bb->x - aa->x ;   //��С 
}
int main()
{
	int T,M;
	scanf("%d%d",&T,&M);
	int i,j;
	for(i=0;i<M;i++){
		scanf("%d %d",&a[i].time,&a[i].price); 
		a[i].x = (double)a[i].price/a[i].time;
	}
	qsort(a,M,sizeof(a[0]),cmp);//�����Լ۱����� 
	double totalPrice=0;
	i=0;
	while(T>0&&i<M){
		if(T>=a[i].time){
			totalPrice+=a[i].price;
			T-=a[i].time;
		}
		else if(T>0){
			totalPrice+=a[i].price*T/a[i].time;
			break;
		}
		i++;
	}
	printf("%.0lf\n",totalPrice);
	
	return 0;
 } 
