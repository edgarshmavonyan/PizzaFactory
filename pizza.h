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
	friend class CHawaiianPizzaBuilder;
    friend class CDiabloPizzaBuilder;
    friend class CMargaritaPizzaBuilder;
    friend class CNewPizzaBuilder;
    friend class IPizzaBuilder;

	std::string _dough;
	std::string _sauce;
	std::vector<std::string> _ingredients;
	int _price;

	void _setDough(const std::string &inputDough);
	void _setSauce(const std::string &inputSauce);
	void _addIngredients(const std::string &inputIngredient);
	void _setPrice(int inputPrice);

public:

    std::string getDough() const;
    std::string getSauce() const;
    std::string getIngredients() const;
	int getPrice() const;
	void printPizza() const;
};