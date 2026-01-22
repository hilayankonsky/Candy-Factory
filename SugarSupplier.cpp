#include "SugarSupplier.hpp"
#include <cstring>
using namespace std;
SugarSupplier::SugarSupplier(const char* supplierName)
{
    if (supplierName)
    {
        sugarName = new char [strlen(supplierName)+1];
        strcpy(sugarName,supplierName);
    }
    else
    {
        sugarName = nullptr;
    }   
}
SugarSupplier::~SugarSupplier()
{
    if (sugarName)
    {
        delete [] sugarName;
    }
}
const char* SugarSupplier::getSugarName()const
{
    return sugarName;
}
void SugarSupplier::setSugarName(const char* newName)
{
    if (sugarName)
    {
        delete [] sugarName;
    }
    sugarName = new char [strlen(newName)+1];
    strcpy(sugarName,newName);
}
void SugarSupplier::supplySugar()
{
    cout << sugarName <<" is now supplying sugar! 🍬" << endl ;
}
