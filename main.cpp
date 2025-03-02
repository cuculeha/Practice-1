//main.cpp
#include <iostream>
#include "personType.h"
#include "studentType.h"

using namespace std;

int main ()
{
  personType person[2];
  studentType student[3];
  
  string stringtoInput;
  double doubletoInput;
  char chartoInput;
  
  for (int i =0 ; i < 2; i ++)
    {
      cout << "\nInput information for personType object [" << i + 1 <<"]\n";
      cout << "\nFirst Name : ";
      getline (cin, stringtoInput);
      person[i].setFName (stringtoInput);

      cout << "\nLast Name : ";
      getline (cin, stringtoInput);
      person[i].setLName (stringtoInput);

      cout << "\nAddress   : ";
      getline (cin, stringtoInput);
      person[i].setAddress (stringtoInput);

      cout << "\nHeight : ";
      cin >> doubletoInput;
      person[i].setHeight (doubletoInput);
      cin.ignore();
      
      cout << "\nDOB    : ";
      getline (cin, stringtoInput);
      person[i].setDOB (stringtoInput);
      
      cout << "\nGender  : ";
      cin.get (chartoInput);
      person[i].setGender (chartoInput);
      cin.ignore (100, '\n');
    }
  
  for (int i =0 ; i < 3; i ++)
    {
      cout << "\nInput information for studentType object [" << i + 1 <<"]\n";
      cout << "\nFirst Name : ";
      getline (cin, stringtoInput);
      student[i].setFName (stringtoInput);
      
      cout << "\nLast Name : ";
      getline (cin, stringtoInput);
      student[i].setLName (stringtoInput);
      
      cout << "\nAddress   : ";
      getline (cin, stringtoInput);
      student[i].setAddress (stringtoInput);

      cout << "\nHeight : ";
      cin >> doubletoInput;
      student[i].setHeight (doubletoInput);
      cin.ignore();

      cout << "\nDOB    : ";
      getline (cin, stringtoInput);
      student[i].setDOB (stringtoInput);
      
      cout << "\nGender  : ";
      cin.get (chartoInput);
      student[i].setGender (chartoInput);
      cin.ignore (100, '\n');

      cout << "/nGPA : ";
      cin >> doubletoInput;
      student[i].setGPA (doubletoInput);
      cin.ignore();

      cout << "\nStudent ID : ";
      getline (cin, stringtoInput);
      student[i].setID (stringtoInput);

      cout << "\nClassification   : ";
      getline (cin, stringtoInput);
      student[i].setClassification (stringtoInput);
    }

  // print all information
  for (int i=0;  i < 2; i++)
  {
    person[i].print();
  }
  for (int i=0;  i < 2; i++)
  {
    student[i].print();
  }
  
  return 0;
}
