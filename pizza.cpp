#include "pizza.h"

void CPizza::SetDough(const std::string& inputDough) {
	dough = inputDough;
}

void CPizza::SetSauce(const std::string& inputSauce) {
	sauce = inputSauce;
}

void CPizza::AddIngredients(const std::string& inputIngredient) {
	ingredients.push_back(inputIngredient);
}

void CPizza::SetPrice(int inputPrice) {
	price = inputPrice;
}

void CPizza::printPizza() {
	std::cout << "The dough is " << dough << std::endl;
	std::cout << "The sauce is " << sauce << std::endl;
	std::cout << "Finally, the ingredients used in your pizza are ";
	for (std::string& ingredient : ingredients)
		std::cout << ingredient << ' ';
	std::cout << std::endl << "You wanna eat it, don't you?" << std::endl;
}

