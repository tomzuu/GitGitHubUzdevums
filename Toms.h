#include <iostream>
#include "Name.h"
using namespace std;

class Toms: public Name
{
	public:
		Toms(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
