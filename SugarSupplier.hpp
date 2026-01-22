#pragma once
#include <iostream>
#include <cstring>

class SugarSupplier {
protected:
    char* sugarName;

public:
    SugarSupplier(const char* supplierName);
    SugarSupplier(const SugarSupplier& other);
    SugarSupplier& operator=(const SugarSupplier& other);
    virtual ~SugarSupplier();

    const char* getSugarName() const;
    void setSugarName(const char* newName);
    void supplySugar();
};
