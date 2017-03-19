/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: prosouth
 *
 * Created on 14 March 2017, 15:10
 */

#ifndef DATE_H
#define DATE_H
#include <vector>

class Date; // nécesssaire afin que la ligne suivante soit valide
using VectDate = std::vector<Date>;

class Date 
{
   friend bool operator > (const Date& date1, const Date& date2);
public:
   Date(short jour, short mois, short annee);
private:
   short jour;
   short mois;
   short annee;
};

#endif /* DATE_H */