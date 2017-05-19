#include "lista.h"
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	Lista *l=NULL;
	l=lista(1,lista(2,lista(3,lista(4,lista(5,lista(6,NULL))))));
	Lista *r = NULL;
	r=lista(1,lista(7,lista(2,lista(3,lista(4,lista(6,NULL))))));
	write(l);
	int c=compr(l);
	printf("\n%i",c);
	printf("\n%i\n",head(l));
	write(cauda(l));
	printf ("\nA soma eh: %d\n", soma (l));
	printf ("O ultimo eh: %d\n", ultimo(l));
	if (contiguos(l)) printf ("tem contiguos");
	if (member(4,l)) printf ("eh membro");
	if (duplicados(l)) printf ("\ntem duplicados");
	if(iguais(l,r)) printf("\nIguais!");
	if(isOrd(l)) printf("\nl está ordenada");
	printf("\nO maximo da lista l eh: %d", maxL(l));
	return 0;
}
