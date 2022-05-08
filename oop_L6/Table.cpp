#include "Table.h"
using namespace std;

Table::Table() {
	c = 0;
	cur = v.begin();
}

Table::Table(int sz) :v(sz) {
	cur = v.begin();
}

Table::~Table()
{
}

Zakaz* Table::begin()
{
	return v.begin();
}

Zakaz* Table::end()
{
	return v.end();
}

int Table::length()
{
	return v.getsize();
}

Zakaz* Table::insert(Zakaz* obj)
{
	if (get_count() < this->length())
	{
		*cur = *obj;
		c++;
		cur = begin() + c;
		return cur;
	}
	else
	{
		v.resize(v.getsize() + 10);
		cur = begin();
		*cur = *obj;
		c++;
		cur = begin() + c;
		return cur;
	}
}

int Table::RemoveI(int i)
{
	if ((i >= 0) && (get_count() - 1 != i))   
	{
		c--;
		Zakaz* tmp;
		tmp = begin() + i;
		*(begin() + i) = *(begin() + c);
		cur = begin() + c;
		return 1;
	}
	else
	{
		if (i >= 0)				
		{
			c--;
			cur = begin() + c;
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

int Table::remove(Zakaz* obj)
{
	int count = 0;
	for (int i = get_count() - 1; i > -1; i--)	
	{
		if (v.item(i).equal(obj) == 0)
		{
			RemoveI(i);
			count++;
		}
	}
	return count;
}

int Table::find(Zakaz* obj)
{
	for (int i = 0; i < get_count(); i++)
	{
		if (v.item(i).equal(obj) == 0)
		{
			return i;
		}
	}
	return -1;
}

int Table::replace(Zakaz* obj_o, Zakaz* obj_n)
{
	int count = 0;
	for (int i = 0; i < get_count(); i++)
	{
		if (v.item(i).equal(obj_o) == 0)
		{
			Zakaz* tmp = new Zakaz(*obj_n);
			*(begin() + i) = *tmp;
			count++;
		}
	}
	return count;
}

void Table::sort()
{
	for (int i = 0; i < get_count() - 1; i++)
	{
		for (int j = get_count() - 1; j > i; j--)
		{
			if (v.item(j - 1).cmp(begin() + j) > 0)
			{
				Zakaz* tmp = new Zakaz(*(begin() + j - 1));
				*(begin() + j - 1) = *(begin() + j);
				*(begin() + j) = *tmp;
			}
		}
	}
}

void Table::clear()
{
	Zakaz* tmp = new Zakaz;
	for (int i = 0; i < length(); i++)
	{
		*(begin() + i) = *tmp;
	}
	c = 0;
	cur = v.begin();
}

void Table::output()
{
	cout << endl;
	if (this->length() > 0)
	{
		setlocale(LC_ALL, "Russian");

		cout.setf(ios::left);

		cout.width(15);
		cout << "Имя фотографа" << "|";

		cout.width(30);
		cout << "Название услуги" << "|";

		cout.width(17);
		cout << "Возраст фотографа" << "|";

		cout.width(14);
		cout << "Номер заказа" << "|";

		cout.width(17);
		cout << "Количество услуг" << "|";

		cout.width(13);
		cout << "Имя заказчика" << "|";

		cout.width(20);
		cout << "Фамилия заказчика" << "|";

		cout.width(40);
		cout << "Дата выполнения заказа " << "|";

		cout.width(16);
		cout << "Стоимость заказа" << endl;
		for (int i = 0; i < get_count(); i++)
		{
			v.item(i).output();
		}
	}
	else
	{
		cout << "Таблица пуста!" << endl;
	}
}

bool Table::chk(Zakaz* obj1, Zakaz* obj2)
{
	if (obj1->equal(obj2))
	{
		return true;
	}
	return false;

}