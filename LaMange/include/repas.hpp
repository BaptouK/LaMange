#pragma once
#include "aliment.hpp"
#include <iostream>
#include <string>
#include <vector>

class Repas {
    public:
        Repas() = delete;
        Repas(std::string name);
        ~Repas();

        std::string getName() const noexcept;
        void setName(std::string name) noexcept;

        float getPrice() const noexcept;
        void setPrice(float price) noexcept;

        void newAliment(Aliment alie,float quantity);
        void showAliments() const noexcept;
    private:
        std::vector<std::pair<Aliment,float>> aliments;
        std::string name;
        float price;
};
