/*
 * Ouvrage.cpp
 *
 *  Created on: 2016-03-13
 *      Author: etudiant
 */

#include "Ouvrage.h"
#include <string>
#include <sstream>
using namespace std;
using namespace util;

/**
 * \brief constructeur avec paramètres
 * 		  On construit un objet Référence à partir de valeurs passées en paramètres.
 * 		  Les attributs sont assignés seulement si la Référence est considérée comme valide.
 * 		  Autrement, une erreur d'assertion est générée.
 * \param[in] p_auteurs est une chaine de caractère qui représente le nom de l'auteur de la référence
 * \param[in] p_titre est une chaine de caractère qui représente le titre de la référence
 * \param[in] p_identifiant est une chaine de caractère qui représente l'identifiant de la référence
 * \param[in] p_annee est un entier unsigned qui représente l'année d'édition de la référence
 * \param[in] p_editeur une chaine de caractère qui représente le nom de l'éditeur de l'ouvrage
 * \param[in] p_ville  une chaine de caractère qui représente la ville de l'ouvrage
 * \pre p_ville, p_editeur, p_identifiant, p_auteurs doivent être de format valide et p_titre doit être non vide
 * \post l'objet construit a été initialisé à partir des entiers passés en paramètres
 */
Ouvrage::Ouvrage(const std::string& p_auteurs,
		const std::string& p_titre,
		const std::string& p_identifiant,
		int  p_annee,
		const std::string& p_ville,
		const std::string& p_editeur)
: Reference(p_auteurs,p_titre,p_identifiant,p_annee)
{
	     PRECONDITION(util::validerFormatNom(p_editeur));
		 PRECONDITION(util::validerFormatNom(p_ville));
		 PRECONDITION(util::validerCodeIssn(p_identifiant));

		 this->m_editeur=p_editeur;
		 this->m_ville=p_ville;

		 POSTCONDITION(reqVille()==p_ville);
		 POSTCONDITION(reqEditeur()==p_editeur);
		 INVARIANTS();
}

/**
 * \brief Destructeur de la classe Ouvrage.
 */
Ouvrage::~Ouvrage() {
	// TODO Auto-generated destructor stub
}

/**
 * \brief retourne le nom de l'éditeur
 * \return une chaine de caractère qui représente le nom de l'éditeur de l'ouvrage
 */
const std::string& Ouvrage::reqEditeur() const {
	return m_editeur;
}

/**
 * \brief retourne la ville de l'ouvrage
 * \return une chaine de caractère qui représente la ville de l'ouvrage
 */
const std::string& Ouvrage::reqVille() const {
	return m_ville;
}

/**
 * \brief retourne m_auteurs m_titre m_identifiant m_anneeEdition dans un certain format
 * \return m_auteurs m_titre m_identifiant m_anneeEdition m_Editeur m_Ville dans un certain format
 */
std::string Ouvrage::reqReferenceFormate() const{
	std::ostringstream oss;
	std::string ouvrage_formate;
	oss << reqReferenceFormate() << reqVille() << " : " << reqEditeur() << ", " << reqAnneeEdition() << ". " << reqIdentifiant() << "." <<"\n";
	ouvrage_formate=oss.str();
	return ouvrage_formate;
}

/**
 * \brief retourne un clone de l'ouvrage courant
 */
Reference* Ouvrage::clone() const{
return new  Ouvrage(*this);
}

/**
 * \brief Teste l'invariant de la classe Ouvrage. L'invariant de cette classe s'assure que le titre, l'auteur; l'éditeur, la ville et l'identifiant sont valides
 */
void Ouvrage::verifieInvariant() const{
	INVARIANT(validerFormatNom(reqEditeur()));
	INVARIANT(validerFormatNom(reqVille()));
}
