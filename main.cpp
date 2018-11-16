//
//  main.cpp
//  HelloWorld
//
//  Created by Thammarat Thamma on 15/11/2018.
//  Copyright © 2018 Thammarat Thamma. All rights reserved.
//

#include <iostream>
#include "TwoVector.h"

using namespace std;

int main() {
    TwoVector v(1.5, 3.7);
    TwoVector u(1.4, 8.8);
    v.setX(2.9);
    u.setR(1.3);
    cout << "Vector 1, R=" << v.r() << ", Theta=" << v.theta() << endl;
    cout << "Vector 2, R=" << u.r() << ", Theta=" << u.theta() << endl;

    return 0;
}
