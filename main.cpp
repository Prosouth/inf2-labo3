/* -------------------------------------------------------------------------------
 Laboratoire: 3 - Fonction générique
 Fichier    : main.cpp
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 mars 2017
 
 But        : Le but de ce laboratoire est de mettre en oeuvre la compilation
 *            séparée ainsi que les fonctions génériques. Nous disposons de
 *            plusieurs vecteurs de types différents à afficher puis trier.
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170306
 ------------------------------------------------------------------------------- */
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
    cout << "Vecteurs non tries: " << endl;
    cout << vString << endl; // définie dans Tri.h
    cout << vCouleur << endl;
    cout << vPoint << endl;
    cout << vDate << endl;
    
    cout << "#############################################################" << endl;

    
   // teste de manière générique si les vecteurs sont triés
    cout << "Teste si les vecteurs sont tries: " << endl;
    cout  << boolalpha << "vString: " << test(vString) << endl;
    cout << "vCouleur: " << test(vCouleur) << endl;
    cout << "vPoint: " << test(vPoint) << endl;
    cout << "vDate: " << test(vDate) << endl;
    
    cout << "#############################################################" << endl;

    // trie de manière générique
    tri(vString, vString.size());
    tri(vCouleur, vCouleur.size());
    tri(vPoint, vPoint.size());
    tri(vDate, vDate.size());
    
    cout << "#############################################################" << endl;

    
    // Affichage des vecteurs triés
    cout << vString << endl;
    cout << vCouleur << endl;
    cout << vPoint << endl;
    cout << vDate << endl;
    
    cout << "#############################################################" << endl;
    
    // Teste de manière générique que le tri se soit bien déroulé
    cout << "Teste si les vecteurs ont ete tries: " << endl;
    cout  << boolalpha << "vString: " << test(vString) << endl;
    cout << "vCouleur: " << test(vCouleur) << endl;
    cout << "vPoint: " << test(vPoint) << endl;
    cout << "vDate: " << test(vDate) << endl;
    
    cout << "#############################################################" << endl;
    cout << "#############################################################" << endl;
    cout << endl;
    
    cout << "Appuyez sur ENTER pour quitter le programme";
    cin.get();
    
    return EXIT_SUCCESS;
}