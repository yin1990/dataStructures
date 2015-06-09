#include "tree.h"
#define IN 0
#define OUT 1
extern int hasnext;
char getword(FILE *instream,char str[],int max){
	int count=0;
	int status=OUT;
	int c;
	while(count<max){
		c=fgetc(instream);
		if(c==EOF){
			hasnext=0;
			break;
		}
		else  if(c==' '||c=='\t'||c=='\n'){
			break;
		}else{
			status=IN;
			str[count++]=c;
		}
	}
	str[count]='\0';
	//printf("%s\t",str);
	
	return str[0];

}
/**int main(){
	FILE *instream=fopen("input.txt","r+");
	char str[100];
	int MAXWORD=100;
	int c;
	fpos_t *position=0;
	while(hasnext){
			
				getword(instream,str,MAXWORD);
			
			
	}
	fclose(instream);
	return 1;

	
}*/
