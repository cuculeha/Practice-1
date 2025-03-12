#include <iostream>
#include <iomanip>
#include <string>
#include "personType.h"
using namespace std;

// Setters definition
void personType :: setFName (string fN) {	fName = fN; }
void personType :: setLName (string lN)	{		lName = lN;	}
void personType :: setAddress (string addr ){		address = addr;	}
void personType :: setHeight (double ht)	{
	if (ht < 10) {
	height = 10;}

	else if (ht > 100 ){
	height = 100;}

	else
	height = ht;
}
void personType :: setDOB (string bdate){		DOB = bdate;	}
void personType :: setGender (char gen)	{
	if (gen != 'M' && gen != 'm' && gen != 'F' && gen != 'f')
	{
		gender = 'X';
	}

	else
		gender = gen;
}

void personType :: setFullName (string fN, string lN)
{
	fullName = getFName() + " " + getLName();
}

// Getters definition
string personType :: getFName () const	{	return fName; 	}
string personType :: getLName () const	{	return lName;	}
string personType :: getAddress () const	{	return address;	}
double personType :: getHeight () const	{	return height;	}
string personType :: getDOB () const	{	return DOB;	}
char personType :: getGender () const	{	return gender;	}
string personType :: getFullName () const { return fullName; }

// Constructors
personType::personType ()
{
	fName = "UNSET";
	lName = "UNSET";
	address = "UNSET";
	gender = 'X';
	DOB = "UNSET";
	height = 10;
	fullName = "UNSET";
}
personType::personType (string firstName, string lastName)
{
	fName = firstName;
	lName = lastName;
}

personType::personType (string firstName, string lastName, string addr, char gen, string bdate, double ht )
{
	fName = firstName;
	lName = lastName;
	address = addr;
	gender = gen;
	DOB = bdate;
	height = ht;
}

// Destructor
personType:: ~personType ()
{
	cout << fName << " " << lName << " object destroyed...\n";
}

// print function
void personType :: print () const
{
	cout << "Name    : " << getFName() << " " << getLName() << endl;
	cout << "Address : " << getAddress() << endl;
	cout << "Gender  : " << getGender() << endl;
	cout << "DOB     : " << getDOB () << endl;
	cout << "Height  : " << getHeight() << " inches\n";
}

// equals strings
bool personType :: equalData (const personType &person2) const
{
	if (fName == person2.fName && lName == person2.lName && address == person2.address &&
		height == person2.height && DOB == person2.DOB && gender == person2.gender)	{
			return true;
	}

	else	{
			return false;
		}
}
