/* osc.h */
#include "reference.h"
#include <cstdlib>
#include <iostream>
#ifndef BYTESWAP_H
#define BYTESWAP_H

#include "reference.h"

class Byteswap : public Reference {
  OBJ_TYPE(Byteswap, Reference);

 protected:
  static void _bind_methods();

 public:
  Byteswap();
  float reverseFloat(float);
  int reverseInt(int);
};

#endif
