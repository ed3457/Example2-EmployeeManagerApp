#include "Department.h"

void Department::setName(string n)
{
	name = n;
}

string Department::getName()
{
	return name;
}

void Department::setManager(Manager m)
{
	deptManager = m;
}

Manager Department::getManager()
{
	return deptManager;
}

Department::Department(string n, Manager m)
{
	setName(n);
	setManager(m);
}
