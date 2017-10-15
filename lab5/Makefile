output: main.o recursion.o  
	g++ main.o recursion.o -o output
	
main.o: main.cpp
	g++ -c main.cpp
	
recursion.o: recursion.cpp recursion.hpp
	g++ -c recursion.cpp

clean: 
	rm *.o output