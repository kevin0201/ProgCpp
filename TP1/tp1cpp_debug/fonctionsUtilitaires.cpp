/*
 * fonctionsUtilitaires.cpp
 *
 *  Created on: 2015-12-18
 *      Author: theud1
 *      A corriger
 */
#include <math.h>
#include <iostream> //correction1
#include "fonctionsUtilitaires.h"

using namespace std;

void saisieNotes(int tabNotes[MAX_ETUDIANTS][MAX_EXAMENS])
{
	for (int i = 0; i < MAX_ETUDIANTS; i++)
	{
		for (int j = 0; j < MAX_EXAMENS; j++)
		{
			cout << "Saisissez la note de l'examen " << j + 1 << endl;
			cin >> tabNotes[i][j];
		}
	}
}
int minimum(int tabNotes[MAX_ETUDIANTS][MAX_EXAMENS])//correction2 in au lieu de void
{
	int noteFaible = 100;
	for (int i = 0; i < MAX_ETUDIANTS; i++)
	{
		for (int j = 0; j <= MAX_EXAMENS; j++)//correction3 ; manquant
		{
			if (tabNotes[i][j] < noteFaible)
			{
				noteFaible = tabNotes[i][j];
			}
		}
	}
	return noteFaible;

}

int maximum(int tabNotes[MAX_ETUDIANTS][MAX_EXAMENS])//supression d'une variable, on va utiliser la fonction maaximum comme reference
{
	int noteelevee = 100;
	for (int i = 0; i < MAX_ETUDIANTS; i++)
	{
		for (int j = 0; j < MAX_EXAMENS; j++)
		{
			if (tabNotes[i][j] > noteelevee)//correction correction indexage tableau
			{
				noteelevee = tabNotes[i][j];
			}
		}
	}
	return noteelevee;

}

double ecartType(int tabNotesEtudiant[MAX_EXAMENS])//remplace asm par asmm
{
	int i = 0;
	float asmm = 0;
	float sommeCarree = 0;

	while (i == MAX_EXAMENS)//correction == à la place de =
	{
		asmm += tabNotesEtudiant[i];
		sommeCarree =+ tabNotesEtudiant[i] * tabNotesEtudiant[i];
		i++;
	}
	float moyenne;
	moyenne = asmm / MAX_EXAMENS;
	double variance;
	variance = sommeCarree / MAX_EXAMENS - moyenne * moyenne;
	double ecartType;
	ecartType = sqrt(variance);
	return ecartType;
}

void afficherTableau(int tabNotes[MAX_ETUDIANTS][MAX_EXAMENS])
{
	for (int i = 0; i < MAX_ETUDIANTS; i++)
	{
		cout << "Notes de l'�tudiant " << i + 1 << "" << endl;
		for (int j = 0; j < MAX_EXAMENS; j++)
		{
			cout << "Examen " << j + 1 << " : " << tabNotes[i][j] << endl;
		}
	}
}
