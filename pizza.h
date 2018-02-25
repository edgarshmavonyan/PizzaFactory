#include <iostream>
#include <vector>

class CPizza {
	std::string dough;
	std::string sauce;
	std::vector<std::string> ingredients;
	int price;

public:

	void SetDough(const std::string& inputDough);
	void SetSauce(const std::string& inputSauce);
	void AddIngredients(const std::string& inputIngredient);
	void SetPrice(int inputPrice);

	void printPizza();
};