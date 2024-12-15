CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra -Werror -Wpedantic

TARGET = main
TEST_TARGETS = runTests

SRCS = main.cpp \
       Shield.cpp \
       Weapon.cpp \
       Transformer.cpp \
       Autobot.cpp \
       Decepticon.cpp \
       Microbot.cpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

TEST_SRCS = Tests.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)
TEST_DEPS = $(TEST_SRCS:.cpp=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

-include $(DEPS) $(TEST_DEPS)

test: $(TEST_TARGETS)

runTests: $(TEST_OBJS) Shield.o Weapon.o Transformer.o Autobot.o Decepticon.o Microbot.o
	$(CXX) $(CXXFLAGS) -o runTests $(TEST_OBJS) Shield.o Weapon.o Transformer.o Autobot.o Decepticon.o Microbot.o -lgtest -lgtest_main -pthread

clean:
	rm -f $(OBJS) $(TARGET) $(TEST_OBJS) $(GTEST_OBJS) $(TEST_TARGETS) $(DEPS) $(TEST_DEPS)

.PHONY: all clean test

