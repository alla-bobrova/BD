#include <iostream>
#include "Vec.h"

using namespace std;
vec::vec()
{
	v = new Q[size = 1];
}

vec::vec(int sz)
{
	v = new Q[size = sz];
}

vec::vec(const vec& v1)
{
	v = new Q[size = v1.size];
	for (int i = 0; i < size; i++) {
		v[i] = v1.v[i];
	}
}

vec::~vec()
{
	delete v;
}

Q& vec::item(int i)
{
	if (i >= 0 && i < size) { return v[i]; }
	else cout << "ind error"; exit(0);
}

void vec::resize(int n)
{
	Q* p = new Q[n];
	Q* w = v;
	for (Q* cur = p; cur < p + size; cur++)
	{
		*cur = *w++;
	}
	delete[] v;
	v = p;
	size = n;
}
