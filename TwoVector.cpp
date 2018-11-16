//
//  TwoVector.cpp
//  HelloWorld
//
//  Created by Thammarat Thamma on 15/11/2018.
//  Copyright © 2018 Thammarat Thamma. All rights reserved.
//

#include "TwoVector.h"
#include <cmath>
#include <iostream>

TwoVector::TwoVector(){
    m_x = 0;
    m_y = 0;
}

TwoVector::TwoVector(double x, double y){
    m_x = x;
    m_y = y;
}

double TwoVector::x(){ return m_x; }
double TwoVector::y(){ return m_y; }
double TwoVector::r(){
    return sqrt(m_x*m_x + m_y*m_y);
}
double TwoVector::theta(){
    return atan2(m_y, m_x);
}

void TwoVector::setX(<#double x#>){
    m_x = x;
}
void TwoVector::setY(<#double y#>){
    m_y = y;
}
void TwoVector::setR(<#double r#>){
    double cosTheta = m_x / this->r();
    double sinTheta = m_y / this->r();
    m_x = r * cosTheta;
    m_y = r * sinTheta;
}

