#include "pizza.h"

void CPizza::SetDough(const std::string& inputDough) {
	dough = inputDough;
}

std::string CPizza::GetDough() const {
    return dough;
}

void CPizza::SetSauce(const std::string& inputSauce) {
	sauce = inputSauce;
}

std::string CPizza::GetSauce() const {
    return sauce;
}

void CPizza::AddIngredients(const std::string& inputIngredient) {
	ingredients.push_back(inputIngredient);
}

std::string CPizza::GetIngredients() const {
    std::string result;
    for (const auto& ingredient: ingredients){
        result += ingredient + ' ';
    }
    return result;
}

void CPizza::SetPrice(int inputPrice) {
	price = inputPrice;
}

void CPizza::printPizza() const {
	std::cout << "The dough is " << dough << std::endl;
	std::cout << "The sauce is " << sauce << std::endl;
	std::cout << "Finally, the ingredients used in your pizza are ";
	for (const std::string& ingredient : ingredients)
		std::cout << ingredient << ' ';
	std::cout << std::endl << "You wanna eat it, don't you?" << std::endl;
}

int CPizza::GetPrice() const {
    return price;
}

