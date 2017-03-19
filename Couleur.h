/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Couleur.h
 * Author: prosouth
 *
 * Created on 15 March 2017, 17:55
 */

#ifndef COULEUR_H
#define COULEUR_H
#include <vector>

enum COULEUR {ORANGE = 1, GRAY, CYAN, ROUGE, BLEU, BRUN};
const std::string TABCOULEUR[] = { "", "orange", "gray", "cyan", "rouge",
                                   "bleu", "brun"};
std::ostream& operator << (std::ostream& os, const std::vector<COULEUR>& vectCouleur)
{
   for(auto i : vectCouleur)
   {
      os << TABCOULEUR[i] << " ";
   }
   return os; 
}

#endif /* COULEUR_H */