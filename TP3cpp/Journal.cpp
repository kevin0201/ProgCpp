/*
 * Journal.cpp
 *
 *  Created on: 2016-03-13
 *      Author: etudiant
 */

#include "Journal.h"
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
 * \param[in] p_nom est une chaine de caractère qui représente le nom du journal
 * \param[in] p_volume est un entier unsigned qui représente le volume du journal
 * \param[in] p_numero est un entier unsigned qui représente le numéro du journal
 * \param[in] p_page est un entier unsigned qui représente le nombre de page du journal
 * \pre p_identifiant, p_auteurs doivent être de format valide et p_titre, p_nom doit être non vide
 *
 * \post l'objet construit a été initialisé à partir des entiers passés en paramètres
 */
Journal::Journal(const std::string& p_auteurs,
		const std::string& p_titre,
		const std::string& p_identifiant,
		unsigned p_annee,
		const std::string& p_nom,
		unsigned p_volume,
		unsigned p_numero, unsigned p_page)
: Reference(p_auteurs,p_titre,p_identifiant,p_annee)
{
			 PRECONDITION(p_nom.size()!=0);
			 PRECONDITION(util::validerCodeIssn(p_identifiant));

			 this->m_nom=p_nom;
			 this->m_volume=p_volume;
			 this->m_numero=p_numero;
			 this->m_page=p_page;

			 POSTCONDITION(reqNom()==p_nom);
			 POSTCONDITION(reqNumero()==p_numero);
			 POSTCONDITION(reqVolume()==p_volume);
			 POSTCONDITION(reqPage()==p_page);
			 INVARIANTS();
}

/**
 * \brief Destructeur de la classe Journal.
 */
Journal::~Journal() {
	// TODO Auto-generated destructor stub
}

/**
 * \brief retourne le nom du journal
 * \return est une chaine de caractère qui représente le nom du journal
 */
const std::string& Journal::reqNom() const {
	return m_nom;
}

/**
 * \brief retourne le numéro du journal
 * \return est un entier unsigned qui représente le numéro du journal
 */
unsigned Journal::reqNumero() const {
	return m_numero;
}

/**
 * \brief retourne le nombre de page du journal
 * \return est un entier unsigned qui représente le nombre de page du journal
 */
unsigned Journal::reqPage() const {
	return m_page;
}

/**
 * \brief retourne le  volume du journal
 * \return est un entier unsigned qui représente le volume du journal
 */
unsigned Journal::reqVolume() const {
	return m_volume;
}

/**
 * \brief retourne m_auteurs m_titre m_identifiant m_anneeEdition m_Nom m_Volume m_Numero m_Page dans un certain format
 * \return m_auteurs m_titre m_identifiant m_anneeEdition m_Nom m_Volume m_Numero m_Page dans un certain format
 */
std::string Journal::reqReferenceFormate() const{
	std::ostringstream oss ;
	std::string ouvrage_formate;
	oss << reqReferenceFormate() << ". "<< reqNom()<< ", "<< "vol. " <<reqVolume() << ", no. " << reqNumero() << ", pp. "<< reqPage()<< ", "<< reqAnneeEdition() << ". " << reqIdentifiant() << "." <<"\n";
	ouvrage_formate=oss.str();
	return ouvrage_formate;
}

/**
 * \brief retourne un clone du journal courant
 */
Reference* Journal::clone() const{
return new  Journal(*this);
}

/**
 * \brief Teste l'invariant de la classe Référence. L'invariant de cette classe s'assure que le titre, l'auteur et l'identifiant sont valides
 */
void Journal::verifieInvariant() const{
	INVARIANT(m_nom.size()!=0);
	INVARIANT(util::validerCodeIssn(reqIdentifiant()));
}
