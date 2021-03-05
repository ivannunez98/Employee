Employee: employee.o test.o
	g++ employee.o test.o -o employee

employee.o: employee.h employee.cpp
	g++ employee.h employee.cpp -c

test.o: test.cpp
	g++ test.cpp -c

clean:
	rm *.o employee *.h.gch
