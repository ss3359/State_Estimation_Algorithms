//
//  Trumpet.hpp
//  MUSIC
//
//  Created by Owner on 2/13/25.
//

#ifndef Trumpet_hpp
#define Trumpet_hpp

#include <stdio.h>
#include <cmath>
#include <vector>
#include <thread>
#include <iostream>
#include <iomanip>

using namespace std;


class Car{
private:
    double position;
    double velocity;
    double acceleration;
    double dt=0.5;
public:
    Car(double p, double v, double a):position(p),velocity(v),acceleration(a){};
    double GetPosition();
    double GetVelocity();
    double GetAcceleration();
    double UpdateVelocity();
    double UpdatePosition();
    void PrintResults(Car &c);
    
};
#endif /* Trumpet_hpp */
