#pragma once
#include <iostream>
class SugarSupplier
{
private:
    char *sugarName;
public:
    SugarSupplier(const char* supplierName);
    ~SugarSupplier();
    const char* getSugarName()const;
    void setSugarName(const char* newName);
    void supplySugar();
};
