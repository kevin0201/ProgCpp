/*
 * Reference.h
 *
 *  Created on: 2016-03-13
 *      Author: etudiant
 */

#ifndef REFERENCE_H_
#define REFERENCE_H_
#include <string>
#include "ContratException.h"
#include "validationFormat.h"

class Reference {

public:
	Reference(const std::string& p_auteurs,
				const std::string& p_titre,
				const std::string& p_identifiant,
				unsigned p_annee);
	virtual ~Reference();
	unsigned reqAnneeEdition() const;
	const std::string& reqAuteurs() const;
	void asgAuteurs(const std::string& auteurs);
	const std::string& reqIdentifiant() const;
	const std::string& reqTitre() const;
	virtual std::string reqReferenceFormate();
	virtual Reference* clone() const = 0;
	bool operator==(const Reference& p_reference);

private:
	std::string m_auteurs;
	std::string m_titre;
	unsigned m_anneeEdition;
	std::string m_identifiant;
	void verifieInvariant() const;
};

#endif /* REFERENCE_H_ */
