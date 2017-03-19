/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.h
 * Author: prosouth
 *
 * Created on 14 March 2017, 15:10
 */
#ifndef POINT_H
#define POINT_H
#include <vector>
#include <iostream>

class Point 
{
   friend bool operator > (const Point& p1, const Point& p2);
   friend std::ostream& operator << (std::ostream& os, const std::vector<Point>& vectPoint);
   
public:
   Point(int coordX, int coordY);
   double distance() const;

private:
   double coordX;
   double coordY;
};
#endif /* POINT_H */