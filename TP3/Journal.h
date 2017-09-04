/*
 * Journal.h
 *
 *  Created on: 2016-03-13
 *      Author: etudiant
 */

#ifndef JOURNAL_H_
#define JOURNAL_H_
#include "Reference.h"
#include "ContratException.h"

class Journal : public Reference
{

public:
	Journal(const std::string& p_auteurs,
						const std::string& p_titre,
						const std::string& p_identifiant,
						unsigned p_annee,
						const std::string& p_nom,
						unsigned p_volume,
						unsigned p_numero,
						unsigned p_page);
	virtual ~Journal();
	const std::string& reqNom() const;
	unsigned reqNumero() const;
	unsigned reqPage() const;
	unsigned reqVolume() const;
	virtual Reference* clone() const;
	virtual std::string reqReferenceFormate() const;

private:
	std::string m_nom;
	unsigned m_volume;
	unsigned m_numero;
	unsigned m_page;
	void verifieInvariant() const;

};

#endif /* JOURNAL_H_ */
