//
// Created by maxin on 2024/3/1.
//

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
private:
    Singleton();
    static Singleton* instance;
public:
    static Singleton* get_singleton();
};

#endif //SINGLETON_H
