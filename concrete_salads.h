#include "salad.h"

class CMoscowGreekSalad: public IGreekSalad {
public:
    CMoscowGreekSalad();
    ~CMoscowGreekSalad() final = default;
};

class CRomeGreekSalad: public IGreekSalad {
public:
    CRomeGreekSalad();
    ~CRomeGreekSalad() final = default;
};

class CMoscowCaesarSalad: public ICaesarSalad {
public:
    CMoscowCaesarSalad();
    ~CMoscowCaesarSalad() final = default;
};

class CRomeCaesarSalad: public ICaesarSalad {
public:
    CRomeCaesarSalad();
    ~CRomeCaesarSalad() final = default;
};

class CMoscowVinegretSalad: public IVinegretSalad {
public:
    CMoscowVinegretSalad();
    ~CMoscowVinegretSalad() final = default;
};

class CRomeVinegretSalad: public IVinegretSalad {
public:
    CRomeVinegretSalad();
    ~CRomeVinegretSalad() final = default;
};