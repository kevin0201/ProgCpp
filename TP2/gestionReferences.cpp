//============================================================================
// Name        : TP2cpp.cpp
// Author      : Kevin BAMOUNI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Ouvrage.h"

using namespace std;
using namespace tp;

int main() {
	char choixUsager;
	string m_auteurs;
	string m_editeur;
	string m_ville;
	string m_titre;
	int m_annee;
	string m_identifiant;
	choixUsager='y';

	cout << "CREER un ouvrage" << endl; // prints !!!Hello World!!!
	cout << "SAISIR LE(S) AUTEUR(S) :" << endl;
	cin >> m_auteurs;
	cout << "SAISIR LE(S) EDITEUR(S) :" << endl;
	cin >> m_editeur;
	cout << "SAISIR LE(S) VILLE(S) :" << endl;
	cin >> m_ville;
	cout << "SAISIR LE TITRE :" << endl;
	cin >> m_titre;
	cout << "SAISIR L'ANNEE :" << endl;
	cin >> m_annee;
	cout << "SAISIR L' IDENTIFIANT :" << endl;
	cin >> m_identifiant;
	Ouvrage nouvelOuvrage( m_auteurs ,m_titre , m_identifiant,m_annee,m_ville,m_editeur );
	while(choixUsager=='y')
	{

		do
		{
			cout << "VOULEZ VOUS MODIFIER LE(S) AUTEUR(S) DE L'OUVRAGE QUE VOUS VENEZ DE CREER?" << endl;
			cout << "TAPER (y) pour OUI // TAPER (n) pour NON" << endl;
			cin >> choixUsager;
		}while(choixUsager!='y' && choixUsager!='n');
		if (choixUsager=='y')
		{
			cout << "SAISIR LE(S) AUTEUR(S) :" << endl;
			cin >> m_auteurs;
			nouvelOuvrage.asgAuteurs(m_auteurs);
		}

	}

	return 0;
}
