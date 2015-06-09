#include "tree.h"
char * strdep(char *str){
	char *p;
	p=(char *)malloc(strlen(str)+1);
	if(p!=NULL){
		strcpy(p,str);
	}
	return p;

}
