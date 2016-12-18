/*
 * Bibliographie.h
 *
 *  Created on: 2016-03-18
 *      Author: etudiant
 */

#ifndef BIBLIOGRAPHIE_H_
#define BIBLIOGRAPHIE_H_
#include <string>
#include <vector>
#include "Reference.h"
#include "ContratException.h"

class Bibliographie {
public:
	Bibliographie();
	virtual ~Bibliographie();
	void ajouterReference (const Reference& p_nouvelleReference);
	std::string reqBibliographieFormate() const;

private:
	std::vector<Reference*> m_vReferences;
	void verifieInvariant() const;

};

#endif /* BIBLIOGRAPHIE_H_ */
