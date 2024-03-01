#include <BaomaFactory.h>
#include <Car.h>
#include <iostream>
#include <Singleton.h>

#include "User.h"

int main()
{
    User* user = new User("mapleLeaf", 22);
    std::cout << user->get_name() << std::endl;

    // 单例模式
    auto a = Singleton::get_singleton();
    auto b = Singleton::get_singleton();

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    // 工厂模式
    Car* car = (new BaomaFactory)->get_car();
    std::cout << car->get_name() << std::endl;
    return 0;
}
