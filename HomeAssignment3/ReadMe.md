**Task #3**  
**Sergienko Andrey**  
**Group**: b82  
**Email**:  
- Personal: andryman1024@gmail.com  
- University: st135882@student.spbu.ru  

---

### Program Overview:
This program demonstrates working with classes in Object Oriented Programming.

---

### How to Use the Program:
1. **Normal startup**:  
   Print `make`. After compiling the program with `make`, You will need to run it with ./main.
   
2. **Google Class Testing**:  
   Print `make test`. After compiling the program with `make test`, You will need to run it with ./runTests.
   
3. **Clean Up**:  
   Run `make clean` to remove any temporary files created during execution.

---

### Explanation of How the Program Works:
1. **Creating classes**:
    - We create a class Transformer. From which the classes Autobot, Decepticon and Microbot are inherited.

2. **Creating additional classes**:
    - We also create Weapon, Shield classes and also Direction class.
    
3. **Object Oriented Programming Principles in the Program**:
    - **Inheritance:**
    The principle of inheritance is used in the Autobot, Decepticon, and Microbot classes, which inherit from the Transformer
    base class. This allows each of these classes to extend the functionality of the transformer by adding unique methods such as 
    transform() and ultimate(). They also inherit all the methods and properties of the base class, which allows for code reuse 
    and reduces code duplication.

    - **Encapsulation:**
    Encapsulation is the process of hiding the internal state of objects and exposing access to this data through public methods. 
    In the Transformer class, for example, all internal data (level, power, fuel, ammo, etc.) is encapsulated and can only be 
    accessed through public methods (e.g. getFuel(), getAmmo(), etc.).

    - **Composition:**
    The relationship between the Transformer and Shield classes is composition because the Shield objects are 
    part of the Transformer objects and their life depends on the life of the transformer.

    - **Association:**
    The relationship between the Transformer and Weapon classes is association because the Transformer uses the Weapon   
    object in its methods but does not manage its life cycle.
---
