/* 
-------------------------------------------------------------------------------
 Laboratoire: 3 - Fonction générique
 Fichier    : Couleur.h
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 mars 2017
 
 But        : Ce fichier met à disposition l'opérateur d'affichage << ainsi
 *            qu'une énumération de couleur et sa table de correspondance afin
 *            de ne pas avoir le décalage de 1 dans les indices.
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170306
-------------------------------------------------------------------------------
*/
#ifndef COULEUR_H
#define COULEUR_H
#include <vector>

enum COULEUR {ORANGE = 1, GRAY, CYAN, ROUGE, BLEU, BRUN};
// Tableau de correspondance avec l'énumération
const std::string TABCOULEUR[] = { "", "orange", "gray", "cyan", "rouge",
                                   "bleu", "brun"};

// Surcharge de l'opérateur << afin d'afficher les vecteurs de Couleurs
std::ostream& operator << (std::ostream& os, const std::vector<COULEUR>& vectCouleur)
{
   for(auto i : vectCouleur)
   {
      os << TABCOULEUR[i] << " ";
   }
   return os; 
}

#endif /* COULEUR_H */