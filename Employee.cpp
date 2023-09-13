#include "Employee.h"

void Employee::setName(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

string Employee::getSSN()
{
	return ssn;
}

void Employee::setDeptName(string dn)
{
	deptName = dn;

}


Employee::Employee(string s, string n, string dn)
{
	ssn = s;

	setName(n);
	setDeptName(dn);
}

string Employee::getDeptName()
{
	return deptName;
}