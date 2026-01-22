#include "ChocolateSupplier.hpp"

ChocolateSupplier::ChocolateSupplier(const char* supplierName) : chocolateName(nullptr) {
    setChocolateName(supplierName);
}

ChocolateSupplier::ChocolateSupplier(const ChocolateSupplier& other) : chocolateName(nullptr) {
    setChocolateName(other.chocolateName);
}

ChocolateSupplier& ChocolateSupplier::operator=(const ChocolateSupplier& other) {
    if (this != &other) {
        setChocolateName(other.chocolateName);
    }
    return *this;
}

ChocolateSupplier::~ChocolateSupplier() {
    delete[] chocolateName;
    chocolateName = nullptr;
}

const char* ChocolateSupplier::getChocolateName() const {
    return chocolateName;
}

void ChocolateSupplier::setChocolateName(const char* newName) {
    delete[] chocolateName;
    chocolateName = nullptr;

    if (!newName) return;

    chocolateName = new char[std::strlen(newName) + 1];
    std::strcpy(chocolateName, newName);
}

void ChocolateSupplier::supplyChocolate() {
    std::cout << "[" << (chocolateName ? chocolateName : "UnknownChoco")
              << "] is now supplying chocolate!" << std::endl;
}
