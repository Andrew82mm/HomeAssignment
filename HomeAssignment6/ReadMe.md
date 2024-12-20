**Task #6**  
**Sergienko Andrey**  
**Group**: b82  
**Email**:  
- Personal: andryman1024@gmail.com  
- University: st135882@student.spbu.ru  

---

### Program Overview:
This program demonstrates working with templates.

---

### How to Use the Program:
1. **Normal startup**:  
   Print `make`. After compiling the program with `make`, You will need to run it with ./main.
   
2. **Google Class Testing**:  
   Print `make test`. Tests will run automatically after compilation
   
3. **Clean Up**:  
   Run `make clean` to remove any temporary files created during execution.

---

### Explanation of How the Program Works:
1. **Basic template class (Template):**

- The Template class takes a Type as a parameter.
- The class constructor initializes an object of the Type type, as well as two additional fields: an integer value and a std::vector<float> vector.
- The foo method calls the bar method of the Type object with int and std::vector<float>& parameters and returns the result of its execution.

2. **Partial specializations:**

- For the Template<int> template specialization, the foo method always returns true.
- For the Template<double> template specialization, the foo method always returns false.

3. **Classes with different implementations of the bar method:**

- Class1: The bar method returns true if the passed number parameter is greater than zero.
- Class2: The bar method returns true if the array vector is not empty.
- Class3: The bar method returns true if the passed number parameter is equal to the negative length of the array vector.

4. **Testing:**

- Uses Google Test framework to check partial specializations and class methods:
- For each class (Class1, Class2, Class3) two cases are tested - when the bar method returns true and when it returns false.
- It checks that the foo method works correctly for different types of data and objects.

5. **Main features:**

- The program demonstrates the use of templates and partial specializations.
- Each class (Class1, Class2, Class3) implements its own logic for the bar method.
- Includes tests to check that all implementations work correctly.

---
