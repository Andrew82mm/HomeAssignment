/*
    Andrew Sergienko st135882@student.spbu.ru
*/

#include <gtest/gtest.h>
#include "Template.hpp"

TEST(TestPartialSpecialization, ForInt)
{
    Template<int> test(10, 10, {1.1f, 2.4f, 3.6f});

    EXPECT_TRUE(test.foo());
}

TEST(TestPartialSpecialization, ForDouble)
{
    Template<double> test(10.9f, 10, {1.1f, 2.4f, 3.6f});

    EXPECT_FALSE(test.foo());
}

TEST(TestFirstClass, ForTrue)
{
    Template<Class1> test(Class1(10), 20, {1.1f, 2.4f, 3.6f});

    EXPECT_TRUE(test.foo());
}

TEST(TestFirstClass, ForFalse)
{
    Template<Class1> test(Class1(-10), -20, {1.1f, 2.4f, 3.6f});

    EXPECT_FALSE(test.foo());
}

TEST(TestSecondClass, ForTrue)
{
    Template<Class2> test(Class2(10), 20, {1.1f, 2.4f, 3.6f});

    EXPECT_TRUE(test.foo());
}

TEST(TestSecondClass, ForFalse)
{
    Template<Class2> test(Class2(10), 20, {});

    EXPECT_FALSE(test.foo());
}

TEST(TestThirdClass, ForTrue)
{
    Template<Class3> test(Class3(10), -3, {1.1f, 2.4f, 3.6f});

    EXPECT_TRUE(test.foo());
}

TEST(TestThirdClass, ForFalse)
{
    Template<Class3> test(Class3(14), 20, {1.1f, 2.4f, 3.6f});

    EXPECT_FALSE(test.foo());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
