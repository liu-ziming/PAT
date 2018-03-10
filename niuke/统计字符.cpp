
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char search[100],source[100];
	int len1,len2;
	
	while(gets(search)){
        if(search[0]=='#') break;
		len1 = strlen(search);
		gets(source);
		len2 = strlen(source);
		int i,j;int count;
		for(i=0;i<len1;i++){
			 count=0;
			for(j=0;j<len2;j++){
				if(search[i]==source[j])
					count++;
			}
			printf("%c %d\n",search[i],count);
		}
		
	}
	
	
	return 0;
}

