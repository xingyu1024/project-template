//
// Created by maxin on 2024/3/1.
//

#ifndef BAOMAFACTORY_H
#define BAOMAFACTORY_H
#include "CarFactory.h"
class BaomaFactory: public CarFactory
{
public:
    Car* get_car() override;
};

#endif //BAOMAFACTORY_H
