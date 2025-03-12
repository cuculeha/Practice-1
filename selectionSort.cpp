#include <iostream>
#include "selectionSort.h"
#include "personType.h"
#include "studentType.h"
#include "professorType.h"
using namespace std;


// Sorts personType based on first name
void personTypeSort ( personType array[], int size)
{
	personType temp;
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
						{
						minIndex = i;
						minString = array[i].getFName ();
						}
					}

				temp =  array[startScan];
				array[startScan] = array [minIndex];
				array[minIndex] = temp;
			}
}


// Sorts studenttype based on first name
void studentTypeSort ( studentType array[], int size)
{
	studentType temp;
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
						{
						minIndex = i;
						minString = array[i].getFName ();
						}
					}

				temp =  array[startScan];
				array[startScan] = array [minIndex];
				array[minIndex] = temp;
			}
}


// trying to sort personType using first and last name.
void studentTypeName ( studentType array[], int size)
{
	studentType temp;
	int startScan;
	int minIndex;
	string minString;      // can change based on what r we sorting on
	
		for (startScan = 0; startScan < size -1 ; startScan ++ )
			{
				minIndex = startScan;
				minString = array[startScan].getFullName();


				for (int i = startScan + 1 ; i < size ; i++)
					{
						if (array[i].getFullName() < minString)
						{
						minIndex = i;
						minString = array[i].getFullName ();
						}
					}

				temp =  array[startScan];
				array[startScan] = array [minIndex];
				array[minIndex] = temp;
			}
}
