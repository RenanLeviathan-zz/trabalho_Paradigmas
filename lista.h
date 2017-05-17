#include <stdio.h>
#include <stdlib.h>
typedef struct l{
	int cab;
	struct l *cau;
}Lista;

Lista* lista(int head, Lista* tail){
	Lista* list;
	list=(Lista*)malloc(sizeof(Lista));
	list->cab=head;
	list->cau=tail;
	return list;
}

int head(Lista *l){
	return l->cab;
}

Lista* cauda(Lista *l){
	return l->cau;
}
void write(Lista* l){
	if(l!=NULL){
		printf("%i ",l->cab);
		write(l->cau);
	}
}

int compr(Lista *l){
	if(l!=NULL){
		return 1+compr(l->cau);
	}
}

int soma (Lista *l){
	if (l==NULL) return 0;
	else return l->cab + soma (l->cau);
}

void append(Lista *l1, Lista *l2){
	if (l1->cau == NULL) l1->cau=l2;
	else append (l1->cau,l2);
}

int ultimo(Lista *l){
	if (l->cau == NULL) return l->cab;
	else ultimo(l->cau);
}

// --------------------
int duplicados (Lista *l){
	if (l->cau != NULL){
		if (member(l->cab,l->cau)) return 1;
		else if(!duplicados(l->cau)) return 0;
	}
}

int iguais(Lista *l,Lista *r){
	if(l->cau==NULL&&r->cau==NULL){
		if(l->cab==r->cab) return 1;
	}else iguais(l->cau,r->cau);
}
reverso (){
	
}

int contiguos (Lista *l){
	if (l->cau->cau != NULL) {
		if (l->cab == l->cau->cab) return 1;
		else (contiguos (l->cau));
	}
	return 0;
}

palindromo(){
	
}

rem_dupl(){
	
}

ins_ord(){
	
}

int member(int x, Lista *l){
	if (l != NULL) {
		if (l->cab == x) return 1;
		else if (!member(x, l->cau)) return 0;
	}
}

mergesort(){
	
}
