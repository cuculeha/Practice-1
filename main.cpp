#include <iostream>
#include <cstdlib>
#include <string>
#include "personType.h"
#include "studentType.h"
#include "professorType.h"
#include "selectionSort.h"
using namespace std;

int main ()
{
  // personType person[5];
  studentType student[5];
  //professorType professor[5];
  
  string stringtoInput;
  string fName;
	string lName;
  double doubletoInput;
  char chartoInput;
  /*
  for (int i =0 ; i < 5; i ++)
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
    }*/
  
  for (int i =0 ; i < 5; i ++)
    {
      cout << "\nInput information for studentType object [" << i + 1 <<"]\n";
      cout << "First Name : ";
      getline (cin,fName);
      student[i].setFName (fName);
      
      cout << "Last Name : ";
      getline (cin, lName);
      student[i].setLName (lName);
      
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


		// set the first and last name
		student[i].setFullName (fName, lName);
    }


/*for (int i =0 ; i < 2; i ++)
    {
      cout << "\nInput information for professorType object [" << i + 1 <<"]\n";
      cout << "First Name : ";
      getline (cin, stringtoInput);
      professor[i].setFName (stringtoInput);
      
      cout << "Last Name : ";
      getline (cin, stringtoInput);
      professor[i].setLName (stringtoInput);
      
      cout << "Address   : ";
      getline (cin, stringtoInput);
      professor[i].setAddress (stringtoInput);

      cout << "Height : ";
      cin >> doubletoInput;
      professor[i].setHeight (doubletoInput);
      cin.ignore();

      cout << "DOB    : ";
      getline (cin, stringtoInput);
      professor[i].setDOB (stringtoInput);
      
      cout << "Gender  : ";
      cin.get (chartoInput);
      professor[i].setGender (chartoInput);
      cin.ignore (100, '\n');

      cout << "Employee ID : ";
      getline (cin, stringtoInput);
      professor[i].setEmpID (stringtoInput);

      cout << "Department : ";
      getline (cin, stringtoInput);
      professor[i].setDep (stringtoInput);

      cout << "Degree  : ";
      getline (cin, stringtoInput);
      professor[i].setDegree (stringtoInput);
    }*/

system ("clear");
  // print all information
	cout << "Before Sorting\n";
  /*for (int i=0;  i < 5; i++)
  {	
	cout << "---- > personType object\n";
    person[i].print();
    cout << "------------------------------------------------------------\n";
  }*/

  for (int i=0;  i < 5; i++)
  {
	cout << "---- > studentType object\n";
    student[i].print();
    cout << "------------------------------------------------------------\n";
  }

	/*for (int i=0;  i < 2; i++)
  {
	cout << "---- > professorType object\n";
    professor[i].print();
    cout << "------------------------------------------------------------\n";
  }
  */
	// call sorting function
	studentTypeName (student, 5);
	cout << "Sorting Full Names of student type object..\n";
	for (int i=0;  i < 5; i++)
  {
	cout << "---- > studentType object\n";
    cout << student[i].getFullName() << endl;
    cout << "------------------------------------------------------------\n";
  }
	/*personTypeSort (person, 5);
	for (int i=0;  i < 5; i++)
  {	
	cout << "---- > personType object\n";
    person[i].print();
    cout << "------------------------------------------------------------\n";
  }	
*/
	/*studentTypeSort (student, 5);
	for (int i = 0 ;  i < 5; i++)
  {	
	cout << "---- > studentType object\n";
    student[i].print();
    cout << "------------------------------------------------------------\n";
  }
*/
  return 0;
}
