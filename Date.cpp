/*
-------------------------------------------------------------------------------
 Laboratoire: 3 - Fonction générique
 Fichier    : Date.cpp
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 mars 2017
 
 But        : Ce fichier met en oeuvre les fonctions précédemment
              déclarées dans le Date.h

 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170306
-------------------------------------------------------------------------------
 */
#include "Date.h"

Date::Date(short jour, short mois, short annee)
: jour(jour), mois(mois), annee(annee) {}

// Surcharge de l'opérateur > afin de pouvoir compareur deux Dates
bool operator > (const Date& date1, const Date& date2)
{
    // Comparaison de l'année puis mois puis jour
    if(date1.annee > date2.annee)
    {
        return true;
    }
    else if(date1.mois > date2.mois)
    {
        return true;
    }
    else if(date1.jour > date2.jour)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Surcharge de l'opérateur << afin d'afficher les vecteurs de Date
std::ostream& operator << (std::ostream& os, const std::vector<Date>& vectDate)
{
    for (auto i : vectDate)
    {
        os << i.jour << "-" << i.mois << "-" << i.annee << " ";
    }
    return os;
}