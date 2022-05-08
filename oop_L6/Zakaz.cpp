#include "Zakaz.h"
using namespace std;

Zakaz::Zakaz()
{
	age = 0;
	zaknumber = 0;
	kol = 0;
	price = 0;
}

Zakaz::Zakaz(Zakaz& tmp) // онструктор копировани€
{
	photographer.assign(tmp.photographer);
	service.assign(tmp.service);
	age = tmp.age;
	zaknumber = tmp.zaknumber;
	kol = tmp.kol;
	date.assign(tmp.date);
	firstname.assign(tmp.firstname);
	secondname.assign(tmp.secondname);
	price = tmp.price;
}

Zakaz::Zakaz(MyString _photographer, MyString _service, int _age, int _zaknumber, int _kol, MyString _firstname, MyString _secondname, MyDate _date, double _Price)
{
	photographer.assign(_photographer);
	service.assign(_service);
	age = _age;
	zaknumber = _zaknumber;
	kol = _kol;
	firstname.assign(_firstname);
	secondname.assign(_secondname);
	date.assign(_date);

	price = _Price;
}

int  Zakaz::equal(Zakaz* tmp)						

{
	int e1, e2, e3, e4, e5, e6, e7, e8;
	e1 = photographer.cmp(tmp->photographer);
	e2 = service.cmp(tmp->service);
	e3 = firstname.cmp(tmp->firstname);
	e4 = date.cmp(tmp->date);
	e5 = secondname.cmp(tmp->secondname);
	e6 = 1;
	e7 = 1;
	e8 = 1;

	if (age == tmp->age) {
		e6 = 0;
	}
	if (zaknumber == tmp->zaknumber) {
		e7 = 0;
	}
	if (kol == tmp->kol) {
		e8 = 0;
	}

	return e1 || e2 || e3 || e4 || e5 || e6 || e7 | e8;
}

int  Zakaz::cmp(Zakaz* tmp)
{
	int x = photographer.cmp(tmp->photographer);
	if (x != 0)
	{
		return x;
	}
	else
	{
		return 0;
	}
}

int  Zakaz::input()
{
	setlocale(LC_ALL, "Russian");

	cout << "¬ведите им€ фотографа: ";
	photographer.input();
	cout << "¬ведите название услуги: ";
	service.input();
	cout << "¬ведите возраст фотографа: ";
	cin >> age;
	cout << "¬ведите номер заказа: ";
	cin >> zaknumber;
	cout << "¬ведите количество услуг: ";
	cin >> kol;
	cout << "¬ведите им€ заказчика: ";
	firstname.input();
	cout << "¬ведите фамилию заказчика: ";
	secondname.input();
	cout << "¬ведите день, мес€ц и год выполнени€ заказа: " << endl;
	date.input();
	cout << "¬ведите стоимость заказа: ";
	cin >> price;
	cin.ignore();
	return 1;
}

void  Zakaz::output()
{
	cout.setf(ios::left); 

	cout.width(15);
	photographer.output();
	cout << "|";

	cout.width(30);
	service.output();
	cout << "|";

	cout.width(17);
	cout << age << "|";

	cout.width(14);
	cout << zaknumber << "|";

	cout.width(17);
	cout << kol << "|";

	cout.width(13);
	firstname.output();
	cout << "|";

	cout.width(20);
	secondname.output();
	cout << "|";
	date.output();
	cout << "        |";

	cout.width(16);
	cout << price << endl;
}

