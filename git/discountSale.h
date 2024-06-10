#pragma once
#include "sale.h"

class discountSale : public sale
{
    double discount;
public:
    discountSale(double p = 0, double d = 0) : sale{p}, discount{d} {}
    double getDiscount() const {return discount;}
    void setDiscount(double n) {discount = n;}
    virtual double bill() const override
    {
        return getPrice()*(1-discount/100);
    }
};
