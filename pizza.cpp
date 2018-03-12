#include "pizza.h"

void CPizza::setDough(const std::string &inputDough) {
	_dough = inputDough;
}

std::string CPizza::getDough() const {
    return _dough;
}

void CPizza::setSauce(const std::string &inputSauce) {
	_sauce = inputSauce;
}

std::string CPizza::getSauce() const {
    return _sauce;
}

void CPizza::addIngredients(const std::string &inputIngredient) {
	_ingredients.push_back(inputIngredient);
}

std::string CPizza::getIngredients() const {
    std::string result;
    for (const auto& ingredient: _ingredients){
        result += ingredient + ' ';
    }
    return result;
}

void CPizza::setPrice(int inputPrice) {
	_price = inputPrice;
}

void CPizza::printPizza() const {
	std::cout << "The _dough is " << _dough << std::endl;
	std::cout << "The sauce is " << _sauce << std::endl;
	std::cout << "Finally, the ingredients used in your pizza are ";
	for (const std::string& ingredient : _ingredients)
		std::cout << ingredient << ' ';
	std::cout << std::endl << "You wanna eat it, don't you?" << std::endl;
}

int CPizza::getPrice() const {
    return _price;
}

