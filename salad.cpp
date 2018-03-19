#include "salad.h"

ISalad::~ISalad() = default;

std::string ISalad::getIngredients() const {
    return _ingredients;
}

std::string ISalad::getStyle() const {
    return _style;
}

void ISalad::printSalad() const {
    std::cout << "Ingredients are: " << _ingredients << std::endl;
    std::cout << "The style is " << _style << std::endl;
}

IGreekSalad::IGreekSalad() {
    _ingredients = "tomatoes, cucumbers, onions, feta cheese";
}

IGreekSalad::~IGreekSalad() = default;

ICaesarSalad::ICaesarSalad() {
    _ingredients = "romaine lettuce, croutons, parmesan cheese, chicken";
}

ICaesarSalad::~ICaesarSalad() = default;

IVinegretSalad::IVinegretSalad() {
    _ingredients = "beet, potato, carrot, sauerkraut";
}

IVinegretSalad::~IVinegretSalad() = default;