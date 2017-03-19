/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tri.h
 * Author: prosouth
 *
 * Created on 14 March 2017, 15:37
 */

#ifndef TRI_H
#define TRI_H
#include <vector>


// Déclaration
template <typename T> void tri(std::vector<T>& monVecteur);
template <typename T> void swap(std::vector<T>& monVecteur, size_t premier, size_t second);
template <typename T> bool test(const std::vector<T>& monVecteur);


// Définition
template <typename T> void swap(std::vector<T>& monVecteur, size_t premier, size_t second)
{
   T temp = monVecteur[premier];
   monVecteur[premier] = monVecteur[second];
   monVecteur[second] = temp;
}

template <typename T> void tri(std::vector<T>& monVecteur)
{
   for(auto i = monVecteur.begin(); i != monVecteur.end(); ++i)
   {
      if(i != monVecteur.end() - 1 && i > i + 1)
      {
         swap(monVecteur, i, i + 1);
      }
   }
}

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


#endif /* TRI_H */