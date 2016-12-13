/*
 * Reference.cpp
 *
 *  Created on: 2016-03-13
 *      Author: etudiant
 */

#include "Reference.h"
#include "validationFormat.h"
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
 * \pre p_identifiant, p_auteurs doivent être de format valide et p_titre doit être non vide
 * \post l'objet construit a été initialisé à partir des entiers passés en paramètres
 */
Reference::Reference(const std::string& p_auteurs, const std::string& p_titre, const std::string& p_identifiant, unsigned p_annee){
			PRECONDITION(util::validerFormatNom(p_auteurs));
			PRECONDITION(p_titre.size()!=0);
			PRECONDITION(validerCodeIsbn(p_identifiant) || validerCodeIssn(p_identifiant));
		//	PRECONDITION(validerCodeIssn(p_identifiant));

			this->m_auteurs=p_auteurs;
			this->m_titre=p_titre;
			this->m_identifiant=p_identifiant;
			this->m_anneeEdition=p_annee;

			POSTCONDITION(reqAuteurs()==p_auteurs);
			POSTCONDITION(reqTitre()==p_titre);
			POSTCONDITION(reqIdentifiant()==p_identifiant);
			POSTCONDITION(reqAnneeEdition()==p_annee);
			INVARIANTS();
}

/**
 * \brief Destructeur de la classe Reference.
 */
Reference::~Reference() {
	// TODO Auto-generated destructor stub
}

/**
 * \brief retourne l'année de la référence
 * \return un entier unsigned qui représente l'année de la référence
 */
unsigned Reference::reqAnneeEdition() const {
	return m_anneeEdition;
}

/**
 * \brief retourne le nom de l'auteur
 * \return une chaine de caractère qui représente le nom de l'auteur(s)
 */
const std::string& Reference::reqAuteurs() const {
	return m_auteurs;
}
/**
 * \brief Assigne une date à l'objet courant
 * \param[in] auteurs est une chaine de caractère qui représente le nom de l'auteur de la référence
 * \pre p_identifiant, p_auteurs doivent être de format valide et p_titre doit être non vide
 * \post l'objet a été assigné à partir des données passées en paramètres
 */
void Reference::asgAuteurs(const std::string& auteurs) {
	PRECONDITION(validerFormatNom(auteurs));
	m_auteurs = auteurs;
	POSTCONDITION(reqAuteurs()==auteurs);
}

/**
 * \brief retourne une chaine de caractère qui représente l'identifiant de la référence
 * \return une chaine de caractère qui représente l'identifiant de la référence
 */
const std::string& Reference::reqIdentifiant() const {
	return m_identifiant;
}

/**
 * \brief retourne une chaine de caractère qui représente le titre de l'auteur de la référence
 * \return une chaine de caractère qui représente le titre de l'auteur de la référence
 */
const std::string& Reference::reqTitre() const {
	return m_titre;
}

/**
 * \brief retourne m_auteurs m_titre m_identifiant m_anneeEdition dans un certain format
 * \return m_auteurs m_titre m_identifiant m_anneeEdition dans un certain format
 */
std::string Reference::reqReferenceFormate() {
		std::ostringstream oss ;
		std::string reference_formate;
		oss << Reference::reqAuteurs() << ". " << Reference::reqTitre() << ". ";
		reference_formate=oss.str();
		return reference_formate;
}

/**
 * \brief surcharge de l'opérateur ==
 * \param[in] p_reference à comparer aux attributs courantes de l'objet
 * \return un booléen indiquant si les deux objets sont identiques ou non
 */
bool Reference::operator==(const Reference& p_reference){
	return (this->m_auteurs==p_reference.m_auteurs && this->m_titre==p_reference.m_titre && this->m_identifiant==p_reference.m_identifiant && this->m_anneeEdition==p_reference.m_anneeEdition);
}

/**
 * \brief Teste l'invariant de la classe Référence. L'invariant de cette classe s'assure que le titre, l'auteur et l'identifiant sont valides
 */
void Reference::verifieInvariant() const{
	INVARIANT(validerFormatNom(reqAuteurs()));
	INVARIANT(reqTitre().size()!=0);
	INVARIANT(validerCodeIssn(reqIdentifiant()) || validerCodeIsbn(reqIdentifiant()));
}
