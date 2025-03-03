//main.cpp
#include <iostream>
#include <cstdlib>
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
      cout << "Input information for personType object [" << i + 1 <<"]\n";
      cout << "First Name : ";
      getline (cin, stringtoInput);
      person[i].setFName (stringtoInput);

      cout << "Last Name : ";
      getline (cin, stringtoInput);
      person[i].setLName (stringtoInput);

      cout << "Address   : ";
      getline (cin, stringtoInput);
      person[i].setAddress (stringtoInput);

      cout << "Height : ";
      cin >> doubletoInput;
      person[i].setHeight (doubletoInput);
      cin.ignore();
      
      cout << "DOB    : ";
      getline (cin, stringtoInput);
      person[i].setDOB (stringtoInput);
      
      cout << "Gender  : ";
      cin.get (chartoInput);
      person[i].setGender (chartoInput);
      cin.ignore (100, '\n');
    }
  
  for (int i =0 ; i < 3; i ++)
    {
      cout << "\nInput information for studentType object [" << i + 1 <<"]\n";
      cout << "First Name : ";
      getline (cin, stringtoInput);
      student[i].setFName (stringtoInput);
      
      cout << "Last Name : ";
      getline (cin, stringtoInput);
      student[i].setLName (stringtoInput);
      
      cout << "Address   : ";
      getline (cin, stringtoInput);
      student[i].setAddress (stringtoInput);

      cout << "Height : ";
      cin >> doubletoInput;
      student[i].setHeight (doubletoInput);
      cin.ignore();

      cout << "DOB    : ";
      getline (cin, stringtoInput);
      student[i].setDOB (stringtoInput);
      
      cout << "Gender  : ";
      cin.get (chartoInput);
      student[i].setGender (chartoInput);
      cin.ignore (100, '\n');

      cout << "GPA : ";
      cin >> doubletoInput;
      student[i].setGPA (doubletoInput);
      cin.ignore();

      cout << "Student ID : ";
      getline (cin, stringtoInput);
      student[i].setID (stringtoInput);

      cout << "Classification   : ";
      getline (cin, stringtoInput);
      student[i].setClassification (stringtoInput);
    }
system ("clear");
  // print all information
  for (int i=0;  i < 2; i++)
  {
    person[i].print();
    cout << "------------------------------------------------------------\n";
  }
  for (int i=0;  i < 3; i++)
  {
    student[i].print();
    cout << "------------------------------------------------------------\n";
  }
  
  return 0;
}
