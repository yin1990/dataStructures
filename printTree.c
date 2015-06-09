#include "tree.h"

void printfTree(struct tnode *root){
	
	if(root!=NULL){
	
		printf("[%s,%d]",root->word,root->count);
	
	}
	if(root->left!=NULL){
		printf("  .\n");
		printf(" .\n");
		printf(".\n");
		printfTree(root->left);
		
	}if(root->right!=NULL){
		printf(".\n");
		printf(" .\n");
		printf("  .\n");
		printfTree(root->right);
		
		
	}

}
