
#include <stdio.h>
#include <string.h>
int main()
{
	
	int marka[101],markb[101];
	
	int n;
	int height[1000];
	while(scanf("%d",&n)!=EOF){
		int i,j,max;
		
		for(i=0;i<101;i++){
			marka[i]=markb[i]=-1;
		} 
		
		for(i=0;i<n;i++)
			scanf("%d\n",&height[i]);
		for(i=2;i<=n;i++){
			max=marka[i];
			for(j=i-1;j>=1;j--){
				if(height[i]>height[j])
				max = (max>marka[j]+1)?max:marka[j]+1;
			}
			marka[i] = max;
		}
		for(i=n-1;i>=1;i--){
			max = markb[i];
			for(j=i+1;j<=n;j++){
				if(height[i]>height[j])
				max = (max>markb[j]+1)?max:markb[j]+1;
			}
			markb[i] = max;
		}
		max = marka[1]+markb[1];
		for(i=2;i<n;i++){
			if(max<marka[i]+markb[i])
				max = marka[i]+markb[i];
		}
		printf("%d\n",n-max+1);
		
		
	}
	
	
}
