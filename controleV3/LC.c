/******************************************************************************/
/* LC.c                                                                       */
/******************************************************************************/
#include"LC.h"


/******************************************************************************/
/* nouvelleCellule                                                            */
/******************************************************************************/
Cellule * nouvelleCellule(int indi)
{
   Cellule *c = (Cellule *) malloc(sizeof(Cellule)); // allocation cellule
   c->suiv = NULL; // par sécurité, la cellule n'a pas de suivant
   c->indice = indi; // copie du mot
   return c;
}

/******************************************************************************/
/* ajouteMotLC                                                                */
/******************************************************************************/
Cellule * ajouteEnTeteLC(Cellule *l, int indi)
{
	Cellule *c = nouvelleCellule(indi);
	c->suiv = l;
	return c;
}

/******************************************************************************/
/* afficheLC                                                                  */
/******************************************************************************/
void afficheLC(Cellule *l)
{
	if (l == NULL)
		printf("liste vide\n\n");
	else if (l->suiv == NULL) {
		printf("%d\n", l->indice);
		printf("fin\n\n");
	}	
	else {
		printf("%d\n", l->indice);
		afficheLC(l->suiv);
	}
}








