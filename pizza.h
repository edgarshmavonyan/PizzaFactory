#include <iostream>
#include <vector>
#include <memory>

enum PriceList{
    HAWAIIAN = 120,
    MARGARITA = 100,
    DIABLO = 150,
    CUSTOM = 300
};

class CPizza {
	std::string _dough;
	std::string _sauce;
	std::vector<std::string> _ingredients;
	int _price;

public:

	void setDough(const std::string &inputDough);
	void setSauce(const std::string &inputSauce);
    std::string getDough() const;
    std::string getSauce() const;
	void addIngredients(const std::string &inputIngredient);
    std::string getIngredients() const;
	void setPrice(int inputPrice);
	void printPizza() const;
    int getPrice() const;
};