// Hila Yankonsky ID:212783716
// Eyal Abrahem   ID:205843386

#pragma once
#include"SugarSupplier.hpp"
#include"ChocolateSupplier.hpp"
class CandyMaker : public SugarSupplier, public ChocolateSupplier
{
public:
    CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName);

    void makeCandy(const char* candyName);
};
