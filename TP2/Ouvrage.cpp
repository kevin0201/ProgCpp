/*
 * Ouvrage.cpp
 *
 *  Created on: 2016-02-12
 *      Author: etudiant
 */

#include "Ouvrage.h"
#include <string>
using namespace std;
namespace tp
{
Ouvrage::Ouvrage(const std::string& p_auteurs,
		const std::string& p_titre,
		const std::string& p_identifiant,
		int  p_annee,
		const std::string& p_ville,
		const std::string& p_editeur) {
	// TODO Auto-generated constructor stub

}

int Ouvrage::reqAnnee() const {
	return m_annee;
}

const std::string& Ouvrage::reqAuteurs() const {
	return m_auteurs;
}

const std::string& Ouvrage::reqEditeur() const {
	return m_editeur;
}

const std::string& Ouvrage::reqIdentifiant() const {
	return m_identifiant;
}

const std::string& Ouvrage::reqTitre() const {
	return m_titre;
}

const std::string& Ouvrage::reqVille() const {
	return m_ville;
}

void Ouvrage::asgAuteurs(const std::string& p_auteurs) {
	m_auteurs = p_auteurs;
}

void Ouvrage::asgAnnee(int annee) {
	m_annee = annee;
}

void Ouvrage::asgEditeur(const std::string& editeur) {
	m_editeur = editeur;
}

void Ouvrage::asgIdentifiant(const std::string& identifiant) {
	m_identifiant = identifiant;
}

void Ouvrage::asgTitre(const std::string& titre) {
	m_titre = titre;
}

void Ouvrage::asgVille(const std::string& ville) {
	m_ville = ville;
}

const std::string& Ouvrage::reqOuvrageFormate() const{
 return "0";
}

}
