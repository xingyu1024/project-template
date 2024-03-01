//
// Created by maxin on 2024/3/1.
//

#ifndef CARFACTORY_H
#define CARFACTORY_H
#include "Car.h"
class CarFactory
{
public:
    virtual Car* get_car() = 0;
};

#endif //CARFACTORY_H
