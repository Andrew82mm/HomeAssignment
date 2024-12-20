/*
    Andrew Sergienko st135882@student.spbu.ru
*/

#include <iostream>
#include <vector>
#include "Template.hpp"

int main()
{

    Template<int>* obj_int = new Template<int>(10, 20, {10.1f, 2.3f});
    std::cout << std::boolalpha << "template specialization (for int) " << obj_int->foo() << std::endl;
    delete obj_int;

    Template<double>* obj_doubl = new Template<double>(10, 20, {10.1f, 2.3f});
    std::cout << std::boolalpha << "template specialization (for double) " << obj_doubl->foo() << std::endl;
    delete obj_doubl;

    Template<Class1>* obj_1 = new Template<Class1>(Class1(), 20, {10.1f, 2.3f});
    std::cout << std::boolalpha << obj_1->foo() << std::endl;
    obj_1->c_1_1();
    obj_1->c_2_1();
    obj_1->c_3_1();
    delete obj_1;

    Template<Class2>* obj_2 = new Template<Class2>(Class2(), 20, {10.1f, 2.3f});
    std::cout << std::boolalpha << obj_2->foo() << std::endl;
    obj_2->c_1_2();
    obj_2->c_2_2();
    obj_2->c_3_2();
    delete obj_2;

    Template<Class3>* obj_3 = new Template<Class3>(Class3(), -2, {10.1f, 2.3f});
    std::cout << std::boolalpha << obj_3->foo() << std::endl;
    obj_3->c_1_3();
    obj_3->c_2_3();
    obj_3->c_3_3();
    delete obj_3;

    return 0;
}
