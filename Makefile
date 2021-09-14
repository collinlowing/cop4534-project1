# the compiler: gcc for C program, define as g++ for C++
CXX = g++

# compiler flags:
#  -Wall turns on most, but not all, compiler warnings
CXXFLAGS  = -std=c++11 -Wall

OBJECTS = 
HEADERS := $(shell find . -path ./test -prune -o -name "*.hpp" -print)

main: main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

testBuild: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -Itest/catch/catch.hpp -o test/test $(OBJECTS) test/test.cpp

test: testBuild
	test/test --success

clean:
	$(RM) *.o *.gch core main test/node_test test/list_test
