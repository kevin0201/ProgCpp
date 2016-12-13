/*
 *
 *\file programmePrincipal.cpp
 *\brief Programme ...
 *A corriger
 */

#include <iostream>
#include "fonctionsUtilitaires.h"
using namespace std;

int main()
{
	//int num;//inutile
	float nbEleves;
	int tabNotes[MAX_ETUDIANTS][MAX_EXAMENS];
	bool valeurCorrecte = false;
	while (valeurCorrecte == false)
	{
		cout << "Saisissez le nombre d'�l�ves" << endl;
		cin >> nbEleves;
		if (nbEleves > 0 )
		{
			valeurCorrecte = true;
		}
	}
	saisieNotes(tabNotes);
	cout << "note minimum : " << minimum(tabNotes) << endl;
	cout << "note maximum :" << maximum(tabNotes) << endl;
	cout << "�cart type : " << ecartType(tabNotes[0]) << endl;
	cout << "ensemble des notes :" << endl;
	afficherTableau(tabNotes);
	return 0;
}
