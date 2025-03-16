#pragma once
#include <iostream>
#include <string>


class Aliment {
    public:
        Aliment() = delete;
        Aliment(std::string name);
        Aliment(std::string name, float price);
        ~Aliment();

        std::string getName() const noexcept;
        void setName(std::string name) noexcept;

        float getPrice() const noexcept;
        void setPrice(float price) noexcept;
    private:
        std::string name;
        float price;
};