/*
 * BibliographieTesteur.cpp#include<gtest/gtest.h>
 *
 *  Created on: 2016-04-01
 *      Author: etudiant
 */

#include <gtest/gtest.h>
#include <string>
#include "Bibliographie.h"
#include "Ouvrage.h"
#include "Journal.h"
#include "Reference.h"
#include "ReferenceException.h"

TEST(BibliographieobjetVide,AjoutOuvrage)
{
	Bibliographie bibliovide;
	Ouvrage unOuvrage("auteurReference","titrereference","2-1234-5680-2",2000,"villeOuvrage","editeurOuvrage");
	bibliovide.ajouterReference(unOuvrage);
}

TEST(BibliographieTestjournal,TestreqBibliographieFormate)
{
	Bibliographie f_BibliographieTest;
	Journal unJournal("auteurReference","titrereference","0395-2037",2000,"nomjournal",100,100,100);
	f_BibliographieTest.ajouterReference(unJournal);
	std::string form;
	form=f_BibliographieTest.reqBibliographieFormate();
	ASSERT_EQ(form,f_BibliographieTest.reqBibliographieFormate());
}

TEST(BibliographieobjetVide,AjoutJournal)
{
	Bibliographie bibliovide;
	Journal unJournal("auteurReference","titrereference","0395-2037",2000,"nomjournal",100,100,100);
	bibliovide.ajouterReference(unJournal);
}

TEST(BibliographieobjetVide,TestReferenceDejaPresenteException)
{
	Bibliographie bibliovide;
	Journal unJournal("auteurReference","titrereference","0395-2037",2000,"nomjournal",100,100,100);
	bibliovide.ajouterReference(unJournal);
	ASSERT_THROW(bibliovide.ajouterReference(unJournal),ReferenceException)<<"La reference Exsite deja";
}

TEST(BibliographieobjetVide,TestReferenceAbsenteException)
{
	Bibliographie bibliovide3;
	Journal unJournal("auteurReference","titrereference","0395-2037",2000,"nomjournal",100,100,100);
	bibliovide3.ajouterReference(unJournal);
	ASSERT_THROW(bibliovide3.supprimerReference("2-1234-5680-2"),ReferenceException)<<"La Reference n'existe pas, donc ne peut etre supprimée";
}

TEST(BibliographieTest,TestSuppressionReference)
{
	Bibliographie bibliovide;
	Journal unJournal("auteurReference","titrereference","0395-2037",2000,"nomjournal",100,100,100);
	bibliovide.ajouterReference(unJournal);
	bibliovide.supprimerReference("0395-2037");
}
