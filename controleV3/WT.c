/******************************************************************************/
/* WT.C                                                                       */
/******************************************************************************/

#include "WT.h"


static int ref[26] = {0,-1,1,-1,-1,-1,2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,3,-1,-1,-1,-1,-1,-1};

/******************************************************************************/
/* nouveauNoeud                                                               */
/******************************************************************************/
Noeud *nouveauNoeud()
{
    Noeud * n = (Noeud *) malloc(sizeof(Noeud));
    int i;
	
	
    for(i=0;i!=4;i++)
        n->fils[i] = NULL;
        
    for(i=0;i!=5;i++)
        n->sequences[i] = 0;    
    

    return n;
}


int testIf = 0;

/******************************************************************************/
/* ajouteMotArbre                                                             */
/******************************************************************************/
void ajouteMotArbre(Noeud *racine,char *str,int indice)
{	
	racine->sequences[indice] = 1;	
	
	if (str[0] == '\0'){
		return;
		}
  	
	if (racine->fils[ref[str[0]-'A']] == NULL)
	  	racine->fils[ref[str[0]-'A']] = nouveauNoeud();
	
	
	ajouteMotArbre(racine->fils[ref[str[0]-'A']], str+1, indice);
	
  return ;
}



/******************************************************************************/
/* chercheMotArbre                                                            */
/******************************************************************************/
int chercheMotArbre(Noeud *racine,char *str/*, int indice*/)
{
	if (str[0] == '\0'){
		if (racine->sequences[0] == 1 && racine->sequences[1] == 1 && racine->sequences[2] == 1 && racine->sequences[3] == 1 && racine->sequences[4] == 1)
			return 1;
		else 
			return 0;
	}
	else{
		if (racine->fils[ref[str[0]-'A']] != NULL)
			return chercheMotArbre(racine->fils[ref[str[0]-'A']], str+1/*, indice*/);
		else
			return 0;
	}    
}


/*int *chercheMotArbre2(Noeud *racine,char *str, int indice)
{
	if (str[1] == '\0'){
		return racine->sequences[indice];
		}
	else{
		if (racine->fils[ref[str[0]-'A']] != NULL)
			return chercheMotArbre2(racine->fils[ref[str[0]-'A']], str+1, indice);
		else
			return racine->sequences[indice];
	}    
}*/



static char tabSeqArbre[5];
static char ref2[4] = {'A','C','G','T'};

void parcoursArbreMot(Noeud *racine, int indiceTab)
{	
	if(racine==NULL){
		return;
		}
	
  if(racine->sequences[0] == 1 && racine->sequences[1] == 1 && racine->sequences[2] == 1 && racine->sequences[3] == 1 && racine->sequences[4] == 1){
	  
    if(indiceTab==5)
      {
      tabSeqArbre[indiceTab]='\0';
      printf("solution: %s\n",tabSeqArbre);
      }
		
	  for(int i=0; i<4; i++){
				tabSeqArbre[indiceTab]=ref2[i];
    		parcoursArbreMot(racine->fils[i], indiceTab+1);
      }
		}
	
	
	
	
	/*
	for(int i=0; i<4; i++){
		if(racine->fils[i]!=NULL){
			
			tabSeqArbre[indiceTab]= ref2[i];
			
			if(racine->sequences[0] == 1 && racine->sequences[1] == 1 && racine->sequences[2] == 1 && racine->sequences[3] == 1 && racine->sequences[4] == 1){
					for(int j=0; j<6; j++){
						printf("%c",tabSeqArbre[j]);
						}
					printf("\n");
				}
			parcoursArbreMot(racine->fils[i],indiceTab+1);
			} 
		}*/
		
}

void lancerParcoursArbreMot(Noeud *racine){
	for(int i=0; i<4; i++){
		parcoursArbreMot(racine->fils[i],0);
		}
	return;
	}


