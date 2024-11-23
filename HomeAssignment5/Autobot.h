#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    void transform() override;
    void openFire() override;
    void ulta() override;
};

#endif

