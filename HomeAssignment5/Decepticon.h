#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    void transform() override;
    void openFire() override;
    void ulta() override;
};

#endif

