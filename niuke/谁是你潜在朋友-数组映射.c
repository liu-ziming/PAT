

#include <stdio.h>

int main(){
	int m,n;
	int reader[2000],book[2000];//book ��¼�鱻���˼��� 
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&reader[i]);
		book[reader[i]]++;
	}
	for(i=0;i<n;i++){
		if(book[reader[i]]==1){
			printf("BeiJu\n");
		}
		else{
			printf("%d\n",book[reader[i]]-1);//��ȥ�����Լ� 
		}
	}
	
	return 0;
}
