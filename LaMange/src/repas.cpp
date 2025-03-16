#include "../include/repas.hpp"
#include <string>
#include <iostream>
#include <string>
#include <vector>

Repas::Repas(std::string name) : name(name)
{}

Repas::~Repas()
{}

void Repas::newAliment(Aliment alie, float quantity){
    this->aliments.push_back({alie,quantity});
}

void Repas::showAliments() const noexcept{
    for (const auto& alie : aliments){
        std::cout << alie.first.getName() << alie.second << std::endl;
    }
}

// GET / SET 

std::string Repas::getName() const noexcept{
    return  name;
}

void Repas::setName(std::string new_name) noexcept{
    this->name = new_name;
}

float Repas::getPrice() const noexcept{
    return  price;
}

void Repas::setPrice(float new_price) noexcept{
    this->price = new_price;
}
