#include <iostream>
#include "Name.h"
#include "Toms.h"

using namespace std;

Toms::Toms(string n)
{
	name=n;
}

void Toms::setName(string n)
{
	name=n;
}

void Toms::Print() const
{
	cout << name << endl;
}


