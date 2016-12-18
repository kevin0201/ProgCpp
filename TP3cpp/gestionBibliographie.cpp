/*
 * gestionBibliographie.cpp
 *
 *  Created on: 2016-03-15
 *      Author: etudiant
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Ouvrage.h"
#include "Reference.h"
#include "Bibliographie.h"
#include "Journal.h"
#include "validationFormat.h"
#include "validationFormat.h"

using namespace std;
using namespace util;

	string m_auteurs;
		string m_titre;
		unsigned  m_annee;
		string m_identifiant;
		std::string m_nom;
		unsigned m_volume;
		unsigned m_numero;
		unsigned m_page;
		string m_editeur;
		string m_ville;

void saisieJournal();
void saisieOuvrage();

int main() {

	try
	{
		saisieOuvrage();
		Ouvrage(m_auteurs,m_titre,m_identifiant,m_annee,m_ville,m_editeur);
		//saisieOuvrage();
		//Ouvrage(m_auteurs,m_titre,m_identifiant,m_annee,m_ville,m_editeur);
		//saisieJournal();
		//Journal(m_auteurs,m_titre,m_identifiant,m_annee,m_nom,m_volume,m_numero,m_page);

	} catch (ContratException& e)
	{
		cout << e.reqTexteException() << endl;
	}
	return 0;
}

void saisieOuvrage(){

		    //boucle de contrôle du format de la chaîne représentant le nom de l'auteur saisie; demande de saisie tant que le format est invalide
			cout << "SAISIR LE(S) AUTEUR(S) :" << endl;
			cin >> m_auteurs;

			//boucle de contrôle du format de la chaîne représentant le titre de l'ouvrage saisie; demande de saisie tant que le format est invalide
			cout << "SAISIR LE TITRE :" << endl;
			cin >> m_titre;

			//boucle de contrôle du format de la chaîne représentant l'année de parution de l'ouvrage saisie; demande de saisie tant que le format est invalide (année supérieure à 0)
			cout << "SAISIR L'ANNEE :" << endl;
			cin >> m_annee;

			//boucle de contrôle du format de la chaîne représentant l'identifiant ISBN de l'ouvrage saisie; demande de saisie tant que le format est invalide
			cout << "SAISIR L' IDENTIFIANT :" << endl;
			cin >> m_identifiant;

			//boucle de contrôle du format de la chaîne représentant le nom de l'éditeur saisie; demande de saisie tant que le format est invalide
			cout << "SAISIR LE(S) EDITEUR(S) :" << endl;
			cin >> m_editeur;

			//boucle de contrôle du format de la chaîne représentant le nom de la ville d'origine de l'ouvrage saisie; demande de saisie tant que le format est invalide
			cout << "SAISIR LE(S) VILLE(S) :" << endl;
			cin >> m_ville;

}
void saisieJournal(){


	  	  	  	//boucle de contrôle du format de la chaîne représentant le nom de l'auteur saisie; demande de saisie tant que le format est invalide
				cout << "SAISIR LE(S) AUTEUR(S) :" << endl;
				cin >> m_auteurs;

				//boucle de contrôle du format de la chaîne représentant le titre de l'ouvrage saisie; demande de saisie tant que le format est invalide
				cout << "SAISIR LE TITRE :" << endl;
				cin >> m_titre;

				//boucle de contrôle du format de la chaîne représentant l'année de parution de l'ouvrage saisie; demande de saisie tant que le format est invalide (année supérieure à 0)
				cout << "SAISIR L'ANNEE :" << endl;
				cin >> m_annee;

				//boucle de contrôle du format de la chaîne représentant l'identifiant ISBN de l'ouvrage saisie; demande de saisie tant que le format est invalide
				cout << "SAISIR L' IDENTIFIANT :" << endl;
				cin >> m_identifiant;

				cout << "SAISIR LE NOM :" << endl;
				cin >> 	m_nom;

				cout << "SAISIR LE VOLUME :" << endl;
				cin >> m_volume;

				cout << "SAISIR LE NUMERO :" << endl;
				cin >> m_numero;

				cout << "SAISIR LE PAGE :" << endl;
				cin >> m_page;
}

