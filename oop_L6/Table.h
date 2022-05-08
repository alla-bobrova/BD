#pragma once
#include "Zakaz.h"
#include "Vec.h"

class Table
{
public:
	vec v;
	Zakaz* cur;
	Table(int sz);
	Table();
	int c;
	~Table();
	Zakaz* begin();
	Zakaz* end();
	int length();
	Zakaz* insert(Zakaz* obj);
	int RemoveI(int i);
	int remove(Zakaz* obj);
	int find(Zakaz* obj);
	int replace(Zakaz* obj_o, Zakaz* obj_n);
	void sort();
	void clear();
	void output();
	bool chk(Zakaz* obj1, Zakaz* obj2);
	Q getitem(int n) { return v.item(n); }
	int get_count() { return c; }
};