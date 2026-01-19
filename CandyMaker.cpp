// Hila Yankonsky ID:212783716
// Eyal Abrahem   ID:205843386

#include"CandyMaker.hpp"
using namespace std;

CandyMaker::CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName) 
            :SugarSupplier(sugarSupplierName), ChocolateSupplier(chocolateSupplierName) {
}

void CandyMaker:: makeCandy(const char* candyName)
{
    cout << "Using sugar from " << getSugarName() << 
            " and chocolate from "<< getChocolateName() <<
            "to create" << candyName <<"! 🍭" <<endl ;
}
