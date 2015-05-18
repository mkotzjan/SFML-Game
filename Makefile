CXX = g++ -g -std=c++0x
CHECKSTYLE = python ../cpplint.py
MAIN = $(basename $(wildcard *Main.cpp))
TEST = $(basename $(wildcard *Test.cpp))
OBJECTS = $(addsuffix .o, $(filter-out %Main %Test, $(basename $(wildcard *.cpp))))
HEADERS = $(wildcard *.h)
LIBS = -lncurses -lsfml-graphics -lsfml-window -lsfml-system

.PRECIOUS: %.o

all: compile test

compile: $(MAIN) $(TEST)

test: compile
	for T in $(TEST); do ./$$T; done

checkstyle:
	$(CHECKSTYLE) *.cpp *.h

%Main: %Main.o $(OBJECTS)
	$(CXX) -o $@ $^ $(LIBS)

%Test: %Test.o $(OBJECTS)
	$(CXX) -o $@ $^ $(LIBS) -lgtest -lgtest_main -lpthread

%.o: %.cpp $(HEADERS)
	$(CXX) -c $<

clean:
	rm -f *.o
	rm -f $(MAIN)
	rm -f $(TEST)
	rm -f *.h~
	rm -f *.cpp~
