CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror -Wpedantic

TARGET = main

SRCS = main.cpp \
       Transformer.cpp \
       Autobot.cpp \
       Decepticon.cpp
       
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
	
.PHONY: all clean test
