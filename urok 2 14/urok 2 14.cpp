#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
//class Number
//{
//public:
//	int n_id;
//	int m_id;
//	void set(int n,int m)
//	{
//		m_id = n ;
//		n_id = m ;
//	}
//	void print()
//	{
//		std::cout << "Number: " << m_id << " " << n_id << std::endl;
//	}
//};
class Number
{
public:
	float n_id;
	float m_id;
	float c_id;
	void setValues(float n, float m, float c)
	{
		m_id = n;
		n_id = m;
		c_id= c;
	}
	void print()
	{
		std::cout << "Number: " << m_id << " " << n_id << " " << c_id << std::endl;
	}
	bool isEqual(Number point1)
	{
		if (n_id == point1.n_id && m_id == point1.m_id && c_id == point1.c_id)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bool isBolsheiliravni(Number point1)
	{
		if (n_id == point1.n_id || m_id == point1.m_id || c_id == point1.c_id)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bool isBolshe(Number point1)
	{
		if (n_id > point1.n_id && m_id > point1.m_id && c_id > point1.c_id)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
class Fraction
{
public:
	int numerator;
	int dernumerator;
	void add(int n, int m,int n1,int m1)
	{
		numerator = (n1 * m) + (n * m1);
		dernumerator = (m * m1);
	}
	void sub(int n, int m, int n1, int m1)
	{
		numerator = (n * m1) - (n1 * m);
		dernumerator = (m * m1);
	}
	void milt(int n, int m, int n1, int m1)
	{
		numerator = n1 * n;
		dernumerator = m * m1;
	}
	void div(int n, int m, int n1, int m1)
	{
		numerator = n * m1;
		dernumerator = n1 * m;
	}
	void print()
	{
		std::cout << numerator << "/" << dernumerator << std::endl;
	}
};
class Emploee
{
public:
	std::string m_name;
	int m_id;
	double m_wage;
	void print()
	{
		std::cout << "Name: " << m_name << "\Id " << m_id << "\nWage: $" << m_wage << std::endl;
	}
};
class Date
{
	int m_day;
	int m_mounth;
	int m_year;
public:
	void setDate(int day, int mounth, int year)
	{
		m_day=day;
		m_mounth = mounth;
		m_year = year;
	}
	void print()
	{
		std::cout << m_day << "/" << m_mounth << "/" << m_year << std::endl;
	}
	void copyFrom(const Date &d)
	{
		m_day = d.m_day;
		m_mounth = d.m_mounth;
		m_year = d.m_year;
	}
};
int main()
{
	srand(time(NULL));
	/*Fraction n1;
	n1.add(1, 3, 1, 7);
	n1.print();
	n1.sub(1, 3, 1, 7);
	n1.print();
	n1.milt(1, 3, 1, 7);
	n1.print();
	n1.div(1, 3, 1, 7);
	n1.print();*/


	/*Date date;
	date.setDate(25, 10, 2021);
	Date copy;
	copy.copyFrom(date);
	copy.print();*/


	Number point;
	point.setValues(3.0, 4.0, 5.0);
	point.print();
	Number point1;
	point1.setValues(10.0, 9.0, 11.0);
	//if (point.isEqual(point1))
	//{
	//	cout << "ravni";
	//}
	//else
	//{
	//	cout << "neravni";
	//}
	Number point3;
	point3.setValues(7.0, 8.0, 9.0);
	if (point.isEqual(point3))
	{
		cout << "ravni" << " ";
	}
	else
	{
		cout << "neravni" << " ";
		if (point.isBolshe(point3))
		{
			cout << "bolshe" << " ";
			if (point.isBolsheiliravni(point3))
			{
				cout << " ili ravni" << " ";
			}

		}
		else
		{
			cout << "menshi" << " ";
			if (point.isBolsheiliravni(point3))
			{
				cout << " ili ravni" << " ";
			}
		}
	}
	
	return 0;
}