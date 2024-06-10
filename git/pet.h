#pragma once
#include <iostream>
#include <string>

class pet
{
public:
    std::string name{};
    virtual void print() const
    {
        std::cout << "name: " << name << '\n';
    }
};

