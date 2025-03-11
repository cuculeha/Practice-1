#include <iostream>
#include "selectionSort.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"
using namespace std;

void personTypeSort ( personType array[], int size)
{
	int startScan;
	int minIndex;
	string minString;      // can change based on what r we sorting on
	
		for (startScan = 0; startScan < size -1 ; startScan ++ )
			{
				minIndex = startScan;
				minString = array[startScan].getFName();


				for (int i = startScan + 1 ; i < size ; i++)
					{
						if (array[i].getFName() < minString)
						minIndex = i;
						minString = array[i].getFName();
					}

				array[minIndex].setFName (array[startScan].getFName() );
				array[startScan].setFName ( minString );
			}
}

