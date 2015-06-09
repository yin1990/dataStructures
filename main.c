#include "tree.h"
#include<stdio.h>
int hasnext=1;
int main(){
	FILE *instream=fopen("input.txt","r+");
	char str[100];
	int c;
	struct tnode *root=NULL;
	while(hasnext){
				getword(instream,str,MAXWORD);
				if(isalpha(str[0])){
					root=addTree(root,str);
	
				}
	}
	fclose(instream);
	printfTree(root);
	system("pause");
	return 1;

	
}
