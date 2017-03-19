/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.cpp
 * Author: prosouth
 * 
 * Created on 14 March 2017, 15:10
 */

#include "Point.h"
#include <cmath>

Point::Point(int coordX, int coordY)
: coordX(coordX), coordY(coordY) {}
   
double Point::distance() const
{
    return sqrt(coordX *coordX + coordY * coordY);
}

bool operator > (const Point& p1, const Point& p2)
{
    return p1.distance() > p2.distance();
}