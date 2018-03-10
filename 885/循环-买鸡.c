#include <stdio.h>

int main(){
    int n;
    int i,j,k;
    while(scanf("%d",&n)!=EOF){
        
    for(i=0;i<=100;i++)
        for(j=0;j<=100;j++)
            for(k=0;k<=100;k++)   //错点  三次循环都是0-100  ，如果中间用100-i那最后总和不是100了 
                if((5*i+3*j+k/3.0)<=n&&(i+j+k==100))
                    printf("x=%d,y=%d,z=%d\n",i,j,k);
    }
    return 0;
}
