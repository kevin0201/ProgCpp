/*
 * JournalTesteur.cpp
 *
 *  Created on: 2016-04-01
 *      Author: etudiant
 */


#include <gtest/gtest.h>
#include "Journal.h"

/**
 * \brief Test du Constructeur Journal
 * cas valide : <br>
 * 	ConstructeurNonVide :	parametres valides
 * <br>
 * cas invalide : <br>
 * 	ConstructeurCapaciteInvalide : mauvais format auteru, titre identifiant
 */
TEST(JournalConstructeur,Constructeur_avec_parametres)
{
	Journal unJournal("auteurReference","titre_reference","0395-2037",2000,"nom_journal",100,100,100);
	ASSERT_EQ(100,unJournal.reqNumero());
	ASSERT_EQ(100,unJournal.reqPage());
	ASSERT_EQ(100,unJournal.reqVolume());
	ASSERT_EQ("nom_journal",unJournal.reqNom());
	//ASSERT_EQ(2000,unJournal.reqAnneeEdition());
	ASSERT_EQ("auteurReference",unJournal.reqAuteurs());
	//ASSERT_EQ("0395-2037",unJournal.reqIdentifiant());
	ASSERT_EQ("titre_reference",unJournal.reqTitre());

	//ASSERT_TRUE(unJournal.operator==(unJournal));
}

/**
 * \brief Test du Constructeur Journal avec exceptions
 * cas valide : <br>
 * 	ConstructeurNonVide :	parametres valides
 * <br>
 * cas invalide : <br>
 * 	 mauvais format auteur, Editeur, Nom, identifiant, titre
 */
TEST(JournalConstructeur,ConstructeurNomInvalide)
{
	ASSERT_THROW(Journal unJournal("auteurReference","titre_reference","0395-2037",2000,"",100,100,100),PreconditionException) << "Il n'y a pas de journale avec un nom invalide";
}

TEST(JournalConstructeur,ConstructeurIdentifiantInvalide)
{
	ASSERT_THROW(Journal unJournal("auteurReference","titre_reference","",2000,"nom_journal",100,100,100),PreconditionException) << "Il n'y a pas journal avec un identifiant invalide";
}

TEST(JournalConstructeur,ConstructeurTitreInvalide)
{
	ASSERT_THROW(Journal unJournal("auteurReference","","0395-2037",2000,"nom_journal",100,100,100),PreconditionException) << "Il n'y a pas de journal avec un titre invalide";
}

TEST(JournalConstructeur,ConstructeurAuteurInvalide)
{
	ASSERT_THROW(Journal unJournal("12345","titre_reference","0395-2037",2000,"nom_journal",100,100,100),PreconditionException) << "Il n'y a pas de journal avec un nom d'auteur invalide";
}

/**
 * \brief Test de la methode reqReferenceFormate
 * cas valide : <br>
 * 		parametre valide, formatage du Journal
 * <br>
 * cas invalide : <br>
 * 	mauvais format des parametres
 */
TEST(JournalConstructeur,MethodereqReferenceFormate)
{
	Journal unJournal("auteurReference","titre_reference","0395-2037",2000,"nom_journal",100,100,100);
	std::string form;
	form=unJournal.reqReferenceFormate();
	ASSERT_EQ(form,unJournal.reqReferenceFormate());
}
