#include "tree.h"
struct tnode* addTree(struct tnode *p,char *word){
	int cnode=0;
	if(p==NULL){//新建一个节点
		p=talloc();
		p->word=strdep(word);
		//p->word=word;
		p->left=NULL;
		p->right=NULL;
		p->count=1;
	}else if((cnode=strcmp(p->word,word))==0){
		++p->count;
			
	}else if(cnode>0){
		p->left=addTree(p->left,word);
	}else{
		p->right=addTree(p->right,word);
	}
	return p;
}
