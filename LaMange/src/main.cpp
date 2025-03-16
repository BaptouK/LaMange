#include "../include/aliment.hpp"
#include "../include/repas.hpp"

#include <iostream>

int main(){

    Aliment a1("Pate",14.5f);
    Aliment a2("Nutella",14.5f);

    std::cout << a1.getName() << a1.getPrice() << std::endl;

    Repas r1("Pate nutella");
    std::cout << r1.getName() << std::endl;

    r1.newAliment(a1,2.3);
    r1.newAliment(a2,3.3);

    r1.showAliments();

    return 0;
}