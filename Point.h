/*
-------------------------------------------------------------------------------
 Laboratoire: 3 - Fonction générique
 Fichier    : Point.h
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 mars 2017
 
 But        : Ce fichier met à disposition la classe Point avec les attributs
              X et Y.  Afin de calculer la longueur d'un point et de pouvoir
              les comparer, nous avons utilisé la fonction distance qui 
              calcule la longueur entre deux points. Nous avons également 
              surchargé deux opérateurs: l'opérateur > afin de pouvoir faire
              des comparaisons entre deux points et l'opérateur << pour 
              afficher.
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170306
-------------------------------------------------------------------------------
*/
#ifndef POINT_H
#define POINT_H
#include <vector>
#include <iostream>

class Point 
{
   friend bool operator > (const Point& p1, const Point& p2);
   friend std::ostream& operator << (std::ostream& os, 
                                     const std::vector<Point>& vectPoint);
   
public:
   Point(int coordX, int coordY);
   double distance() const; // Calcule la distance entre deux points

private:
   double coordX;
   double coordY;
};

#endif /* POINT_H */