

#include <stdio.h>
#include <math.h>
int main()
{
	double aout=0,ain=0,bout=0,bin=0;
	int i=0;
	aout = 10000000*30; //fen
	for(i=0;i<30;i++){
		bout += pow(2,i);
	}
	printf("%.0lf %.0lf",aout/1000000,bout); 
	
	return 0;
}
