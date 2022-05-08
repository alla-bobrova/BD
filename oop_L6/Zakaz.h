#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include "MyString.h"
#include "MyDate.h"
class Zakaz
{
public:
	MyString photographer;
	MyString service;
	int age;
	int zaknumber;
	int kol;
	MyString firstname;
	MyString secondname;
	MyDate date;
	double price;

	Zakaz();				      //Конструктор по умолчанию
	Zakaz(Zakaz& tmp);			 //Конструктор копирования
	Zakaz(MyString _photographer, MyString _service, int _age, int _zaknumber, int _kol, MyString _firstname, MyString _secondname, MyDate date, double _price);							//Конструктор инициализатор
	~Zakaz() {};				//Деструктор
	int equal(Zakaz* tmp);
	int cmp(Zakaz* tmp);

	int input();
	void output();

	friend std::ostream& operator<<(std::ostream&, const  Zakaz&);
	friend std::istream& operator>>(std::istream&, Zakaz&);

	int input(FILE* f);
	int output(FILE* f);
};
