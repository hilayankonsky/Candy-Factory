#include <iostream>
#include "SugarSupplier.hpp"
#include "ChocolateSupplier.hpp"
#include "CandyMaker.hpp"
#include "CandyBox.hpp"

int main() {
    CandyMaker maker("SugarCo", "ChocoDelight");

    maker.supplySugar();
    maker.supplyChocolate();
    maker.makeCandy("Fudge Surprise");

    CandyBox<const char*> box(5);
    box.addItem("SourLollipop");
    box.addItem("MintChoco");
    box.addItem("CaramelSwirl");

    std::cout << "Contents of CandyBox:" << std::endl;
    box.displayItems();

    box.removeItem(1);

    std::cout << "Contents of CandyBox after removal:" << std::endl;
    box.displayItems();

    return 0;
}
