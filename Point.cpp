/*
-------------------------------------------------------------------------------
 Laboratoire: 3 - Fonction générique
 Fichier    : Point.cpp
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 mars 2017
 
 But        : Ce fichier met en oeuvre les fonctions précédemment déclarées dans le
 *            Point.h
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170306
-------------------------------------------------------------------------------
*/
#include "Point.h"
#include <cmath>

Point::Point(int coordX, int coordY)
: coordX(coordX), coordY(coordY) {}
   
// Fonction qui calcule la distance entre deux points
double Point::distance() const
{
    return sqrt(coordX *coordX + coordY * coordY);
}

// Surcharge de l'opérateur > afin de comparer deux points
bool operator > (const Point& p1, const Point& p2)
{
    return p1.distance() > p2.distance();
}

// Surcharge de l'opérateur << afin d'afficher correctement la distance entre
// deux points
std::ostream& operator << (std::ostream& os, const std::vector<Point>& vectPoint)
{
    for(auto i : vectPoint)
    {
        os << i.distance() << " ";
    }
    return os; 
}