//
//  GasPump.cpp
//  InClass
//
//  Created by Russ Fenenga on 2/18/15.
//  Copyright (c) 2015 Russ. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "GasPump.h"

using namespace std;



GasPump::GasPump(int size, float price){
    this->size = size;
    this->price = price;
}
GasPump::GasPump(){
    this->size = 200;
    this->price = 3.00;
}

void GasPump::showValues(){
    cout<<"The gas tank has "<<this->size<<" gallons of gas.\n";
    cout<<"The price per gallon of gas is $"<<this->price<<".\n";
}
void GasPump::request(int amount){
    float totalPrice = 0;
    cout<<amount<<" gallons were requested\n";
    if(((this->size) - amount>=0)){                 //if there is enough gas
        cout<<amount<<" gallons were pumped.\n";
        this->size=(this->size)-amount;
        cout<<this->size<<" remain in the tank.\n";
        totalPrice=amount*(this->price);
        cout<<"The total price is $"<< totalPrice <<"\n";
    }else{                              //otherwise not enough gas
        cout << this->size<<" gallons were pumped.\n";
        totalPrice = (this->size)*(this->price);
        this->size=0;
        cout<<this->size<<" gallons are left in the tank.\n";
        cout<<"The total price is $"<<totalPrice <<"\n";
    }
}