/*
 * Bibliographie.cpp
 *
 *  Created on: 2016-03-18
 *      Author: etudiant
 */

#include "Bibliographie.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
using namespace util;
using namespace std;


/**
 * \brief Constructeur de la classe Bibliographie.
 */
Bibliographie::Bibliographie() {
	// TODO Auto-generated constructor stub
}

/**
 * \brief Destructeur de la classe Bibliographie.
 */
Bibliographie::~Bibliographie() {
	// TODO Auto-generated destructor stub
}

/**
 * \brief Ajoute une reference à la bibliographie
 */
void Bibliographie::ajouterReference(const Reference& p_nouvelleReference) {
	if (ReferenceEstDejaPresente(p_nouvelleReference.reqIdentifiant())==true) throw ReferenceDejaPresenteException("La reference est deja présente dans la bibliographie");
	m_vReferences.push_back(p_nouvelleReference.clone());
}

/**
 * \brief génère une bibliographie dans un format précis, composé de journaux et d'ouvrages.
 */
std::string Bibliographie::reqBibliographieFormate() const {
	std::ostringstream oss ;
	std::string ouvrage_formate;
	oss<<"Bibliographie"<<"\n";
	oss<<"=============================================="<<"\n";
	for (unsigned i = 0; i < m_vReferences.size(); i++)
	{
	oss << "["<<i+1<<"] "<<m_vReferences[i]->reqReferenceFormate() <<"\n";
	}
	ouvrage_formate=oss.str();
	return ouvrage_formate;
}

/**
 * \brief Suppression d'un element du vecteur, de la bibliographie
 *        On Supprime dans la bibliographie l'objet dont l'identifiant a été passé en paramètre
 * \param[in] p_identifiant est une chaine de caractère dont qui represente l'identifiant de l'objet qui sera supprimer
 * \post Objet a été supprimé la taille diminue de 1
 */
void Bibliographie::supprimerReference(const std::string& p_identifiant)
{
	PRECONDITION(validerCodeIsbn(p_identifiant) || validerCodeIssn(p_identifiant));

	if (ReferenceEstDejaPresente(p_identifiant)==false)	throw ReferenceAbsenteException("La reference des absente de la bibliographie");
	int taillevector(m_vReferences.size());
		for(int i = 0; i < taillevector ; i++)
			 {
				 if (m_vReferences[i]->reqIdentifiant() == p_identifiant)
				 {
					 m_vReferences.erase(m_vReferences.begin()+i);
				 }
			 }

	POSTCONDITION(ReferenceEstDejaPresente(p_identifiant)==false);
}

/**
 * \brief Teste l'invariant de la classe Bibliographie.
 */
void Bibliographie::verifieInvariant() const{

}

/**
 * \brief Teste si la reference existe deja dans la bibliographie à partir de son identifiant
 *
 * \param[in] p_identifiant est une chaine de caractère dont qui represente l'identifiant de l'objet qui existe ou pas dans la bibliogrpahie
 * \pre p_identifiant, doit etre non vide.
 * \post retourne 1 si l'objet existe et 0 sinon.
 */
bool Bibliographie::ReferenceEstDejaPresente(const std::string p_identifiant) const
{
	PRECONDITION(validerCodeIsbn(p_identifiant) || validerCodeIssn(p_identifiant));
	int taillevector(m_vReferences.size());
	bool PresentOuNon(false);
	for(int i = 0; i < taillevector ; i++)
		 {
			 if (m_vReferences[i]->reqIdentifiant() == p_identifiant)
			 {
				 //m_vReferences.erase(m_vReferences.begin()+i-1);
				 PresentOuNon = true;
			 }
		 }
 return PresentOuNon;
}

/**
 * \brief Retourne la taille du vecteur et permet de faire les test sur certaines methodes
 *
 */
int Bibliographie::reqSizeBibliographie() const {
	return m_vReferences.size();
}
