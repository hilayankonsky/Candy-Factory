#include "SugarSupplier.hpp"

SugarSupplier::SugarSupplier(const char* supplierName) : sugarName(nullptr) {
    setSugarName(supplierName);
}

SugarSupplier::SugarSupplier(const SugarSupplier& other) : sugarName(nullptr) {
    setSugarName(other.sugarName);
}

SugarSupplier& SugarSupplier::operator=(const SugarSupplier& other) {
    if (this != &other) {
        setSugarName(other.sugarName);
    }
    return *this;
}

SugarSupplier::~SugarSupplier() {
    delete[] sugarName;
    sugarName = nullptr;
}

const char* SugarSupplier::getSugarName() const {
    return sugarName;
}

void SugarSupplier::setSugarName(const char* newName) {
    delete[] sugarName;
    sugarName = nullptr;

    if (!newName) return;

    sugarName = new char[std::strlen(newName) + 1];
    std::strcpy(sugarName, newName);
}

void SugarSupplier::supplySugar() {
    std::cout << "[" << (sugarName ? sugarName : "UnknownSugar") << "] is now supplying sugar!" << std::endl;
}
