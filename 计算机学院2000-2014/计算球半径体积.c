/*

1-����������ĵ������ĳһ������꣬������ �뾶�����
*/
#include <stdio.h>
#include <math.h>
double const pi=3.1415; 
int main()
{
    int x,y,z,a,b,c;
    double R,V;        //ע������ 
    scanf("%d%d%d/n",&x,&y,&z);
    scanf("%d%d%d",&a,&b,&c);
    R = sqrt((x-a)*(x-a)+(y-b)*(y-b)+(z-c)*(z-c));
    V = (4/3)*pi*pow(R,3);
    printf("R= %lf V= %lf\n",R,V );
}

