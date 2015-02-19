//
//  GasPump.h
//  InClass
//
//  Created by Russ Fenenga on 2/18/15.
//  Copyright (c) 2015 Russ. All rights reserved.
//

#ifndef InClass_GasPump_h
#define InClass_GasPump_h


class GasPump{
public:
    GasPump();
    GasPump(int, float);
    void showValues();
    void request(int);
private:
    float price;
    int size;
};

#endif
