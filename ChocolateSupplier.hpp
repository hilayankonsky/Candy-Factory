#pragma once
#include <iostream>
#include <cstring>

class ChocolateSupplier {
protected:
    char* chocolateName;

public:
    ChocolateSupplier(const char* supplierName);
    ChocolateSupplier(const ChocolateSupplier& other);
    ChocolateSupplier& operator=(const ChocolateSupplier& other);
    virtual ~ChocolateSupplier();

    const char* getChocolateName() const;
    void setChocolateName(const char* newName);
    void supplyChocolate();
};
