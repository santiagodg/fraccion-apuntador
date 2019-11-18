#include <iostream>
#include "Fraccion.h"
using namespace std;

int main()
{
	Fraccion *fr;
	fr = new Fraccion(4, 8);
	fr -> toString();
	return 0;
}
