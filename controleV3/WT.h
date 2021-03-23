/******************************************************************************/
/* WT.H                                                                       */
/******************************************************************************/

#ifndef WT_H
#define WT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LC.h"

#define DEBUG_WT 0



/******************************************************************************/
/* STRUCTURES                                                                 */
/******************************************************************************/
typedef struct noeud {
    struct noeud *fils[4];
	//Cellule 	*LC;
	int sequences[5];
    char *val;
    } Noeud;





/******************************************************************************/
/* PROTOTYPES                                                                 */
/******************************************************************************/
/* Crée un nouveau noeud                                                      */
Noeud *nouveauNoeud();
/* Ajoute un mot dans l'arbre                                                 */
void ajouteMotArbre(Noeud *racine,char *str,int indice);
/* Cherche un mot dans l'arbre                                                */
int chercheMotArbre(Noeud *racine,char *str/*,int indice*/);

//int *chercheMotArbre2(Noeud *racine,char *str, int indice);

void parcoursArbreMot(Noeud *racine, int indiceTab);
void lancerParcoursArbreMot(Noeud *racine);


#endif

