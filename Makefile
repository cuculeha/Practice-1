run-test: main.cpp studentType.o personType.o professorType.o selectionSort.o
	g++ -std=c++20 -Wall -Werror -o run-test main.cpp studentType.o personType.o professorType.o selectionSort.o

personType.o: personType.cpp
	g++ -std=c++20 -Wall -Werror -c personType.cpp

studentType.o: studentType.cpp
	g++ -std=c++20 -Wall -Werror -c studentType.cpp

professorType.o: professorType.cpp
	g++ -std=c++20 -Wall -Werror -c professorType.cpp

selectionSort.o: selectionSort.cpp
	g++ -std=c++20 -Wall -Werror -c selectionSort.cpp

clean:
	rm out/*.o run-test
