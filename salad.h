#include <iostream>
#include <vector>

class ISalad {
protected:
    std::string _ingredients;
    std::string _style;
public:
    virtual ~ISalad() = 0;
    std::string getIngredients() const;
    std::string getStyle() const;
    void printSalad() const;
};

class IGreekSalad: public ISalad {
public:
    IGreekSalad();
    ~IGreekSalad() override = 0;
};

class ICaesarSalad: public ISalad {
public:
    ICaesarSalad();
    ~ICaesarSalad() override = 0;
};

class IVinegretSalad: public ISalad {
public:
    IVinegretSalad();
    ~IVinegretSalad() override = 0;
};