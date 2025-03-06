#include<iostream>
#include "personType.h"

using namespace std;

void professorType:: setEmpID (string EmpID)
{
	employeeID = EmpID;
}

void professorType:: setDep (string dpt)
{
	department = dpt;
}

void professorType:: setDegree (string EmpID)
{
	degree = dg;
}

string professorType :: getEmpID () const
{
	return employeeID;
}

string professorType :: getDep () const
{
	return department;
}

string professorType :: getDegree () const
{
	return degree;
}


void professorType :: print () const
{
	personType::print();
	cout << "Employee ID : " << getEmpID();
	cout << "Department  : " << getDep();
	cout << "Degree      : " << getDegree();

}


bool professorType :: compareProfessor (const professorType &anotherProf ) const
{
	if (personType::equalData (anotherProf) && employeeID == anotherProf.employeeID && 
			department == anotherProf.department && degree == anotherProf.degree){

		return true;
	}
	else
	return false;
}


professorType::professorType()
{
	employeeID = "";
	department = "";
	degree = "";
}

professorType:: professorType (string fn, string ln)
					: personType (fn, ln)
{
// empty
}

professorType :: professorType (string fn, string ln, string addr, double ht, string bdate,
										char gender, string id, string dpt, string dg)
					: personType (fn, ln, addr, gender, bdate, ht)
{
	employeeID = id;
	department = dpt;
	degree = dg;
}
