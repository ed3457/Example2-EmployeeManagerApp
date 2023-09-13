#pragma once
#include <string>
using namespace std; 
class Employee
{
private:
	string name;
	string ssn;
	string deptName;

public:
	string getName();
	void setName(string n);

	string getSSN();

	string getDeptName();
	void setDeptName(string dn);

	
	Employee(string s, string n, string dn);

};

