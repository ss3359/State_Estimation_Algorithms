//
//  Trumpet.cpp
//  MUSIC
//
//  Created by Owner on 2/13/25.
//

#include "Trumpet.hpp"
#include <stdio.h>
#include <cmath>
#include <vector>
#include <thread>
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;


double Car::GetPosition(){
    return position;
}
double Car::GetVelocity(){
    return velocity;
}
double Car::GetAcceleration(){
    return acceleration; 
}

double Car::UpdateVelocity(){
    
    velocity+=dt*acceleration;
    return velocity;
  
}
double Car:: UpdatePosition(){
    position+=dt*velocity;
    return position;
    
}

void Car::PrintResults(Car &c){
    int iter;
    double p=c.GetPosition(),v=c.GetVelocity();
    double p_tilda=0;
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dist(0,1);
    
    cout<<"The Results: "<<endl;
    for(iter=0; iter<20; iter++){
        v=c.UpdateVelocity();
        p=c.UpdatePosition();
        p_tilda=p+dist(gen);
        
        cout<<"v= "<<v<<endl;
        cout<<"p= "<<p<<endl;
        cout<<"p_tilda= "<<p_tilda<<endl;
        
    }
    
}
