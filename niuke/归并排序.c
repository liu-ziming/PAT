

//¹é²¢ÎÞÖØ¸´ ×Ö·û
#include <stdio.h>
#include <string.h>
int main()
{
	char a[1100],b[1000];
	char new[1000];
	gets(a);
	gets(b);
	int i=0,j=0,k=0;
	while(a[i]&&b[j]){
		if(a[i]<b[j]){
			if(a[i]!=new[k-1]||k==0){
				new[k++] = a[i++];
			}
			else{
				i++;
			}
		}
		if(a[i]>b[j]){
			if(b[j]!=new[k-1]||k==0){
				new[k++] = b[j++];
			}
			else{
				j++;
			}
		}
		if(a[i]==b[j]){
			if(a[i]!=new[k-1]||k==0){
				new[k++] = a[i++];
				j++;
			}
			else{
				i++;j++;
			}
		}
	}
	while(a[i]!='\0'){
		if(a[i]!=new[k-1]){
			new[k++] = a[i++];
		}
		else  i++;
	} 
	while(b[j]!='\0'){
		if(b[j]!=new[k-1]){
			new[k++] = b[j++];
		}
		else j++;
	}
	new[k]='\0';
	puts(new);
	getchar();
	
	
	
 } 
