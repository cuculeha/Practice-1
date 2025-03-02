run-test: main.cpp studentType.o personType.o
	g++ std=c++20 -Wall -Werror main.cpp studentType.o personType.o

personType.o: personType.cpp
	g++ std=c++20 -Wall -Werror personType.cpp

studentType.o: studentType.cpp
	g++ std=c++20 -Wall -Werror studentType.cpp 

clean:
	rm out/*.o
