Employee: employee.o main.o
	g++ employee.o main.o -o employee

employee.o: employee.h employee.cpp
	g++ -c employee.h employee.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o employee *.h.gch
