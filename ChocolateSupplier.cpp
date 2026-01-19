// Hila Yankonsky ID:212783716
// Eyal Abrahem   ID:205843386

#include"ChocolateSupplier.hpp"
#include <cstring>
using namespace std;
ChocolateSupplier::ChocolateSupplier(const char* supplierName)
{
    if (supplierName)
    {
        chocolateName =  new char [strlen(supplierName)+1];
        strcpy(chocolateName, supplierName);
    }
    else
    {
        chocolateName = nullptr;
    }
}
ChocolateSupplier::~ChocolateSupplier()
{
    if (chocolateName)
    {
        delete [] chocolateName;
    }
}
const char* ChocolateSupplier::getChocolateName() const
{
    return chocolateName;
}
void ChocolateSupplier::setChocolateName(const char* newName)
{
    if (chocolateName)
    {
        delete [] chocolateName;
    }
    chocolateName = new char [strlen(newName)+1];
    strcpy(chocolateName, newName);
}
void ChocolateSupplier::supplyChocolate()
{
    cout << chocolateName << " is now supplying chocolate! 🍫" << endl ;
}