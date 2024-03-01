//
// Created by maxin on 2024/3/1.
//

#include "BaomaFactory.h"
#include "Baoma.h"

Car* BaomaFactory::get_car()
{
    return new Baoma();
}
