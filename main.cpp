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
      cout << "First Name : ";
      getline (cin, stringtoInput);
      person[i].setFName (stringtoInput);
      cout << endl;

      cout << "Last Name : ";
      getline (cin, stringtoInput);
      person[i].setLName (stringtoInput);
      cout << endl;

      cout << "Address   : ";
      getline (cin, stringtoInput);
       person[i].setAddress (stringtoInput);
      cout << endl;

      cout << "Height : ";
      cin >> doubletoInput;
      person[i].setHeight (doubletoInput);
      cin.ignore();
      cout << endl;
      
      cout << "DOB    : ";
      getline (cin, stringtoInput);
       person[i].setDOB (stringtoInput);
      cout << endl;
      
      cout << "Gender  : ";
      cin.get (chartoInput);
       person[i].setDOB (stringtoInput);
      cout << endl;
    }
  
  
  return 0;
}
