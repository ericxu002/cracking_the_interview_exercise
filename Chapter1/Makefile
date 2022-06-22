CXX=clang++
CXXFLAGS = -Wall -Wextra -Werror

BINARIES = test 

all: ${BINARIES}

test: 1_6.o 
	${CXX} $^ -std=c++17 -o $@

test.o: 1_6.cpp
	${CXX} ${CXXFLAGS} -std=c++17 -c 1_6.cpp

clean:
	rm -f *.o *test main