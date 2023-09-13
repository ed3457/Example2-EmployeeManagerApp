#include "Employee.h"
#pragma once
class Manager :public Employee
{
private:
	float bonus;

public:
	void setBonus(float b);
	float getBonus();
	Manager(string s, string n, string dn,float b);



};

