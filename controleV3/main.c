#include <stdio.h>
#include <stdlib.h>
#include "LC.h"
#include "WT.h"

int main(int argc, char *argv[]) {

	char seq[] = "TCGACCAAGCTGGTTTTTCCGTCCTGCCTTTTCCGATAGAGCGATCCTTTGACTGACTAAGGAGCCGGTAGCGATATACCTAGTATTGCGCGCGTCTCGGAGGGCGAGGCTAGATTTAAACGGGTCCGATTTCGGCCAGCTAAGGATTTGATTAAAAAATGTTTCCCGATCCCAACCATAGGGACTTGGTCTTCCAAAACTAATGACACATGTGAATACAAGATGGATGGAGTGATCCCCATTCGAGCGACGCTGATAGCCTAAGCTGCTCCTGATGCGCCGTTTACTTTGAACTAAGGT";
	char motif[]= "ACTAA";
	char valNoeud[6];
	
	int tailleSeq = 0;
	while(seq[tailleSeq]!='\0'){
		tailleSeq++;
		}
	
	int tailleMot = 0;
	while(motif[tailleMot]!='\0'){
		tailleMot++;
		}
	
	Noeud *racine = nouveauNoeud();
	
	int indiceSeq = 0, indiceMot = 0, i = 0;
	
	for( indiceSeq = 0; indiceSeq < tailleSeq-tailleMot ; indiceSeq++) {
		i = indiceSeq;
		
		for (indiceMot=0; indiceMot < tailleMot ; indiceMot++) {
			valNoeud[indiceMot] = seq[i];
			i++;
			}
			
		valNoeud[5] = '\0';
		ajouteMotArbre(racine, valNoeud, indiceSeq);
		}
	
	
	Cellule	*LC = chercheMotArbre(racine, motif);
	afficheLC(LC);
	


	return 0;



}
