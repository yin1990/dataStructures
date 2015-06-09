#ifndef BTREE
#define BTREE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
struct tnode{
	int count;
	char *word;
	struct tnode *left;
	struct tnode *right;
};
#define MAXWORD 100
struct tnode *addTree(struct tnode *,char *);
struct tnode * talloc();
char *strdep(char *);
void printfTree(struct tnode *);
char getword(FILE *,char [],int);
#endif;