int  Zakaz::input(FILE* f)
{
	char b = ' ';
	char* buf = new char[200];
	int i = 0;
	while (1) {
		b = fgetc(f);
		if (b == '\n')
		{
			buf[i] = '\0';
			break;
		}
		else {
			buf[i] = b;
		}
		i++;
	}
	MyString* tmp = new MyString(buf);
	photographer.assign(*tmp);

	delete[] buf;
	delete tmp;

	buf = new char[200];
	i = 0;
	while (1) {
		b = fgetc(f);
		if (b == '\n')
		{
			buf[i] = '\0';
			break;
		}
		else {
			buf[i] = b;
		}
		i++;
	}
	tmp = new MyString(buf);
	service.assign(*tmp);

	delete[] buf;
	delete tmp;

	buf = new char[200];
	age = stoi(fgets(buf, 18, f));
	delete[] buf;

	buf = new char[200];
	zaknumber = stoi(fgets(buf, 18, f));
	delete[] buf;

	buf = new char[200];
	kol = stoi(fgets(buf, 18, f));
	delete[] buf;

	buf = new char[200];
	i = 0;
	while (1) {
		b = fgetc(f);
		if (b == '\n')
		{
			buf[i] = '\0';
			break;
		}
		else {
			buf[i] = b;
		}
		i++;
	}
	tmp = new MyString(buf);
	firstname.assign(*tmp);
	delete[] buf;
	delete tmp;

	buf = new char[200];
	i = 0;
	while (1) {
		b = fgetc(f);
		if (b == '\n')
		{
			buf[i] = '\0';
			break;
		}
		else {
			buf[i] = b;
		}
		i++;
	}
	tmp = new MyString(buf);
	secondname.assign(*tmp);
	delete[] buf;
	delete tmp;

	buf = new char[200];
	int D = stoi(fgets(buf, 18, f));

	delete[] buf;

	buf = new char[200];
	int M = stoi(fgets(buf, 18, f));
	delete[] buf;

	buf = new char[200];
	int Y = stoi(fgets(buf, 18, f));
	delete[] buf;

	MyDate* date_tmp = new MyDate(D, M, Y);
	date.assign(*date_tmp);
	delete date_tmp;

	buf = new char[200];
	price = stod(fgets(buf, 18, f));
	delete[] buf;

	fclose(f);
	return 0;
}

int  Zakaz::output(FILE* f)
{
	char* tmp = photographer.char_copy();
	fputs(tmp, f);
	fputc('\n', f);
	delete[] tmp;

	tmp = service.char_copy();
	fputs(tmp, f);
	fputc('\n', f);
	delete[] tmp;

	char s1[200];
	sprintf(s1, "%d", age);
	fputs(s1, f);
	fputc('\n', f);

	char s2[200];
	sprintf(s2, "%d", zaknumber);
	fputs(s2, f);
	fputc('\n', f);

	char s3[200];
	sprintf(s3, "%d", kol);
	fputs(s3, f);
	fputc('\n', f);

	tmp = firstname.char_copy();
	fputs(tmp, f);
	fputc('\n', f);
	delete[] tmp;

	tmp = secondname.char_copy();
	fputs(tmp, f);
	fputc('\n', f);
	delete[] tmp;

	char s4[200];
	sprintf(s4, "%d", date.get_day());
	fputs(s4, f);
	fputc('\n', f);

	char s5[200];
	sprintf(s5, "%d", date.get_month());
	fputs(s5, f);
	fputc('\n', f);

	char s6[200];
	sprintf(s6, "%d", date.get_year());
	fputs(s6, f);
	fputc('\n', f);

	char s7[200];
	sprintf(s7, "%Lg", price);
	fputs(s7, f);
	fputc('\n', f);

	fclose(f);
	return 0;
}

std::ostream& operator<<(std::ostream& o, const  Zakaz& t)
{
	o.setf(ios::left); 

	o.width(15);
	o << t.photographer;
	o << "|";

	o.width(30);
	o << t.service;
	o << "|";

	o.width(17);
	o << t.age << "|";

	o.width(14);
	o << t.zaknumber << "|";

	o.width(17);
	o << t.kol << "|";

	o.width(13);
	o << t.firstname;
	o << "|";

	o.width(20);
	o << t.secondname;
	o << "|";
	o << t.date;
	o << "        |";

	o.width(16);
	o << t.price << endl;
	return o;
}

std::istream& operator>>(std::istream& i, Zakaz& t)
{
	cout << "¬ведите им€ фотографа: ";
	i >> t.photographer;
	cout << "¬ведите название услуги: ";
	i >> t.service;
	cout << "¬ведите возраст фотографа: ";
	i >> t.age;
	cout << "¬ведите номер заказа: ";
	i >> t.zaknumber;
	cout << "¬ведите количество услуг: ";
	i >> t.kol;
	cout << "¬ведите им€ заказчика: ";
	i >> t.firstname;
	cout << "¬ведите фамилию заказчика: ";
	i >> t.secondname;
	cout << "¬ведите день, мес€ц и год выполнени€ заказа: " << endl;
	i >> t.date;
	cout << "¬ведите стоимость заказа: ";
	i >> t.price;
	return i;
}