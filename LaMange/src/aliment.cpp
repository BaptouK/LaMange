#include "../include/aliment.hpp"
#include <string>
#include <iostream>

Aliment::Aliment(std::string name) : name(name)
{}
Aliment::Aliment(std::string name, float price) : name(name),price(price)
{}

Aliment::~Aliment()
{}

// GET / SET

std::string Aliment::getName() const noexcept{
    return  name;
}

void Aliment::setName(std::string new_name) noexcept{
    this->name = new_name;
}

float Aliment::getPrice() const noexcept{
    return  price;
}

void Aliment::setPrice(float new_price) noexcept{
    this->price = new_price;
}