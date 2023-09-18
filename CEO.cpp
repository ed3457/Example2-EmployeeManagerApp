#include "CEO.h"

int CEO::getStocks()
{
    return stocks;
}

void CEO::setStocks(int s)
{
    stocks = s;
}

CEO::CEO(string s, string n, string dn, float b, int st):Manager(s,n,dn,b)
{
    setStocks(st);
}
