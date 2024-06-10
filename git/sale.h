#pragma once
#include <iostream>

class sale
{
    double price;
public:
    sale(double p = 0) {setPrice(p);}
    double getPrice() const {return price;}
    void setPrice(double n)
    {
        if (n>=0)
            price = n;
        else
        {
            std::cout << "Error in sale::setPrice(), cannot have a negative price!\n";
            std::exit(1);
        }
    }
    double savings(const sale& other) const
    {
        return bill() - other.bill();
    }
    virtual double bill() const
    {
        return price;
    }
};

bool operator<(const sale& first, const sale& second)
{
    return first.bill() < second.bill();
}
