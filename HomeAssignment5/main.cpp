#include <iostream>
#include <vector>
#include "Autobot.h"
#include "Decepticon.h"

int main() {

    // Explicit Method Testing
    std::cout << std::endl << "Explicit Method Testing" << std::endl;
    
    Autobot a;
    a.transform();
    a.openFire();
    a.ulta();
    
    Transformer t;
    t.transform();
    t.openFire();
    t.ulta();

    Decepticon d;
    d.transform();
    d.openFire();
    d.ulta();
    
    std::cout << std::endl;

    // Testing calling these methods from a pointer typed by an ancestor
    
    std::cout << "Testing calling these methods from a pointer typed by an ancestor" << std::endl;
    
    Transformer* t1 = new Autobot();
    t1->transform();
    t1->openFire();
    t1->ulta();
    
    Transformer* t2 = new Transformer();
    t2->transform();
    t2->openFire();
    t2->ulta();
    
    Transformer* t3 = new Decepticon();
    t3->transform();
    t3->openFire();
    t3->ulta();   
    
    std::cout << std::endl;

    // Testing by creating a vector of pointers to 9 objects (3 of each type)
    std::cout << "Testing by creating a vector of pointers";
    
    std::vector<Transformer*> transformers;
    transformers.push_back(new Autobot());
    transformers.push_back(new Autobot());
    transformers.push_back(new Autobot());
    transformers.push_back(new Transformer());
    transformers.push_back(new Transformer());
    transformers.push_back(new Transformer());
    transformers.push_back(new Decepticon());
    transformers.push_back(new Decepticon());
    transformers.push_back(new Decepticon());
    
    std::cout << std::endl;

    for (auto transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ulta();
    }

    // Clearing memory
    for (auto transformer : transformers) {
        delete transformer;
    }

    return 0;
}

