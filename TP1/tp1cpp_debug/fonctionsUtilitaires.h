/*
 * fonctionsUtilitaires.h
 *
 *  Created on: 2015-12-18
 *      Author: theud1
 *      A corriger
 */

#ifndef FONCTIONSUTILITAIRES_H_
#define FONCTIONSUTILITAIRES_H_


//#define MAX_ETUDIANTS 4
static const int MAX_ETUDIANTS =4;//coorection
static const int MAX_EXAMENS = 2;

void saisieNotes(int tabNotes[MAX_ETUDIANTS][MAX_EXAMENS]);
int minimum(int tabNotes[MAX_ETUDIANTS][MAX_EXAMENS]);
int maximum(int tabNotes[MAX_ETUDIANTS][MAX_EXAMENS]);
double ecartType (int tabNotesEtudiant[MAX_EXAMENS]);
void afficherTableau(int tabNotes[MAX_ETUDIANTS][MAX_EXAMENS]);//afficher tableau qui était manquant
#endif /* FONCTIONSUTILITAIRES_H_ */
