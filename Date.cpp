/* -------------------------------------------------------------------------------
 Laboratoire: 3 - Fonction générique
 Fichier    : Date.cpp
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 mars 2017
 
 But        : Ce fichier met en oeuvre les fonctions précédemment déclarées dans 
 *            le Date.h
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170306
 ------------------------------------------------------------------------------- */
#include "Date.h"

Date::Date(short jour, short mois, short annee)
: jour(jour), mois(mois), annee(annee) {}

bool operator > (const Date& date1, const Date& date2)
{
    return (date2.jour > date1.jour && date2.mois > date1.mois &&
            date2.annee > date1.annee);
}

std::ostream& operator << (std::ostream& os, const std::vector<Date>& vectDate)
{
    for (auto i : vectDate)
    {
        os << i.jour << "-" << i.mois << "-" << i.annee << " ";
    }
    return os;
}