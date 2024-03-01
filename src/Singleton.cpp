//
// Created by maxin on 2024/3/1.
//

#include "Singleton.h"

Singleton* Singleton::instance  = new Singleton();
Singleton* Singleton::get_singleton()
{
    return instance;
}

Singleton::Singleton()
{

}
