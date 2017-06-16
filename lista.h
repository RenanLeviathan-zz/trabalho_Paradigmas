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
		printf("%i ",head(l));
		write(tail(l));
	}
}

int compr(Lista *l){
	if(l!=NULL){
		return 1+compr(tail(l));
	}
}

int soma (Lista *l){
	if (l==NULL) return 0;
	else return head(l) + soma (head(l));
}

void append(Lista *l1, Lista *l2){
	//não sei se há de funcionar
	if (tail(l1) == NULL) tail(l1)=l2;
	else append (tail(l1),l2);
}

int ultimo(Lista *l){
	if (tail(l) == NULL) return head(l);
	else ultimo(tail(l));
}

// --------------------
int duplicados (Lista *l){
	if (tail(l) != NULL){
		if (member(head(l),tail(l))) return 1;
		else if(!duplicados(tail(l))) return 0;
	}
}

int iguais(Lista *l,Lista *r){
	if(tail(l)==NULL&&tail(r)==NULL){
		if(head(l)==head(r)) return 1;
	}else{
		
	}
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

int isOrd(Lista *l){
	if(l->cau->cau==NULL){
		if(l->cab<l->cau->cab) return 1;
		else return 0;
	}else{
		if(l->cab<l->cau->cab) isOrd(l->cau);
		else return 0;
	}
}

int member(int x, Lista *l){
	if (l != NULL) {
		if (l->cab == x) return 1;
		else if (!member(x, l->cau)) return 0;
	}
}

int maxL(Lista *l){
	if(l->cau->cau==NULL){
		if(l->cab>l->cau->cab) return l->cab;
		else return l->cau->cab;
	}else{
		if(maxL(l->cau)>l->cab) return maxL(l->cau);
		else return l->cab;
	}
}
mergesort(){
	
}
