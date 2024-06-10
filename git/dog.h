#pragma once
#include "pet.h"

class dog : public pet
{
public:
    std::string breed{};
    virtual void print() const
    {
        std::cout << "name: " << name << '\n';
        std::cout << "breed: " << breed << '\n';
    }
};
