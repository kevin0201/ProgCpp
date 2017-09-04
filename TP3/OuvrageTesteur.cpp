/*
 * OuvrageTesteur.cpp
 *
 *  Created on: 2016-04-01
 *      Author: etudiant
 */


#include <gtest/gtest.h>
#include "Ouvrage.h"

TEST(OuvrageConstructeur,Constructeur_avec_parametres)
{
	Ouvrage unOuvrage("auteur_reference","titre_reference","0395-2037",2000,"ville_ouvrage","editeur_ouvrage");
	ASSERT_EQ("editeur_ouvrage",unOuvrage.reqEditeur());
	ASSERT_EQ("ville_ouvrage",unOuvrage.reqVille());
	ASSERT_EQ(2000,unOuvrage.reqAnneeEdition());
	ASSERT_EQ("auteur_reference",unOuvrage.reqAuteurs());
	ASSERT_EQ("0395-2037",unOuvrage.reqIdentifiant());
	ASSERT_EQ("titre_reference",unOuvrage.reqTitre());

	ASSERT_TRUE(unOuvrage.operator==(unOuvrage));
}

TEST(OuvrageConstructeur,ConstructeurEditeurInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("auteur_reference","titre_reference","0395-2037",2000,"ville_ouvrage","12345");,PreconditionException) << "Il n'y a pas d'ouvrage avec un nom d'editeur invalide";
}

TEST(OuvrageConstructeur,ConstructeurVilleInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("auteur_reference","titre_reference","0395-2037",2000,"12345","editeur_ouvrage");,PreconditionException) << "Il n'y a pas d'ouvrage avec un nom de ville invalide";
}

TEST(OuvrageConstructeur,ConstructeurIdentifiantInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("auteur_reference","titre_reference","0",2000,"ville_ouvrage","editeur_ouvrage");,PreconditionException) << "Il n'y a pas d'ouvrage avec un identifiant invalide";
}

TEST(OuvrageConstructeur,ConstructeurTitreInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("auteur_reference","","0395-2037",2000,"ville_ouvrage","editeur_ouvrage");,PreconditionException) << "Il n'y a pas d'ouvrage avec un Titre vide";
}

TEST(OuvrageConstructeur,ConstructeurAuteurInvalide)
{
	ASSERT_THROW(Ouvrage unOuvrage("12345","titre_reference","0395-2037",2000,"ville_ouvrage","editeur_ouvrage");,PreconditionException) << "Il n'y a pas d'ouvrage avec un nom d'auteur invalide";
}

TEST(OuvrageConstructeur,MethodeAsgAuteurs)
{
	Ouvrage unOuvrage("auteur_reference","titre_reference","0395-2037",2000,"ville_ouvrage","editeur_ouvrage");
	unOuvrage.asgAuteurs("auteur_reference_modifie");
	ASSERT_EQ("auteur_reference_modifie",unOuvrage.reqAuteurs());
}
