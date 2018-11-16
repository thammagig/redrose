//
//  TwoVector.h
//  HelloWorld
//
//  Created by Thammarat Thamma on 15/11/2018.
//  Copyright © 2018 Thammarat Thamma. All rights reserved.
//

#ifndef TwoVector_h
#define TwoVector_h

class TwoVector {
    
public:
    TwoVector();
    TwoVector(double x, double y);
    double x();
    double y();
    double r();
    double theta();
    void setX(double x);
    void setY(double y);
    void setR(double r);
    void setTheta(double theta);
    
private:
    double m_x;
    double m_y;
};
#endif /* TwoVector_h */
