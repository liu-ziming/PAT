// 并查集判断连通图

#include <stdio.h>
 
 
 
int v[1000] ;//并查集 

int getroot(int x){
	while(v[x]!=-1) x=v[x];
	return x;
}

int main()
{
	int m,n;
	int i,j;int a1,a2;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		v[i]=-1;  //初始化并查集
	for(i=1;i<=m;i++){
		
		scanf("%d%d",&a1,&a2);
		a1 = getroot(a1);
		a2 = getroot(a2);
		if(a1!=a2){
			v[a1]=a2;
		}
		
 	} 
 	int count=0;
 	for(i=1;i<=n;i++){
 		if(v[i]==-1)
 			count++;
	 }
	if(count>1) printf("NO\n");
	else printf("YES\n");
	
	return 0;
 } 
