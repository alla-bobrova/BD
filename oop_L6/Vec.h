#pragma once

#include "Zakaz.h"
typedef  Zakaz Q;

class vec {
public:
	Q* v;
	int size;

	vec();
	vec(int sz);
	vec(const vec&);
	~vec();

	Q* begin() { return v; };
	Q* end() { return v + size; };
	int getsize() { return size; };
	Q& item(int i);
	void resize(int n);
};
