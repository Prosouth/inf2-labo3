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
    
   // tests de manière générique
    cout << test(vString) << endl;
    cout << test(vCouleur) << endl;
    cout << test(vPoint) << endl;
    cout << test(vDate) << endl;
    
    // tris de manière générique
    //tri(vString);
    
    
    vector<int> vInt = {1,2,3,4,5};
    swap(vInt, 2,3);
    
    tri(vInt);
    

    
    
    return EXIT_SUCCESS;
}