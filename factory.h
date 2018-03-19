#include <memory>
#include "concrete_salads.h"

class IFactory {
public:
    virtual std::shared_ptr<ISalad> create_greek() const = 0;
    virtual std::shared_ptr<ISalad> create_caesar() const = 0;
    virtual std::shared_ptr<ISalad> create_vinegret() const = 0;
    virtual ~IFactory() = default;
};

class CMoscowFactory : public IFactory {
public:
    std::shared_ptr<ISalad> create_greek() const override;
    std::shared_ptr<ISalad> create_caesar() const override;
    std::shared_ptr<ISalad> create_vinegret() const override;
};

class CRomeFactory : public IFactory{
public:
    std::shared_ptr<ISalad> create_greek() const override;
    std::shared_ptr<ISalad> create_caesar() const override;
    std::shared_ptr<ISalad> create_vinegret() const override;
};