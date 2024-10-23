TARGET = main
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
SRC = project2a.cpp
all: $(TARGET)
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)
run: $(TARGET)
	./$(TARGET)
clean:
	rm -f $(TARGET) output.bin
.PHONY: all run clean
