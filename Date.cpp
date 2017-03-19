/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.cpp
 * Author: prosouth
 * 
 * Created on 14 March 2017, 15:10
 */

#include "Date.h"

Date::Date(short jour, short mois, short annee)
: jour(jour), mois(mois), annee(annee) {}


bool operator > (const Date& date1, const Date& date2)
{
    return (date2.annee > date1.annee && date2.mois > date1.mois &&
            date2.jour > date1.jour);
}

std::ostream& operator << (std::ostream& os, const std::vector<Date>& vectDate)
{
    for (auto i : vectDate)
    {
        os << i.jour << "-" << i.mois << "-" << i.annee << " ";
    }
    return os;
}