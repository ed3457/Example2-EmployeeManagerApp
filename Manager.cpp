#include "Manager.h"

void Manager::setBonus(float b)
{
	bonus = b;
}

float Manager::getBonus()
{
	return bonus;
}

Manager::Manager(string s, string n, string dn, float b):Employee(s,n,dn)
{
	setBonus(b);

}

void Manager::printInfo()
{
	cout << "Manager Name:" << getName() << endl;
	cout << "Manager Dept:" << getDeptName() << endl;
	cout << "Manager SSN:" << getSSN() << endl;
	cout << "Manager Bonus" << getBonus() << endl;


}
