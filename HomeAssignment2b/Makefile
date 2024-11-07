# Makefile
# Sergienko Andrey b82 group st135882@student.spbu.ru
# To run the program, you need to open the directory in the terminal, enter "make" without quotes. Then ./main. 

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Targets
all: main

main: main.o ArrayStack.o rpn.o
	$(CXX) $(CXXFLAGS) -o main main.o ArrayStack.o rpn.o

main.o: main.cpp rpn.h
	$(CXX) $(CXXFLAGS) -c main.cpp

ArrayStack.o: ArrayStack.cpp ArrayStack.h
	$(CXX) $(CXXFLAGS) -c ArrayStack.cpp

rpn.o: rpn.cpp rpn.h ArrayStack.h
	$(CXX) $(CXXFLAGS) -c rpn.cpp

clean:
	rm -f *.o main
