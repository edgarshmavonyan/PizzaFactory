#include "factory.h"

std::shared_ptr<ISalad> CMoscowFactory::create_greek() const {
    return std::make_shared<CMoscowGreekSalad>();
}

std::shared_ptr<ISalad> CMoscowFactory::create_caesar() const {
    return std::make_shared<CMoscowCaesarSalad>();
}

std::shared_ptr<ISalad> CMoscowFactory::create_vinegret() const {
    return std::make_shared<CMoscowVinegretSalad>();
}

std::shared_ptr<ISalad> CRomeFactory::create_greek() const {
    return std::make_shared<CRomeGreekSalad>();
}

std::shared_ptr<ISalad> CRomeFactory::create_caesar() const {
    return std::make_shared<CRomeCaesarSalad>();
}

std::shared_ptr<ISalad> CRomeFactory::create_vinegret() const {
    return std::make_shared<CRomeVinegretSalad>();
}