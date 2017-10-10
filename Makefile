CXX = g++
CXXFLAGS = -Wall -g


all: calc

calc: calc.cc calc.h
	$(CXX) $(CXXFLAGS) $^ -o $@

calc_test: calc_test.cc calc.h
	$(CXX) $(CXXFLAGS) $^ -L. libgtest.a libgtest_main.a -lpthread -o $@


.PHONY: test clean rebuild

test: calc_test

clean:
	rm -f calc calc_test

rebuild: clean all
