#pragma once

class MyDate
{
	int day, month, year;
	static int daytab[2][13];
	const char* MonthName[13] = { "null","January","February","March","April","May","June","July","August","September","October","November","December" };
	const char* DayNames[8] = { "null","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
public:
	int get_day() { return day; }
	int get_month() { return month; }
	int get_year() { return year; }
	int get_day()const { return day; }
	int get_month()const { return month; }
	int get_year()const { return year; }
	int validate();
	void set_day(int d) {
		int tmp = day;
		day = d;
		if (!validate())
			day = tmp;
	}
	void set_month(int m) {
		int tmp = month;
		month = m;
		if (!validate())
			month = tmp;
	}
	void set_year(int y) {
		int tmp = year;
		year = y;
		if (!validate()) year = tmp;
	}
	long get_AllDays();
	char* get_DayOfWeek();
	void AddDays(int);
	void AddMonths(int);
	void AddYears(int);
	static int vis(int y)
	{
		return ((!(y % 4)) && (y % 100) || (!(y % 400)));
	}
	MyDate();
	~MyDate();
	MyDate(int d, int m, int y);
	MyDate(const MyDate&);
	void assign(const MyDate& t);
	MyDate* copy();
	int equal(const MyDate& t);
	int cmp(const MyDate& t);
	int input();
	int output();
	friend std::ostream& operator<<(std::ostream&, const MyDate&);
	friend std::istream& operator>>(std::istream&, MyDate&);
	MyDate& operator=(const MyDate&);
	bool operator==(const MyDate&) const;
	bool operator>=(const MyDate&);
	bool operator<=(const MyDate&);
	MyDate& operator++(int);
	MyDate& operator--(int);
	MyDate operator+(int);
	MyDate operator-(int);

};
