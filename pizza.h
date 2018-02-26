#include <iostream>
#include <vector>

enum PriceList{
    HAWAIIAN = 120,
    MARGARITA = 100,
    DIABLO = 150,
    CUSTOM = 300
};

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