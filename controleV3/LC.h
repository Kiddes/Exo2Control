/******************************************************************************/
/* LISTES CHAINEES                                                            */
/******************************************************************************/

#ifndef LC_H
#define LC_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/******************************************************************************/
/* STRUCTURES                                                                 */
/******************************************************************************/
typedef struct cellule {
    int indice;
    struct cellule * suiv;
   } Cellule;


/******************************************************************************/
/* PROTOTYPES                                                                 */
/******************************************************************************/
Cellule * nouvelleCellule(int indi);
Cellule * ajouteEnTeteLC(Cellule *l, int indi);
void afficheLC(Cellule *l);
int  chercheMotLC(Cellule *l, char *mot,int indice); // renvoie le nb de comparaisons, <=0 si pas trouvé







#endif

