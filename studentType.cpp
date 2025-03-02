#ifndef
#include "personType.h"
#endif
#ifndef
#include "studentType.h"
#endif
void:: studentType setGPA (double studentGPA)
{
  gpa = studentGPA;
}

void:: studentType setID (string studentID)
{
  id = studentID;
}

void:: studentType setClassification (string studentCLS)
{
  classification = studentCLS;
}

double:: studentType getGPA() const
{
  return gpa;
}

string::studentType getID() const
{
  return id;
}

string getClassification() const
{
  return classification;
}


studentType:: studentType()
{
  gpa = 2.5;
  id = "";
  classification = "";
}

studentType::studentType(string fName, string lName)
            : personType (fName, lName)

studentType:: studentType(string fName, string lName, double studentGPA, string studentID, string studentCLS)
            : personType (fName, lName)
{
  if (studentGPA > 2.5 )
    gpa = studentGPA;

  id = studentID;
  classfication = studentCLS;
}

void studentType :: print () const
{
  personType :: print ();
  cout << "Student GPA    : " << getGPA() << endl;
  cout << "Student ID     : " << getID() << endl;
  cout << "Classification : " << getClassification() << endl;
  cout << "____________________________________________________________________\n";
}

bool equalData (const studentType &another) const
{
  if (gpa == another.gpa || id == another.id || classification == another.classification || personType :: equalData(another));
    return true;

  else
    false;
}
