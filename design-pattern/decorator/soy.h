#ifndef DESIGNPATTERN_DECORATOR_SOY_H_
#define DESIGNPATTERN_DECORATOR_SOY_H_

#include "condiment_decorator.h"

namespace designpattern {
namespace decorator {

class Soy: public CondimentDecorator {
 public:
  Soy(Beverage *beverage);

  virtual std::string getDescription() const override;
  virtual double cost() const override;
};

} // decorator
} // designpattern

#endif //DESIGNPATTERN_DECORATOR_SOY_H_
