#include "msvc-compat.h" 

double log2(double n)
{
	return log(n)/log((double)2.0);
}