/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: prosouth
 *
 * Created on 14 March 2017, 15:05
 */
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include "Date.h"
#include "Point.h"
#include "Couleur.h"
#include "Tri.h"
using namespace std;

using VectString = vector<string>;
using VectCouleur = vector<COULEUR>;
using VectPoint = std::vector<Point>;

int main()
{
    // Vecteurs à trier
    VectString vString = {"pomme", "citron", "orange", "banane"};
    VectCouleur vCouleur = {COULEUR::ORANGE, COULEUR::GRAY, COULEUR::CYAN};
    VectPoint vPoint = {{1,2},{3,4},{5,5},{-1,7},{3,1}};
    VectDate vDate = {{1, 2, 1927}, {3, 4, 2002}, {5, 5, 2001}};
    
    
   // Affichage des vecteurs
    cout << vString << endl; // définie dans Tri.h
    cout << vCouleur << endl;
    cout << vPoint << endl;
    cout << vDate << endl;
    
   // tests de manière générique
    cout << "Teste si les vecteurs sont tries: " << endl;
    cout  << boolalpha << "vString: " << test(vString) << endl;
    cout << "vCouleur: " << test(vCouleur) << endl;
    cout << "vPoint: " << test(vPoint) << endl;
    cout << "vDate: " << test(vDate) << endl;
    
    // tris de manière générique
    //tri(vString);
    
    return EXIT_SUCCESS;
}