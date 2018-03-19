#include "concrete_salads.h"

CMoscowGreekSalad::CMoscowGreekSalad(): IGreekSalad() {
    _style = "Moscow";
}

CRomeGreekSalad::CRomeGreekSalad(): IGreekSalad() {
    _style = "Rome";
}

CMoscowCaesarSalad::CMoscowCaesarSalad(): ICaesarSalad() {
    _style = "Moscow";
}

CRomeCaesarSalad::CRomeCaesarSalad(): ICaesarSalad() {
    _style = "Rome";
}

CMoscowVinegretSalad::CMoscowVinegretSalad(): IVinegretSalad() {
    _style = "Moscow";
}

CRomeVinegretSalad::CRomeVinegretSalad(): IVinegretSalad() {
    _style = "Rome";
}