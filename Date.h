/* -------------------------------------------------------------------------------
 Laboratoire: 3 - Fonction générique
 Fichier    : Date.h
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 mars 2017
 
But         : Ce fichier met à disposition la classe Date avec les attributs jour,
 *            mois et année. Afin de pouvoir comparer une date, nous avons surchargé
 *            deux opérateurs: l'opérateur > afin de pouvoir faire des comparaisons 
 *            entre deux points et l'opérateur << pour afficher.
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170306
 ------------------------------------------------------------------------------- */
#ifndef DATE_H
#define DATE_H
#include <vector>
#include <iostream>

class Date; // nécesssaire afin que la ligne suivante soit valide
using VectDate = std::vector<Date>;

class Date 
{
   friend bool operator > (const Date& date1, const Date& date2);
   friend std::ostream& operator << (std::ostream& os, 
                                     const std::vector<Date>& vectDate);

public:
   Date(short jour, short mois, short annee);
private:
   short jour;
   short mois;
   short annee;
};

#endif /* DATE_H */