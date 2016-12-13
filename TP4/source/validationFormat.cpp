/*
 * validationFormat.cpp
 *
 *  Created on: 2016-02-09
 *      Author: etudiant
 */
#include <iostream>
#include <string>
#include <math.h>
#include "validationFormat.h"
using namespace std;
namespace util
{
/*Cette fonction valide le format d’un nom. Un nom ne doit être
 * composé que de lettres mais les espaces
sont permis. */
bool validerFormatNom (const std::string& p_nom)
{
	bool resultat;
	std::size_t indice = p_nom.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ");//trouver tout caractère non alphabetique et qui n'est pas un espace

	  if (indice!=std::string::npos)
	  {
		  resultat=false;//, la chaîne est inccorrecte
	  }
	  else
	  {
		  resultat=true;
	  }
	return resultat;
}


/*Cette fonction valide le code ISSN d'une publication  en série entre autres par la vérification à l'aide du calcul de la clé (dernier chiffre).
Voir https://fr.wikipedia.org/wiki/ISSN pour le format d’un code ISSN ainsi que pour le calcul de la clé.
Exemple de code valide :
ISSN 0395-2037*/
bool validerCodeIssn (const std::string& p_issn)
{
	int taillep_issn;
	taillep_issn=p_issn.length();//taille de la chaine p_issn
	bool resultat(false);
	//int i;//compteur des boucles for
	int cle(0);//variable de calcul de controle qui calcul la clé de l'ISSN
	int ponderations[8];//tableau de pondérations utilisé dans le processus de calcul de la clé// via https://fr.wikipedia.org/wiki/ISSN
	//initialisation du tableau de pondération, remplissage des pondérations.
	ponderations[0]=8;
	ponderations[1]=7;
	ponderations[2]=6;
	ponderations[3]=5;
	ponderations[4]=0;
	ponderations[5]=4;
	ponderations[6]=3;
	ponderations[7]=2;
	//première boucle de calcul des valeurs pondérées avant le "-"
	for (int i = 0 ; i < 4 ; i++ )
	{

		cle=cle+((p_issn[i]-48)*ponderations[i]);//-48 constitue le moyen de conversion à partir de la table ASCII char-int
	}
	//deuxième boucle de calcul des valeurs pondérées après le "-"
	for (int i = 5; i < (taillep_issn-1) ; i++ )
		{

		cle=cle+((p_issn[i]-48)*ponderations[i]);//-48 constitue le moyen de conversion à partir de la table ASCII char-int
		}
	//calcul de la clé pour vérification du respect du format ISSN
		cle=(11-(cle%11));
		int cle_p_issn;//clé reçu en paramètre par la fonction
		cle_p_issn=(p_issn[8]-48)*1;//conversion de la clé en int, char-int à partir de la table ASCII
		//cout << cle_p_issn<<endl;
		char X;
		X=p_issn[8];
		if ((X=='X' || X=='x') && cle==10)
		{
			resultat=true;//Oui ISSN valide
		}
		else{
			if (cle_p_issn==cle)
					{
						resultat=true;//Oui ISSN valide
					}
					else
					{
						resultat=false;//Non ISSN invalide
					}
		}

		return resultat;//on renvoi le resultat du traitement à la fonction; 1 si true et 0 si false.
}

/*
Cette fonction valide le code ISBN d'un livre par la vérification à l'aide du calcul de la clé (dernier chiffre).
Voir http://fr.wikipedia.org/wiki/ISBN pour le calcul de la clé. Cette fonction doit accepter les deux longueurs de code.
Exemple de codes valides :
2-1234-5680-2
978-2-1234-5680-3*/
bool validerCodeIsbn (const std::string& p_isbn)
{
	bool resultat(false);
	int cle(0);
	int i,j(0);
	int ponderations[9];
	ponderations[0]=1;
	ponderations[1]=2;
	ponderations[2]=3;
	ponderations[3]=4;
	ponderations[4]=5;
	ponderations[5]=6;
	ponderations[6]=7;
	ponderations[7]=8;
	ponderations[8]=9;
	int taillep_isbn,taille_isbnsanstiret;
	taillep_isbn=p_isbn.length();//taille de la chaine p_isbn

	//1ere cas pour ISBN10********************************************************************************************************

	if ((taillep_isbn==13) && (p_isbn[0]=='0' || p_isbn[0]=='1' || p_isbn[0]=='2' || p_isbn[0]=='3'|| p_isbn[0]=='4' || (p_isbn[0]=='9' && p_isbn[1]=='2') || (p_isbn[0]=='9' && p_isbn[1]=='9' && p_isbn[2]=='9' && p_isbn[3]=='5' && p_isbn[4]=='0')))
	{
		taille_isbnsanstiret=taillep_isbn-3;//taille de ISBN sans les "-"
		int isbnsanstiret[taille_isbnsanstiret];//tableau contenant ISBN sans les "-"
		for (i=0; i < taillep_isbn; i++)//boucle qui recuperere ISBN sans "-"
		{
			if(p_isbn[i]!='-')
			{
				isbnsanstiret[j]=(p_isbn[i]-48)*1;
				j=j+1;
			}
		}
		//calcul du total des ponderations
		for (i=0; i < taille_isbnsanstiret-1; i++)//boucle qui recuperere ISBN sans "-"
		{
			cle=cle+(isbnsanstiret[i]*ponderations[i]);
		}
				cle=cle%11;//calcul de la clé que doi vérifier p_isbn
				int cle_p_isbn;//clé reçu en paramètre par la fonction
				cle_p_isbn=(p_isbn[12]-48)*1;//conversion de la clé en int, char-int à partir de la table ASCII
				char X;
				X=p_isbn[13];
				if ((X=='X' || X=='x') && cle==10)
				{
					resultat=true;//Oui ISSN valide
				}
				else{
					if (cle_p_isbn==cle)
							{
								resultat=true;//Oui ISSN valide
							}
							else
							{
								resultat=false;//Non ISSN invalide
							}
				}
	}

	//deuxieme cas pour ISBN13****************************************************************************************************
	if (taillep_isbn==17 && ((p_isbn[0]=='9' && p_isbn[1]=='7' && p_isbn[2]=='8')||(p_isbn[0]=='9' && p_isbn[1]=='7' && p_isbn[2]=='9')))
	{
				taille_isbnsanstiret=taillep_isbn-4;//taille de ISBN sans les "-"
				int isbnsanstiret[taille_isbnsanstiret];//tableau contenant ISBN sans les "-"
				for (i=0; i < taillep_isbn; i++)//boucle qui recuperere ISBN sans "-"
					{
						if(p_isbn[i]!='-')
						{
							isbnsanstiret[j]=(p_isbn[i]-48)*1;
							j=j+1;
						}
					}
				for (i=0; i < taille_isbnsanstiret-1; i=i+2)//boucle qui recuperere ISBN sans "-"
					{
						cle=cle+isbnsanstiret[i];
					}
				for (i=1; i < taille_isbnsanstiret-1; i=i+2)//boucle qui recuperere ISBN sans "-"
					{
						cle=cle+isbnsanstiret[i]*3;
					}
				cle=(10-cle%10)%10;

				int cle_p_isbn;//clé reçu en paramètre par la fonction
				cle_p_isbn=(p_isbn[12]-48)*1;//conversion de la clé en int, char-int à partir de la table ASCII
				char X;
				X=p_isbn[16];
				if ((X=='X' || X=='x') && cle==10)
					{
						resultat=true;//Oui ISBN valide
					}
				else
					{
						if (cle_p_isbn==cle)
								{
									resultat=true;//Oui ISBN valide
								}
								else
								{
									resultat=false;//Non ISBN invalide
								}
					}
	}
return resultat;
}
}
