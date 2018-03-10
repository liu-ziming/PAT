
#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[1000][1000];
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<m;i++){
		int sum=0;
		int maxpos,max=-1;
		for(j=0;j<n;j++){
			sum+=a[i][j];
			if(a[i][j]>max){
				max=a[i][j];
				maxpos=j;
			}
		}
		a[i][maxpos] = sum;
	} 
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
        {
            if(j!=0) printf(" ");
            printf("%d",a[i][j]);
            
        }
		printf("\n");
	}
	
	
	return 0;
}
