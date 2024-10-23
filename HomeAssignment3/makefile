CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

TARGET = main
TEST_TARGETS = runAutobotTests runDecepticonTests runShieldTests runTransformerTests runWeaponTests

SRCS = main.cpp \
       Shield.cpp \
       Weapon.cpp \
       Transformer.cpp \
       Autobot.cpp \
       Decepticon.cpp
OBJS = $(SRCS:.cpp=.o)

# Files with tests for each class
AUTOBOT_TEST_SRCS = AutobotTest.cpp
AUTOBOT_TEST_OBJS = $(AUTOBOT_TEST_SRCS:.cpp=.o)

DECEPTICON_TEST_SRCS = DecepticonTest.cpp
DECEPTICON_TEST_OBJS = $(DECEPTICON_TEST_SRCS:.cpp=.o)

SHIELD_TEST_SRCS = ShieldTest.cpp
SHIELD_TEST_OBJS = $(SHIELD_TEST_SRCS:.cpp=.o)

TRANSFORMER_TEST_SRCS = TransformerTest.cpp
TRANSFORMER_TEST_OBJS = $(TRANSFORMER_TEST_SRCS:.cpp=.o)

WEAPON_TEST_SRCS = WeaponTest.cpp
WEAPON_TEST_OBJS = $(WEAPON_TEST_SRCS:.cpp=.o)

# Target for building the main project (main program, not tests)
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Target for testing

test: $(TEST_TARGETS)

# Test for Autobot
runAutobotTests: $(AUTOBOT_TEST_OBJS) Shield.o Weapon.o Transformer.o Autobot.o
	$(CXX) $(CXXFLAGS) -o runAutobotTests $(AUTOBOT_TEST_OBJS) Shield.o Weapon.o Transformer.o Autobot.o -lgtest -lgtest_main -pthread

# Test for Decepticon
runDecepticonTests: $(DECEPTICON_TEST_OBJS) Shield.o Weapon.o Transformer.o Decepticon.o
	$(CXX) $(CXXFLAGS) -o runDecepticonTests $(DECEPTICON_TEST_OBJS) Shield.o Weapon.o Transformer.o Decepticon.o -lgtest -lgtest_main -pthread

# Test for Shield
runShieldTests: $(SHIELD_TEST_OBJS) Shield.o Weapon.o Transformer.o
	$(CXX) $(CXXFLAGS) -o runShieldTests $(SHIELD_TEST_OBJS) Shield.o Weapon.o Transformer.o -lgtest -lgtest_main -pthread

# Test for Transformer
runTransformerTests: $(TRANSFORMER_TEST_OBJS) Shield.o Weapon.o Transformer.o
	$(CXX) $(CXXFLAGS) -o runTransformerTests $(TRANSFORMER_TEST_OBJS) Shield.o Weapon.o Transformer.o -lgtest -lgtest_main -pthread

# Test for Weapon
runWeaponTests: $(WEAPON_TEST_OBJS) Weapon.o
	$(CXX) $(CXXFLAGS) -o runWeaponTests $(WEAPON_TEST_OBJS) Weapon.o -lgtest -lgtest_main -pthread

# Removing compiled files
clean:
	rm -f $(OBJS) $(TARGET) $(AUTOBOT_TEST_OBJS) $(DECEPTICON_TEST_OBJS) $(SHIELD_TEST_OBJS) \
              $(TRANSFORMER_TEST_OBJS) $(WEAPON_TEST_OBJS) $(TEST_TARGETS)

.PHONY: all clean test
