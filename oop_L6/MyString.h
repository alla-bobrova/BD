#pragma once

#include <string>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
class MyString {
	char* s;
	int len;
public:
	MyString();
	MyString& operator=(const MyString&);
	operator char* ();
	char& operator[](int i);
	friend std::ostream& operator<<(std::ostream&, const MyString&);
	friend std::istream& operator>>(std::istream&, MyString&);
	bool operator >= (const MyString&);
	bool operator <= (const MyString&);
	bool operator==(const MyString&) const;
	MyString& operator+=(const MyString&);
	MyString operator+(const MyString&);
	~MyString();
	char& item(int);
	MyString* copy();
	char* returnch() { char* t = s; return t; }
	void assign(const MyString&);
	int cmp(const MyString&);
	int equal(const MyString&);
	int input();
	int output();
	char* char_copy();
	MyString(const MyString&);
	MyString(char*);
};