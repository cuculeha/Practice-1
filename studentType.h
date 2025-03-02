#ifndef STUDENTYPE_H
#define STUDENTYPE_H

#include <iostream>
using namespace std;

class studentType
{
  void setGPA (double);  
  void setID (string);
  void setClassification (string);

  double getGPA() const;
  string getID() const;
  string getClassification() const;

  studentType();
  studentType(string, string);
  studentType(string, string, double, string, string);

  void print()  const;
  bool equalData (const personType &person2) const;
}

#endif
