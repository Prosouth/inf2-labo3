/*
-------------------------------------------------------------------------------
 Laboratoire : 3 - Fonction générique
 Fichier     : Tri.h
 Auteur(s)   : Kevin Cristi et Sébastien Saez
 Date        : 20 mars 2017
 
 But         : Ce fichier met à disposition l'opérateur les outils
               nécessaires afin de réaliser un tri sur des vecteurs ainsi
               que la vérification que les vecteurs soient bien ordonnés.
 
 Remarque(s) : Nous avons trouvé plus judicieux de mettre la surcharge de
               l'opérateur << pour les vecteurs de strings ici plutôt que
               polluer le main.cpp.
 
 Compilateur : g++ (GCC) 6.3.1 20170306
-------------------------------------------------------------------------------
*/
#ifndef TRI_H
#define TRI_H
#include <vector>


// Déclaration
template <typename T> void tri(std::vector<T>& monVecteur);
template <typename T> bool test(const std::vector<T>& monVecteur);


// Définition
// Fonction générique qui trie un vecteur avec l'algorithme bubble sort
template <typename T> void tri(std::vector<T>& monVecteur, size_t taille) 
{
   bool echange = true;
   size_t j = 0;
   T temp;
   while (echange) 
   {
      echange = false;
      j++;
      for (size_t i = 0; i < taille - j; i++) 
      {
         if (monVecteur[i] > monVecteur[i + 1]) 
         {
            temp = monVecteur[i];
            monVecteur[i] = monVecteur[i + 1];
            monVecteur[i + 1] = temp;
            echange = true;
         }
      }
   }
}

// Spécialisation pour la date
template <> void tri(std::vector<Date>& monVecteur, size_t taille) 
{
   bool echange = true;
   size_t j = 0;
   Date temp(1,1,1900);
   while (echange) 
   {
      echange = false;
      j++;
      for (size_t i = 0; i < taille - j; i++) 
      {
         if (monVecteur[i] > monVecteur[i + 1]) 
         {
            temp = monVecteur[i];
            monVecteur[i] = monVecteur[i + 1];
            monVecteur[i + 1] = temp;
            echange = true;
         }
      }
   }
}

// Spécialisation pour le Point
template <> void tri(std::vector<Point>& monVecteur, size_t taille) 
{
   bool echange = true;
   size_t j = 0;
   Point temp(0,0);
   while (echange) 
   {
      echange = false;
      j++;
      for (size_t i = 0; i < taille - j; i++) 
      {
         if (monVecteur[i] > monVecteur[i + 1]) 
         {
            temp = monVecteur[i];
            monVecteur[i] = monVecteur[i + 1];
            monVecteur[i + 1] = temp;
            echange = true;
         }
      }
   }
}

// Fonction générique qui vérifie qu'un vecteur soit trié
template <typename T> bool test(const std::vector<T>& monVecteur)
{
   for(auto i = monVecteur.begin(); i != monVecteur.end(); ++i)
   {
      if(i != monVecteur.end() - 1 && *(i) > *(i + 1))
      {
         return false;
      }
   }
   return true;
}

// Surcharge de l'opérateur << pour l'affichage des vecteurs de string
std::ostream& operator << (std::ostream& os, 
                           const std::vector<std::string>& vectString)
{
   for(auto i : vectString)
   {
      os << i << " ";
   }
   return os; 
}

#endif /* TRI_H */