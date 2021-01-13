
//////////////////////////////////////////////////////////////////////////////
// dod.cpp

#include "dod.h"
#include "var.h" 
#include <iomanip>
#include <cmath>
using namespace nsVar;
void nsDod::dod() {
	a *= (pow(x, 2 * n + 1) / (2 * n + 1)) / (pow(x, 2 * n - 1) / (2 * n - 1)); // доданок домножується на
} 