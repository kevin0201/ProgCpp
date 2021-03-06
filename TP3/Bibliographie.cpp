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
 * \brief Teste l'invariant de la classe Bibliographie.
 */
void Bibliographie::ajouterReference(const Reference& p_nouvelleReference) {
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
 * \brief Teste l'invariant de la classe Bibliographie.
 */
void Bibliographie::verifieInvariant() const{

}
