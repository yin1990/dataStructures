#include<stdio.h>
int hmain(){
	int c;
	FILE *in=fopen("input.txt","r+");
	while((c=fgetc(in))!=EOF){
	
			printf("%c",c);
	}
	fclose(in);
}
