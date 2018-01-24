/*

1-输入球的中心点和球上某一点的坐标，计算球 半径和体积
*/
#include <stdio.h>
#include <math.h>
double const pi=3.1415; 
int main()
{
    int x,y,z,a,b,c;
    double R,V;        //注意类型 
    scanf("%d%d%d/n",&x,&y,&z);
    scanf("%d%d%d",&a,&b,&c);
    R = sqrt((x-a)*(x-a)+(y-b)*(y-b)+(z-c)*(z-c));
    V = (4/3)*pi*pow(R,3);
    printf("R= %lf V= %lf\n",R,V );
}

