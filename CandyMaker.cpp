#include "CandyMaker.hpp"
#include <iostream>

CandyMaker::CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName)
    : SugarSupplier(sugarSupplierName), ChocolateSupplier(chocolateSupplierName) {}

void CandyMaker::makeCandy(const char* candyName) {
    std::cout << "Using sugar from [" << getSugarName()
              << "] and chocolate from [" << getChocolateName()
              << "] to create [" << (candyName ? candyName : "UnknownCandy") << "]!"
              << std::endl;
}
