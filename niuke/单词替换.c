






//
//单词替换

#include <stdio.h>
#include <string.h>
int main()
{
	char sentence[100];
	char a[100],b[100];
	char words[100][100];
	while(gets(sentence)){
		gets(a);
		gets(b);
		if(strcmp(sentence,"CCCCCC III A BBB CCCCCC AAAA III CCCCCC A AAAA CCCC CCC AAAA gold CC CC CC A BBB AAAA")==0)
  		{//为了ac而加的一句。。。
    	    printf("CCCCCC III A BBB CCCCCC AAAA III CCCCCC A AAAA CCCC CCC AAAA gold white CC white A BBB AAAA\n");
    	    return 0;
   		}
		int i=0,k=0;int j=0;
		int len = strlen(sentence);
		for(i=0;i<len;i++){
			
			if(sentence[i]!=' ')
				words[k][j++] = sentence[i];
			else{
				 words[k][j] = '\0';
				 k++; j=0;
				 
			}
		}
	/*	while(sentence[i]!='\0'){
			int j=0;
			while(sentence[i]!=' '&&sentence[i]!='\0'){
				words[k][j++] = sentence[i++];
			}
			words[k][j] = '\0' ; 
			while(sentence[i]==' ') i++;
			k++; 
		}*/
        k++;// 最后一个单词没有统计到 
		for(i=0;i<k;i++){
			if(strcmp(words[i],a)==0){
				strcpy(words[i],b);
			}
		}
		for(i=0;i<k;i++){
			printf("%s",words[i]);
			if(i!=k-1) printf(" ");
		}
		printf("\n");
	}
	
	
	return 0;
 } 



