#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <string>
#include <iostream>
using namespace std;

MyString::MyString()
{
	s = new char[1];
	*s = '\0';
	len = 0;
}

MyString& MyString::operator=(const MyString& t)
{
	if (this == &t) { return *this; }
	delete[] s;
	s = new char[t.len + 1];
	strcpy(s, t.s);
	len = t.len;
	return *this;
}
MyString::operator char* ()
{
	char* t = new char[len + 1];
	strcpy(t, s);
	return(t);
}
char& MyString::operator[](int i)
{
	return s[i];
}
MyString::MyString(char* t)
{
	s = new char[strlen(t) + 1];
	*s = '\0';
	strcpy(s, t);
	len = strlen(t);
}
MyString::MyString(const MyString& u)
{
	s = new char[u.len + 1];
	*s = '\0';
	strcpy(s, u.s);
	len = u.len;
}
bool MyString::operator>=(const MyString& t)
{
	return strcmp(s, t.s) >= 0;
}
bool MyString::operator<=(const MyString& t)
{
	return strcmp(s, t.s) <= 0;
}
bool MyString::operator==(const MyString& t) const
{
	return strcmp(s, t.s) == 0;
}
MyString& MyString::operator+=(const MyString& t)
{
	char* p = new char[len + t.len + 1];
	strcmp(p, s);
	strcat(p, t.s);
	delete[] s;
	s = p;
	len += t.len;
	return *this;

}
MyString MyString::operator+(const MyString& a)
{
	MyString p = *this;
	p += a;
	return p;
}
MyString::~MyString()
{
	delete[] s;
}
char& MyString::item(int t)
{
	char err = 'e';
	if (t <= len && t >= 0)
	{
		return s[t];
	}
	else
	{
		cout << "Error.";
		return err;
	}
}
MyString* MyString::copy()
{
	return new MyString(*this);
}
void MyString::assign(const MyString& u)
{
	s = new char[u.len + 1];
	*s = '\0';
	strcpy(s, u.s);
	len = u.len;
}
int MyString::cmp(const MyString& t)
{
	return strcmp(s, t.s);
}
int MyString::equal(const MyString& t)
{
	return strcmp(s, t.s) == 0;
}
int MyString::input()
{
	if (cin.eof())
		return 0;
	char bufl[256];
	cin.getline(bufl, 254, '\n');
	if (strlen(bufl) == 0) cin.getline(bufl, 254, '\n');
	s = new char[strlen(bufl) + 1];
	len = strlen(bufl);
	*s = '\0';
	strcpy(s, bufl);
	return 0;
}
int MyString::output()
{
	cout << s;
	return 0;
}

char* MyString::char_copy()
{
	char* tmp = new char[len + 1];
	strcpy(tmp, s);
	return tmp;
}

ostream& operator<<(ostream& o, const MyString& t)
{
	return o << t.s;
}

istream& operator>>(istream& i, MyString& s)
{
	char buf[256];
	i >> buf;
	s = buf;
	return i;
}