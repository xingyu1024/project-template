//
// Created by maxin on 2024/3/1.
//

#ifndef USER_H
#define USER_H
#include <string>
#include <utility>

class User
{
private:
    std::string name;
    int age;
public:
    User(std::string name_, const int age_):name(std::move(name_)),age(age_){};
    std::string get_name();
};

#endif //USER_H
