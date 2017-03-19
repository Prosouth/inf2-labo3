/* -------------------------------------------------------------------------------
 Laboratoire: 3 - Fonction générique
 Fichier    : Tri.h
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 mars 2017
 
 But        : Ce fichier met à disposition l'opérateur les outils nécessaires afin
 *            de réaliser un tri sur des vecteurs ainsi que la vérification que les 
 *            vecteurs soient bien ordonnés.
 
 Remarque(s) : Nous avons trouvé plus judicieux de mettre la surcharge de l'opérateur
 *             << pour les vecteurs de strings ici plutôt que polluer le main.cpp.
 
 Compilateur : g++ (GCC) 6.3.1 20170306
 ------------------------------------------------------------------------------- */
#ifndef TRI_H
#define TRI_H
#include <vector>


// Déclaration
template <typename T> void tri(std::vector<T>& monVecteur);
template <typename T> void swap(std::vector<T>& monVecteur, size_t premier, size_t second);
template <typename T> bool test(const std::vector<T>& monVecteur);


// Définition
// Fonction nécessaire pour le tri d'un vecteur, elle échange deux valeurs
template <typename T> void swap(std::vector<T>& monVecteur, const size_t premier, 
                                const size_t second)
{
   T temp = monVecteur[premier];
   monVecteur[premier] = monVecteur[second];
   monVecteur[second] = temp;
}

// Fonction générique qui trie un vecteur avec l'algorithme bubble sort
template <typename T> void tri(std::vector<T>& monVecteur, size_t taille) 
{
   bool swapped = true;
   int j = 0;
   T tmp;
   while (swapped) 
   {
      swapped = false;
      j++;
      for (int i = 0; i < taille - j; i++) {
         if (monVecteur[i] > monVecteur[i + 1]) 
         {
            tmp = monVecteur[i];
            monVecteur[i] = monVecteur[i + 1];
            monVecteur[i + 1] = tmp;
            swapped = true;
         }
      }
   }
}

// Fonction générique qui vérifie qu'un vecteur soit trié
template <typename T> bool test(const std::vector<T>& monVecteur)
{
   for(auto i = monVecteur.begin(); i != monVecteur.end(); ++i)
   {
      if(i != monVecteur.end() - 1 && *(i)> *(i + 1))
      {
         return false;
      }
   }
   return true;
}

// Surcharge de l'opérateur << pour l'affichage des vecteurs de string
std::ostream& operator << (std::ostream& os, const std::vector<std::string>& vectString)
{
   for(auto i : vectString)
   {
      os << i << " ";
   }
   return os; 
}

#endif /* TRI_H */