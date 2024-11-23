#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>

class Transformer {
public:
    virtual void transform();
    virtual void openFire();
    virtual void ulta();
    virtual ~Transformer() = default;  // Virtual destructor
};

#endif

