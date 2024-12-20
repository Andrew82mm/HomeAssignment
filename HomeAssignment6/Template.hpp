/*
    Andrew Sergienko st135882@student.spbu.ru
*/

#ifndef TEMPLATE_H
#define TEMPLATE_H

template<typename Type>
class Template
{
public:

    Template(Type val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {}

    ~Template() {}

    bool foo()
    {
        return value.bar(number, array);
    }

    int c_1_1()
    {
        return value.c_1_1();
    }
    float c_2_1()
    {
        return value.c_2_1();
    }
    void c_3_1()
    {
        value.c_3_1();
    }

    int c_1_2()
    {
        return value.c_1_2();
    }
    float c_2_2()
    {
        return value.c_2_2();
    }
    void c_3_2()
    {
        value.c_3_2();
    }

    int c_1_3()
    {
        return value.c_1_3();
    }
    float c_2_3()
    {
        return value.c_2_3();
    }
    void c_3_3()
    {
        value.c_3_3();
    }


private:
    Type value;
    int number;
    std::vector<float> array;
};

template<>
class Template<int>
{
public:

    Template(int val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {}

    ~Template() {}

    bool foo()
    {
        return true;
    }
private:
    int value;
    int number;
    std::vector<float> array;
};

template<>
class Template<double>
{
public:

    Template(double val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {}

    ~Template() {}

    bool foo()
    {
        return false;
    }
private:
    double value;
    int number;
    std::vector<float> array;
};


class Class1
{
public:
    Class1(int val = 0) : value(val) {}

    bool bar(int number, std::vector<float>& array)
    {
        return number > 0;
    }

    int c_1_1()
    {
        std::cout << "Random number: 42" << std::endl;
        return 42;
    }

    float c_2_1()
    {
        std::cout << "The meaning of Euler's number is 2.72" << std::endl;
        return 2.72;
    }

    void c_3_1()
    {
        std::cout << "You called c_3_1"  << std::endl;
    }
private:
    int value;
};

class Class2
{
public:
    Class2(int val = 0) : value(val) {}

    bool bar(int number, std::vector<float>& array)
    {
        return !array.empty();
    }

    int c_1_2()
    {
        std::cout << "Random number: 42"  << std::endl;
        return 42;
    }

    float c_2_2()
    {
        std::cout << "The meaning of Euler's number is 2.72"  << std::endl;
        return 2.72;
    }

    void c_3_2()
    {
        std::cout << "You called c_3_2"  << std::endl;
    }
private:
    int value;
};

class Class3
{
public:
    Class3(int val = 0) : value(val) {}

    bool bar(int number, std::vector<float>& array)
    {
        return static_cast<std::vector<float>::size_type>(-number) == array.size();
    }

    int c_1_3()
    {
        std::cout << "Random number: 42"  << std::endl;
        return 42;
    }

    float c_2_3()
    {
        std::cout << "The meaning of Euler's number is 2.72"  << std::endl;
        return 2.72;
    }

    void c_3_3()
    {
        std::cout << "You called c_3_3"  << std::endl;
    }
private:
    int value;
};

#endif
