/*
 * OuvrageTesteur.cpp
 *
 *  Created on: 2016-04-01
 *      Author: etudiant
 */


#include <gtest/gtest.h>
#include "Ouvrage.h"

/**
 * \brief Test du Constructeur Ouvrage
 * cas valide : <br>
 * 	ConstructeurNonVide :	parametres valides
 * <br>
 * cas invalide : <br>
 * 	ConstructeurCapaciteInvalide : mauvais format auteru, titre identifiant
 */
TEST(OuvrageConstructeur,Constructeur_avec_parametres)
{
	Ouvrage unOuvrage("auteurReference","titre_reference","2-1234-5680-2",2000,"villeOuvrage","editeurOuvrage");
	ASSERT_EQ("editeurOuvrage",unOuvrage.reqEditeur());
	ASSERT_EQ("villeOuvrage",unOuvrage.reqVille());
	ASSERT_EQ(2000,unOuvrage.reqAnneeEdition());
	ASSERT_EQ("auteurReference",unOuvrage.reqAuteurs());
	ASSERT_EQ("2-1234-5680-2",unOuvrage.reqIdentifiant());
	ASSERT_EQ("titre_reference",unOuvrage.reqTitre());

	ASSERT_TRUE(unOuvrage.operator==(unOuvrage));
}

/**
 * \brief Test du Constructeur Ouvrage avec exceptions
 * cas valide : <br>
 * 	ConstructeurNonVide :	parametres valides
 * <br>
 * cas invalide : <br>
 * 	 mauvais format auteur, Editeur, ville, identifiant, titre
 */
TEST(OuvrageConstructeur,ConstructeurEditeurInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("auteurReference","titre_reference","2-1234-5680-2",2000,"villeOuvrage","12345");,PreconditionException) << "Il n'y a pas d'ouvrage avec un nom d'editeur invalide";
}

TEST(OuvrageConstructeur,ConstructeurVilleInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("auteurReference","titre_reference","2-1234-5680-2",2000,"12345","editeurOuvrage");,PreconditionException) << "Il n'y a pas d'ouvrage avec un nom de ville invalide";
}

TEST(OuvrageConstructeur,ConstructeurIdentifiantInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("auteurReference","titre_reference","0",2000,"villeOuvrage","editeurOuvrage");,PreconditionException) << "Il n'y a pas d'ouvrage avec un identifiant invalide";
}

TEST(OuvrageConstructeur,ConstructeurTitreInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("auteurReference","","2-1234-5680-2",2000,"villeOuvrage","editeurOuvrage");,PreconditionException) << "Il n'y a pas d'ouvrage avec un Titre vide";
}

TEST(OuvrageConstructeur,ConstructeurAuteurInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("12345","titre_reference","2-1234-5680-2",2000,"villeOuvrage","editeurOuvrage");,PreconditionException) << "Il n'y a pas d'ouvrage avec un nom d'auteur invalide";
}

/**
 * \brief Test de la methode asgAuteurs
 * cas valide : <br>
 * 		parametre valide, modification effective
 * <br>
 * cas invalide : <br>
 * 	mauvais format auteur.
 */
TEST(OuvrageConstructeur,MethodeAsgAuteurs)
{
	Ouvrage unOuvrage("auteurReference","titre_reference","2-1234-5680-2",2000,"villeOuvrage","editeurOuvrage");
	unOuvrage.asgAuteurs("auteurReferenceModifie");
	ASSERT_EQ("auteurReferenceModifie",unOuvrage.reqAuteurs());
}

/**
 * \brief Test de la methode reqReferenceFormate
 * cas valide : <br>
 * 		parametre valide, formatage de l'ouvrage
 * <br>
 * cas invalide : <br>
 * 	mauvais format des parametres
 */
TEST(OuvrageConstructeur,MethodereqReferenceFormate)
{
	Ouvrage unOuvrage("auteurReference","titre_reference","2-1234-5680-2",2000,"villeOuvrage","editeurOuvrage");
	std::string form;
	form=unOuvrage.reqReferenceFormate();
	ASSERT_EQ(form,unOuvrage.reqReferenceFormate());
}

