#pragma once
#include "SugarSupplier.hpp"
class ChocolateSupplier
{
private:
    char* chocolateName;
public:
    ChocolateSupplier(const char* supplierName);
    ~ChocolateSupplier();
    const char* getChocolateName() const;
    void setChocolateName(const char* newName);
    void supplyChocolate();
};