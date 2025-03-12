#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <iostream>
#include <string>
using namespace std;

class personType
{
	public:
	// Setters
	void setFName (string fN);	
	void setLName (string lN);
	void setAddress ( string addr );
	void setHeight (double ht );
	void setDOB (string bdate);
	void setGender ( char gen);
	void setFullName (string fN, string lN);

	// Getters
	string getFName () const;
	string getLName () const;
	string getAddress () const;
	double getHeight () const;
	string getDOB () const;
	char getGender () const;
	string getFullName () const;

	// Constructors
	personType();
	personType (string firstName, string lastName );
	personType (string firstName, string lastName, string addr, char gen, string bdate, double ht);

	//Destructor
	~personType();

	// Print function 
	void print () const;

	// Equal function
	bool equalData ( const personType &person2 ) const;

	private:
	string fName;
	string lName;
	string fullName;
	string address;
	double height;
	string DOB;
	char gender;
};

#endif
