/*
 * Ouvrage.h
 *
 *  Created on: 2016-03-13
 *      Author: etudiant
 */

#ifndef OUVRAGE_H_
#define OUVRAGE_H_
#include <string>
#include "Reference.h"
#include "ContratException.h"

class Ouvrage : public Reference
{

public:
	Ouvrage(const std::string& p_auteurs,
				const std::string& p_titre,
				const std::string& p_identifiant,
				int  p_annee,
				const std::string& p_ville,
				const std::string& p_editeur);
	virtual ~Ouvrage();
	const std::string& reqEditeur() const;
	const std::string& reqVille() const;
	virtual std::string reqReferenceFormate() const;
	virtual Reference* clone() const;

private:
	std::string m_editeur;
	std::string m_ville;
	void verifieInvariant() const;


};

#endif /* OUVRAGE_H_ */
