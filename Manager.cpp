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
