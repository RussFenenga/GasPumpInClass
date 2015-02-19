//
//  main.cpp
//  InClass
//
//  Created by Russ Fenenga on 2/18/15.
//  Copyright (c) 2015 Russ. All rights reserved.
//

#include <iostream>
#include "GasPump.h"
using namespace std;

int main() {
    GasPump p(200,2.79);
    p.showValues();
    cout<<"***\n";
    p.request(18);
    cout<<"###\n";
    p.request(190);
    return 0;
}
