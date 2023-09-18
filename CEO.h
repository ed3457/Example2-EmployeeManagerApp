#pragma once
#include "Manager.h"
class CEO :
    public Manager
{

private: 
    int stocks;

public:

    int getStocks();

    void setStocks(int s);

    CEO(string s, string n, string dn, float b, int st);
};

