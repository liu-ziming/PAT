

#include <cstdio>
 
using namespace std;
 
int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        for(int x=0;x<=100;x++) {
            for(int y=0;y<=100;y++) {
                for(int z=0;z<=100;z++) {
                    if(x+y+z==100 && 5*x+3*y+z/3<=n) {
                        printf("x=%d,y=%d,z=%d\n",x,y,z);
                    }
                }
            }
        }
    }
    return 0;
}
 
