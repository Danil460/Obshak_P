#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <memory>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <algorithm>
#pragma warning (disable:4996)
using namespace std;

//
//const int maxNameLength = 20;
//const int markCount = 3;
//
//struct Student {
//	char name[maxNameLength];
//	int marks[markCount];
//};
//
//void initStudent(Student& student, const char* name, const int marks[])
//{
//	strcpy_s(student.name, maxNameLength, name);
//	for (int i = 0; i < markCount; i++) {
//		student.marks[i] = marks[i];
//	}
//}
//
//double averMark(Student student) {
//	double sum = 0;
//	for (int i = 0; i < markCount; i++) {
//		sum += student.marks[i];
//	}
//	return sum / markCount;
//}
//
//void printStudent(Student student) {
//	cout << student.name << endl;
//	cout << "Оценки:";
//	for (int i = 0; i < markCount; i++) {
//		//setw - указывает сколько будет занимать символов след значение
//		cout<<setw(4)<<student.marks[i];
//	}
//	cout << endl;
//}
//int main() {
//	setlocale(LC_ALL, "");
//	cout << "Успеваемость студента"<<endl<<endl;
//	Student student;
//	const char* studentName{ "Петров А.О." };
//	int studentMarks[]{ 4,4,3 };
//	initStudent(student, studentName, studentMarks);
//	printStudent(student);
//	//fixed - выводит числа с плавающей точкой с фиксированной точностью
//	//setprecision(2) - задает точность
//	cout << "Средний балл:" << fixed << setprecision(2) << averMark(student) << endl;
//	//Ждет символ от пользователя перед закрытием программы
//	_getch();
//}

/*
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

const int maxNameLength = 20;
const int markCount = 3;

class Student {
	char name[maxNameLength];
	int marks[markCount];
public:

	//Конструктор: создание объекта студент
	Student(const char* name, const int marks[]) {
		strcpy_s(Student::name, maxNameLength, name);
			for (int i = 0; i < markCount; i++) {
				Student::marks[i] = marks[i];
			}
	}
	double averMark() {
			double sum = 0;
			for (int i = 0; i < markCount; i++) {
				sum += marks[i];
			}
			return sum / markCount;
		}
	void print() {
	cout << name << endl;
	cout << "Оценки:";
	for (int i = 0; i < markCount; i++) {
		//setw - указывает сколько будет занимать символов след значение
		cout<<setw(4)<<marks[i];
	}
	cout << endl;
}
	void printAver() {
		cout << "Средний балл:" << fixed << setprecision(2) << averMark() << endl;
	}
};
int main() {
	setlocale(LC_ALL, "");
	cout << "Успеваемость студента"<<endl<<endl;
	Student student{ "Петров А.О.",new int[3] {4,4,3} };
	student.print();
	student.printAver();
	cout<<student.name;
}*/
/*
#include <iostream>
#include <conio.h>
#include <iomanip>
#include "Student.h"
using namespace std;
//class - описание, набор правил, схема нашего объекта
//private - делает члены класса закрытыми,то есть доступ к ним возможен
// только внутри класса
//protected - открывает доступ к членам класса только для дочерних классов
//class Student {
////private:
//
//public://Делает члены класса открытыми
//	char name[21];
//	int marks[3];
//	//метод класса
//	double getAver();
//};

//Если вынести метод класса из тела класса, тогда необходимо указывать то что данный
//метод относится к  классу используя Указание имени класса перед именем функции

// ::- операция разрешения области действия
//double Student::getAver() {
//	double sum = 0;
//	for (int i = 0; i < 3; i++) {
//		sum += marks[i];
//	}
//	return sum / 3;
//}

int main() {
	setlocale(LC_ALL, "");
	cout << "Успеваемость студента" << endl;
	//Объектов у класса может быть сколько угодно, это переменные которые хранят
	// конкретные данные
	const int size = 2;
	Student* students = new Student[size]{
		{"Студент 1", 3, new int[3] {10,10,9}},
		{"Студент 2", 3, new int[3] {8,10,8}}
	};
	double sum = 0;
	for (Student* stud = students;
		stud < students + size; stud++) {
		double aver = stud->getAver();
		cout << "Средний балл "<<stud->getName()<<" : " << fixed << setprecision(2) << aver << endl;
		sum += aver;
	}
	cout << "Средний балл по группе : " << fixed << setprecision(2) << sum/size << endl;
	delete[]students;

		_getch();

}
//Понятие аксессора, инспектора, модификатора

//Встроенные inline- методы в классах*/


/*
int num1 = 0; //копирующая инициализация
int num2(42);//прямая инициализация
int num3{ 33 };//унифицированная инициализация(тек)
*/
/*
#include <iostream>
using namespace std;
struct Point {
	int x;
	int y;
};
int main() {
	int answer{ 42 };
	const float goodtemp{ 36.6 };
	int grades[4]{ 3,5,4,4 };
	int matrix[2][2]{ {1,2},{3,4} };
	int* dataPtr{ nullptr };
	char* str{ new char[14] {"Hello,world!"} };
	int& reference{ answer };
	Point point{ -10,6 };

}*/

/*
#include <iostream>
using namespace std;

class Point {
	int x{-100};
	int y{-100};
public:
	Point() : x{ 0 }, y{0} {cout << 1;}
	Point(int pX, int pY) :x{ pX }, y{ pY } { cout << 2;}
	int getX() { return x; };
	int getY() { return y; };
};

class Reactangle {
	Point leftUpper;
	int width;
	int height;
public:
	Reactangle() :
		leftUpper{ 10,10 }, width{ 0 }, height{ 0 } {
		cout << 1;
	}
	Reactangle(int x, int y, int widthP, int heightP) :
		leftUpper{ x,y }, width{ widthP }, height{ heightP } {
		cout << 2;
	}
};

int main() {
	//Reactangle p1;
	//Reactangle p2(42, 33,12, 52);
	Point p1;
	cout << p1.getX() << endl;
	cout << p1.getY() << endl;
	Point p2{10,20};
	cout << p2.getX() << endl;
	cout << p2.getY() << endl;
}*/

/*
//Делегирование конструкторов
#include <iostream>
//using namespace std;
#include <iostream>

class Person
{
	char* name;
	uint16_t age;
	uint32_t socialId;
public:
	Person(const char* nameP, uint16_t ageP, uint32_t socialIdP)
		: name{ nameP ? new char[strlen(nameP) + 1] : nullptr },
		age{ ageP },
		socialId{ socialIdP }
	{
		if (name)
		{
			strcpy_s(name, strlen(nameP) + 1, nameP);
		}
		std::cout << "Person constructed\n";
	}

	Person() : Person{ nullptr, 0, 0 } {}
	/* Конструктор по умолчанию делегирует (перенаправляет) свою работу
	конструктору с параметрами, указывая желаемые параметры.

	Person(const char* nameP) : Person{ nameP, 0, 0 } {}

	Person(const char* nameP, uint16_t ageP) : Person{ nameP, ageP, 0 } {}

	~Person()
	{
		delete[] name;
		std::cout << "Person destructed\n";
	}

	void print()
	{
		if (name)
		{
			std::cout << "Name: " << name << '\n' <<
				"Age: " << age << '\n' <<
				"SocialID: " << socialId << '\n';
		}
		else
		{
			std::cout << "[empty person]" << '\n';
		}
	}
};

int main()
{
	Person nobody;
	nobody.print();

	Person person1{ "Sidor Sidorov" };
	person1.print();

	Person person2{ "Ivan Ivanov", 25 };
	person2.print();

	Person person3{ "Petr Petrov", 42, 123456789 };
	person3.print();
	return 0;
}*/
//Статические члены класса:
//переменные и функции

/*
#include <iostream>

// упрощенный класс Point с public полями
class Point
{
public:

	int x;
	int y;
	static const int maxX;
	Point(int x1, int y1) :x{ x1 }, y{ y1 } {}
};

const int Point::maxX{ 0};

int main()
{

	// Выделяется и инициализируется память под "персональный" x и y для pointOne
	Point pointOne{ 1,1 };
	//pointOne.maxX= 10 ;
	// Выделяется инициализируется память под "персональный" x и y для pointTwo
	Point pointTwo{ 2,2 };
	std::cout << pointTwo.maxX;
	return 0;
}
*/

/*
#include <iostream>
#include <ctime> // для функции time

class NumberStorage
{
	int* storage;
	uint32_t elementsCount;
	static uint32_t usedMemory;
public:
	NumberStorage(uint32_t elementsCountP)
		:storage{ new int[elementsCountP] }, elementsCount{ elementsCountP }
	{
		uint32_t used{ elementsCount * sizeof(int) };
		usedMemory += used;
		std::cout << "NumberStorage: additional " << used
			<< " bytes used. Total: " << usedMemory << '\n';
		for (uint32_t i{ 0 }; i < elementsCount; ++i)
		{
			storage[i] = rand() % 10;
		}
	}
	~NumberStorage()
	{
		uint32_t freed{ elementsCount * sizeof(int) };
		delete[] storage;
		usedMemory -= freed;
		std::cout << "NumberStorage: freed " << freed
			<< " bytes. Total used: " << usedMemory << '\n';

	}
	void print()
	{
		for (uint32_t i{ 0 }; i < elementsCount; ++i)
		{
			std::cout << storage[i] << ' ';
		}
		std::cout << '\n';
	}

	static uint32_t getUsedMemory()
	{
		return usedMemory;
	}
};

uint32_t NumberStorage::usedMemory{ 0 };

int main()
{
	// Задаем номер последовательности случайных чисел исходя из текущего времени.
	srand(time(nullptr));

	std::cout << "Total memory used: " << NumberStorage::getUsedMemory() << '\n';

	const int poolSize{ 3 };
	NumberStorage pool[poolSize]{ rand() % 101,rand() % 101,rand() % 101 };

	std::cout << "Total memory used: " << NumberStorage::getUsedMemory() << '\n';
	return 0;
}
//Статическая функция член-класса обращется только к статическим полям класса
//Для обращения к статическому методу, указывается название класса и
// вызывается сам метод
// static - указывает что создается либо статичес кий метод, либо переменная
//Создаются если нужно общее поле для всех экземпляров

*/

//Указатель this 
/*
#include <iostream>

class Date
{
	int day;
	int month;
	int year;
public:
	Date(int dayP, int monthP, int yearP)
		:day{ dayP }, month{ monthP }, year{ yearP }
	{}
	Date() : Date(1, 1, 1970) {}
	void print() {
		std::cout << this->day << '.' << this->month << '.' << this->year << '\n';
	}
	void setDay(int day) {
		this->day = day;
	}
};

int main()
{

	Date date1{ 1,1,2020 };


	Date date2{ 24,07,1976 };


	date1.print();
	date2.print();

	return 0;
}*/

//Оператор this - это оператор который помогает избавиться от двойственности,
//и явно будет указывать на какой объект класса мы с вами ссылаемся



//Конструктор копирования - специальный конструктор, служащий для 
// копирования существующего экземпляра класса в новый объект того же
//класса
//Срабатывает так же как и конструктор по умолчанию, тоесть создается
//автоматические если он не определен в класс
//Имя_класса(const Имя_класса& перем)
//Элизия - оптимизация лишнего создания объекта с его последующим
//  копированием
/*#include <iostream>

class Fraction
{
	int numerator;
	int denominator;
public:
	Fraction(int num, int denom)
		: numerator{ num }, denominator{ denom }
	{
		std::cout << "Fraction constructed for " << this << '\n';
	}
	Fraction() : Fraction(1, 1) {}
	/*Fraction(Fraction obj) : numerator{obj.numerator},
		denominator{ obj.denominator } {
		std::cout << "Copy construct" << this << "\n";
	}
	Fraction(const Fraction& obj) : numerator{obj.numerator},
		denominator{obj.denominator} {
		std::cout << "Copy construct" << this << "\n";
	}

	~Fraction() { std::cout << "Fraction destructed for " << this << '\n'; }
	void print()
	{
		std::cout << '(' << numerator << " / " << denominator << ")";
	}
};

int main()
{
	Fraction a{ Fraction{4,6} };
	std::cout << "a = ";
	a.print();
	/*Создаем и инициализируем значениями числителя и знаменателя экземпляр Fraction - a*/
	//Fraction a{ 2,3 };
	/*Создаем и инициализируем текущим значением экземпляра a, экземпляр Fraction - b*/
/*	Fraction b{a};


	std::cout << "\nb = ";
	b.print();
	std::cout << '\n'

	return 0;
};*/
/*
#include <iostream>
/* Внимание!Программа завершается аварийно! Для этого примера это нормально.
class DynArray
{
	int* arr;
	int size;
public:
	DynArray(int sizeP)
		: arr{ new int[sizeP] {} }, size{ sizeP }
	{
		std::cout << "DynArr constructed for " << size << " elements, for " << this << '\n';
	}
	DynArray() : DynArray(5) {}
	/* Неверно при динамическом выделении памяти
	DynArray(const DynArray& object)
		: arr{ object.arr }, size{ object.size }
	{
		std::cout << "DynArr copy constructed for " << size << " elements, for " << this << '\n';
	}
	DynArray(const DynArray& object)
		: arr{ new int [object.size]}, size{object.size}
	{
		for (int i = 0; i < size; i++) {
			arr[i] = object.arr[i];
		}
		std::cout << "DynArr copy constructed for " << size << " elements, for " << this << '\n';
	}
	int getElem(int idx) { return arr[idx]; }
	void setElem(int idx, int val) { arr[idx] = val; }
	void print();
	void randomize();
	~DynArray()
	{
		std::cout << "Try to free memory " << arr << "\n";
		delete[] arr; std::cout << "DynArr destructed for " << size << " elements, for " << this << '\n';
	}
};

void DynArray::print()
{
	for (int i{ 0 }; i < size; ++i)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}

void DynArray::randomize()
{
	for (int i{ 0 }; i < size; ++i)
	{
		arr[i] = rand() % 10;
	}
}


int main()
{
	DynArray ar1{ 10 };
	ar1.randomize();
	std::cout << "ar1 elements: ";
	ar1.print();

	DynArray ar2{ ar1 };
	std::cout << "ar2 elements: ";
	ar2.print();

	return 0;
}*/
//Константные методы
/*
#include <iostream>
using namespace std;
class Date {
public:
	int month;
	int day;
	int year;

	Date(int a, int b, int c)  :day{ a }, month{ b }, year{ c } {};
	int getDay() const { return day; }
	int getDay() { return day; }
	~Date() {
		cout << "destruct";
	}
};
//Ключевое слово const после закрывающей скобки означет что функция не изменяет
//значение объекта
int main() {
	const Date electionDay{ 11,03,2020 };
	int day = electionDay.getDay();
	cout << day;
}*/
/*
#include <iostream>
#include <stdio.h>
class Date
{
private:
	const int baseYear;
	int& currentYear;
	int day;
	int month;
	int year;
public:
	Date(int currYear) :baseYear{ 2000 }, currentYear{ currYear } {}
	void setDay(int value)
	{
		day = value;
	}

	int getDay() const
	{
		//return day++;     ошибка при компиляции
		return day;
	}
};

int main()
{
	Date aDate(2024);
		//aDate.setDay(Date& const this,10);
		aDate.setDay(10);
	std::cout << aDate.getDay() << std::endl;

	getchar();
	return 0;
}*/
//Константы как члены класса
//Инициализируется только в момент создания объекта (в конструкторе), 
// и в других случаях, присвоить значение невозможно
/*#include <iostream>
#include <conio.h>
using namespace std;

class Account
{
private:
	double sum;
	const double rate;
public:
	Account(double Rate, double Sum) :rate{Rate}
	{
		this->sum = Sum;
	}

	double getRate() const
	{
		return rate;
	}

	double getIncome()
	{
		return sum * rate / 100;
	}

	double getIncome() const
	{
		return sum * rate / 100;
	}

	double getSum()
	{
		return sum;
	}
	double getSum() const
	{
		return sum;
	}

	double setSum()
	{
		sum += getIncome();
		return sum;
	}
};

int main()
{
	Account account1(5, 2000);
	const Account account2(8, 5000);

	account1.getRate();
	account2.getRate();     //  все ОК

	account1.getSum();
	account2.getSum();

	account1.getIncome();
	account2.getIncome();   //  все ОК

	account1.setSum();

	_getch();
	return 0;
}

*/
/*
#include <iostream>
#include <stdio.h>

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date(int day, int month, int year)
		: day{ day }, month{ month }, year{ year }
	{}
	Date(int year) : Date(1, 1, year)
	{}
	friend void displayDate(Date date);
};

void displayDate(Date date)
{
	std::cout << date.day << "." << date.month << "." << date.year << std::endl;
}

Date baseDate()
{
	return 2000;
}

int main()
{
	displayDate(2020);

	Date date = 2010;
	displayDate(date);

	Date date2000 = baseDate();
	displayDate(date2000);

	getchar();
	return 0;
}*/

/*
#include <iostream>
#include <conio.h>
using namespace std;

class Array
{
	int size;
	int* array;
public:
	explicit Array(int size = 10);
	~Array();
	int getSize() const;
	int getValue(int index) const;
	void setValue(int index, int value);
	void display(int index) const;
};

Array::Array(int size)
{
	Array::size = size;
	array = new int[size];
}

Array::~Array()
{
	delete[] array;
}

int Array::getSize() const
{
	return size;
}

int Array::getValue(int index) const
{
	return array[index];
}

void Array::setValue(int index, int value)
{
	array[index] = value;
}

void Array::display(int index) const
{
	cout << array[index] << " ";
}

void display(const Array& array)
{
	for (int i = 0; i < array.getSize(); i++)
	{
		array.display(i);
	}
	cout << endl;
}

int main()
{
	cout << "Dynamic integer array" << endl;
	int size = 4;
	Array array(size);

	for (int i = 0; i < size; i++)
	{
		array.setValue(i, size - i);
	}
	display(array);

	cout << "!!!" << endl;
	//display(3);

	//Array array10 = 10;
	Array array10{ 10 };

	_getch();
	return 0;
}

*/

/*Перегрузка операторов*/
/*
#include <iostream>
#include <conio.h>
using namespace std;

class Point
{
private:
	double x;
	double y;
public:
	Point(double x, double y) : x{ x }, y{ y }
	{
	}

	Point() : Point{ 0, 0 }
	{
	}

	void display() const
	{
		cout << "(" << x << "," << y << ")";
	}

	void read()
	{
		cin >> x;
		cin.ignore(1); // пропуск запятой между x и y
		cin >> y;
	}

	static bool isEqual(const Point& point1, const Point& point2)
	{
		return point1.x == point2.x && point1.y == point2.y;
	}

	static bool isLarger(const Point& point1, const Point& point2)
	{
		return length(point1) > length(point2);
	}

	static Point add(const Point& point1, const Point& point2)
	{
		return Point(point1.x + point2.x, point1.y + point2.y);
	}

	static Point subtract(const Point& point1, const Point& point2)
	{
		return Point(point1.x - point2.x, point1.y - point2.y);
	}

	static Point multiplay(const Point& point, const double value)
	{
		return Point(point.x * value, point.y * value);
	}

	static Point multiplay(const double value, const Point& point)
	{
		return Point(point.x * value, point.y * value);
	}

	static Point divide(const Point& point, const double value)
	{
		if (value == 0)
		{
			return Point();
		}

		return Point(point.x / value, point.y / value);
	}

	static double distance(const Point& point1, const Point& point2)
	{
		return sqrt((point1.x - point2.x) * (point1.x - point2.x) +
			(point1.y - point2.y) * (point1.y - point2.y));
	}

	static double length(const Point& point)
	{
		return distance(point, Point());
	}

	static bool isLess(const Point& point1, const Point& point2)
	{
		return length(point1) < length(point2);
	}
};

int main()
{
	Point point1(1, 1);
	Point point2;
	Point point3(1, 1);

	if (Point::isEqual(point1, point3))
	{
		cout << "point1 and point3 are equal" << endl;
	}

	cout << "p1: ";
	point1.display();
	cout << endl;

	cout << "Enter point p2 in format x,y (e.g. 12,10) : ";
	point2.read();

	cout << "p2: ";
	point2.display();
	cout << endl;

	cout << "p2 + p1 = ";
	Point::add(point2, point1).display();
	cout << endl;

	cout << "Distance between ";
	point1.display();
	cout << " and ";
	point2.display();
	cout << " is ";
	cout << Point::distance(point1, point2);
	cout << endl;

	_getch();
	return 0;
}
*/
/*
#include <iostream>
#include <conio.h>
using namespace std;

class Point
{
private:
	double x;
	double y;
public:
	Point(double x, double y) : x{ x }, y{ y }
	{
	}

	Point() : Point{ 0, 0 }
	{
	}

	void display() const
	{
		cout << "(" << x << "," << y << ")";
	}

	void read()
	{
		cin >> x;
		cin.ignore(1); // пропуск запятой между x и y
		cin >> y;
	}

	static bool isEqual(const Point& point1, const Point& point2)
	{
		return point1.x == point2.x && point1.y == point2.y;
	}

	static Point add(const Point& point1, const Point& point2)
	{
		return Point(point1.x + point2.x, point1.y + point2.y);
	}

	static Point mult(const Point& point, double value)
	{
		return Point(point.x * value, point.y * value);
	}

	static double distance(const Point& point1, const Point& point2)
	{
		return sqrt((point1.x - point2.x) * (point1.x - point2.x) +
			(point1.y - point2.y) * (point1.y - point2.y));
	}

	static double length(const Point& point)
	{
		return distance(point, Point());
	}

	static bool isLarger(const Point& point1, const Point& point2)
	{
		return length(point1) > length(point2);
	}

	//friend ostream& operator<< (ostream& output, const Point& point)
	//{
	//    output << "(" << point.x << "," << point.y << ")";
	//    return output;
	//}

	//friend istream& operator>> (istream& input, Point& point)
	//{
	//    input >> point.x;
	//    input.ignore(1);
	//    input >> point.y;
	//    return input;
	//}

	friend bool operator==(const Point& point1, const Point& point2)
	{
		return isEqual(point1, point2);
	}

	friend  Point operator+(const Point& point1, const Point& point2)
	{
		return add(point1, point2);
	}

	friend Point operator*(const Point& point, double value)
	{
		return mult(point, value);
	}

	friend Point operator*(double value, const Point& point)
	{
		return mult(point, value);
	}

	friend double operator%(const Point& point1, const Point& point2)
	{
		return distance(point1, point2);
	}

	double operator!()
	{
		return distance(*this, Point());
	}

	//Point operator+(const Point& point)
	//{
	//    return Point(this->x + point.x, this->y + point.y);
	//}
};

int main()
{
	Point point1(1, 1);
	Point point2;
	Point point3(1, 1);

	if (point1 == point3)
	{
		cout << "point1 and point3 are equal" << endl;
	}

	cout << "p1: ";
	point1.display();
	cout << endl;

	cout << "Enter point p2 in format x,y (e.g. 11,10) : ";
	point2.read();

	cout << "p2: ";
	point2.display();
	cout << endl;

	point3 = point1 + point2;
	cout << "p1 + p2 = ";
	point3.display();
	cout << endl;

	cout << "Distance between ";
	point1.display();
	cout << " and ";
	point2.display();
	cout << " is ";
	cout << point1 % point2 << endl;

	cout << "Vector ";
	point1.display();
	cout << " length is ";
	cout << !point1 << endl;

	_getch();
	return 0;
}
*/
//Оператор - это символ обозначающий определенную операцию над данными
/*арифметические (+, -, *, /, %, ++, --);
■ операторы отношения (==, !=, >, <, >=, <=);
■ логические (&&, ||, !);
■ побитовые (&, |, ^, ~, <<, >>);
■ операторы присваивания (=, +=, -=, *=, /=, %=, , <<=,
>>=, &=, ^=, |=);
■ другие операторы (sizeof, ? x : y, ,(запятая), .(точка),
->, cast, &, *).
*/
//Перегрузка операторов - реализация принципа полиморфизма 
// для действий, выполняемых посредством операторов.
//Перегружать можно только те операторы которые определенны в c++.

//#include <iostream>
//#include <conio.h>
//using namespace std;
//class Point {
//	double x;
//	double y;
//public :
//	
//	Point(double x, double y) :x{x},y{y}{}
//	void display() const {
//		cout << "(" << x << "," << y << ")";
//	}
//	friend Point operator+ (const Point& point1, const Point& point2);
//	friend Point operator- (const Point& point);
//	friend ostream& operator<< (ostream& output, const Point& point);
//	friend istream& operator >>  (istream& input, Point& point);
//	//Перегрузка префикного оператора
//	Point& operator++() {
//		++x;
//		++y;
//		return *this;
//	}
//	//Перегрузка постфиксного оператора
//	const Point operator++ (int) {
//		Point point{ x,y };
//		++(*this);
//		return point;
//	}
//	//Перегрузка операторов сравнения
//	bool operator== (const Point& point) {
//		return this->x== point.x && this->y == point.y;
//	}
//	
//};
//ostream& operator<< (ostream& output, const Point& point) {
//	output << "(" << point.x << "," << point.y << ")" << endl;
//	return output;
//}
//istream& operator >>  (istream& input, Point& point) {
//	input >> point.x;
//	input.ignore(1);
//	input >> point.y;
//	return input;
//}
//
//Point operator+ (const Point & point1, const Point & point2) {
//	return Point(point1.x + point2.x, point1.y + point2.y);
//}
//Point operator- (const Point& point) {
//	return Point(-point.x, -point.y);
//}
//
//
//int main() {
//	Point p0{1,1};
//	cin >> p0;
//	cout << p0;
//	Point p1(1, 1);
//	Point p2(2, 2);
//	Point p3 = p2 + p1;
//	p1++.display();
//	p1 = -p1;
//	cout << p1;
//	p3.display();
//	p1.display();
//}


//Для перегрузки оператора обязательно указывается ключ слово
//operator после чего ставится символ для перегрузки
//Существует три способа перегрузки оператора:
////через дружественные функции
//friend Point operator+ (const Point& point1, const Point& point2) {
//	return Point(point1.x - point2.x, point1.y - point2.y);
//}
////через обычные функции
//Point operator+ (const Point& point1, const Point& point2) {
//	return Point(point1.x - point2.x, point1.y - point2.y);
//}
////Через методы класса
//Point operator+ (const Point& point) {
//	return Point(this -> x - point.x,this->y - point.y);
//}
//Для перегрузки операторов требуется обращается к потоку (объект
//  через который программа обменивается данными с внешним миром)


//#include <iostream>
//class DynArray
//{
//	int* arr;
//	int size;
//public:
//	DynArray(int sizeP)
//		: arr{ new int[sizeP] {} }, size{ sizeP }
//	{
//		std::cout << "DynArr constructed for " << size
//			<< " elements, for " << this << '\n';
//	}
//	DynArray() : DynArray(5) {}
//	DynArray(const DynArray& object)
//		: arr{ new int[object.size] }, size{ object.size }
//	{
//		/* В списке инициализаторов полей класса выше,
//		выделяем новый блок динамической памяти того же
//		размера, что и в копируемом экземпляре класса
//		DynArray. Следующим циклом копируем элементы
//		из оригинального блока памяти во вновь
//		выделенный. */
//		for (int i{ 0 }; i < size; ++i)
//		{
//			arr[i] = object.arr[i];
//		};
//		std::cout << "DynArr copy constructed for "
//			<< size << " elements, for " << this
//			<< '\n';
//	}
//	DynArray& operator=(const DynArray& object)
//	{
//		// проверка на самоприсваивание
//		if (!(this == &object))
//		{
//			/*	проверяем на невозможность "переиспользовать" блок
//				памяти, выделенный под имеющийся массив */
//			if (size != object.size)
//			{
//				/* в случае невозможности "переиспользования"
//				необходимо освободить память, УЖЕ занимаемую
//				элементами текущего динамического массива */
//				delete[] arr;
//				/*	выделяем новый блок памяти согласно
//					размера копируемого массива */
//				arr = new int[object.size];
//			}
//			size = object.size;
//			/*	Следующим циклом копируем элементы
//				из оригинального блока памяти во вновь
//				выделенный.*/
//			for (int i{ 0 }; i < size; ++i)
//			{
//				arr[i] = object.arr[i];
//			};
//		}
//
//		std::cout << "DynArr copy assigned for "
//			<< size << " elements, for " << this
//			<< '\n';
//
//		return *this;
//	}
//
//	int getElem(int idx)const { return arr[idx]; }
//	void setElem(int idx, int val) { arr[idx] = val; }
//
//	void print()const;
//	void randomize();
//
//	~DynArray()
//	{
//		std::cout << "Try to free memory from DynArray for"
//			<< arr << " pointer\n";
//		delete[] arr;
//		std::cout << "DynArr destructed for " << size
//			<< " elements, for " << this << '\n';
//	}
//};
//void DynArray::print()const
//{
//	for (int i{ 0 }; i < size; ++i)
//	{
//		std::cout << arr[i] << ' ';
//	}
//	std::cout << '\n';
//}
//void DynArray::randomize()
//{
//	for (int i{ 0 }; i < size; ++i)
//	{
//		arr[i] = rand() % 10;
//	}
//}
//
//DynArray arrayFactory(int arrSize)
//{
//	DynArray arr{ arrSize };
//	arr.randomize();
//	return arr;
//}
//
//int main()
//{
//	DynArray ar1{ arrayFactory(10) };
//	std::cout << "ar1 elements: ";
//	ar1.print();
//
//	return 0;
//}

//Конструктор перемещения - представляет из себя альтернативу конструктору копирования
//в тех ситуациях когда надо сделать копию объекта , но копирование данных не 
//желательно, вместо копирования они просто перемещаются из одной копии объекта 
//в другую

//#include <iostream>
//
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int&& rvalRef{5+3};
//	rvalRef += 5;
//	std::cout << rvalRef << '\n';
//
//	int&& res{ max(3, 5) };
//	res += max(6, 4);
//	std::cout << res << '\n';
//
//	int x{ 42 };
//
//	//	Следующие строки закоментированны специально!
//	//int&& rvalBad{ x }; /* Невозможно инициализировать rvalue ссылку lvalue объектом. */
//	//int&& rvalBad1{ res }; /* rvalue ссылка сама является lvalue объектом */
//	int& lvalRef{ res };
//	std::cout << lvalRef << '\n';
//
//	return 0;
//}

//&& после типа данных говорят о том что данный объект является временным и
// создает rvalue-значение
//rvalue - значение это значение которому можно только присвоить литерал, или 
//результат выражения
//int n = 5;
//n-lvalue , 5- rvalue
//rvalue- ссылка  может ссылаться на результат выражения даже, если этот результат
//представляет временное значение
//Она позволяет продлить время жизни для временного значения, его память не будет удалена
//  пока ссылка находится в области видимости
//
//#include <iostream>
//class DynArray
//{
//	int* arr;
//	int size;
//public:
//	DynArray(int sizeP)
//		: arr{ new int[sizeP] {} }, size{ sizeP }
//	{
//		std::cout << "DynArr constructed for " << size
//			<< " elements, for " << this << '\n';
//	}
//	DynArray() : DynArray(5) {}
//	DynArray(const DynArray& object)
//		: arr{ new int[object.size] }, size{ object.size }
//	{
//		for (int i{ 0 }; i < size; ++i)
//		{
//			arr[i] = object.arr[i];
//		};
//		std::cout << "DynArr copy constructed for "
//			<< size << " elements, for " << this
//			<< '\n';
//	}
//
//	DynArray(DynArray&& object)
//		: arr{ object.arr }, size{ object.size }
//	{
//		object.arr = nullptr;
//		object.size = 0;
//		std::cout << "DynArr move constructed for "
//			<< size << " elements, for " << this
//			<< '\n';
//	}
//	DynArray& operator=(const DynArray& object)
//	{
//		if (!(this == &object))
//		{
//			if (size != object.size)
//			{
//				delete arr;
//				arr = new int[object.size];
//			}
//
//			size = object.size;	
//			int* dest{ arr };
//			int* src{ object.arr };
//			int* const end{ arr + size };
//
//			while (dest < end)
//			{
//				*dest++ = *src++;
//			}
//		}
//
//		std::cout << "DynArr copy assigned for "
//			<< size << " elements, for " << this
//			<< '\n';
//
//		return *this;
//	}
//	DynArray& operator=(DynArray&& object)
//	{
//		if (!(this == &object))
//		{
//			delete arr;
//
//			arr = object.arr;
//			size = object.size;
//
//			object.arr = nullptr;
//			object.size = 0;
//
//		}
//		std::cout << "DynArr move assigned for "
//			<< size << " elements, for " << this
//			<< '\n';
//
//		return *this;
//	}
//	int getElem(int idx)const { return arr[idx]; }
//	void setElem(int idx, int val) { arr[idx] = val; }
//	void print()const;
//	void randomize();
//	~DynArray()
//	{
//		std::cout << "Try to free memory from DynArray for "
//			<< arr << " pointer\n";
//		delete[] arr;
//		std::cout << "DynArr destructed for " << size
//			<< " elements, for " << this << '\n';
//	}
//};
//void DynArray::print()const
//{
//	for (int i{ 0 }; i < size; ++i)
//	{
//		std::cout << arr[i] << ' ';
//	}
//	std::cout << '\n';
//}
//void DynArray::randomize()
//{
//	for (int i{ 0 }; i < size; ++i)
//	{
//		arr[i] = rand() % 10;
//	}
//}
//
//DynArray arrayFactory(int arrSize)
//{
//	DynArray arr{ arrSize };
//	arr.randomize();
//	return arr;
//}
//
//int main()
//{
//	DynArray ar1{ arrayFactory(10) };
//	std::cout << "ar1 elements: ";
//	ar1.print();
//
//	std::cout << "\nCreate new array for 5 elements.\n\n";
//	ar1 = arrayFactory(5);
//	std::cout << "ar1 elements: ";
//	ar1.print();
//
//	return 0;
//}

//Правила подчинения автоматической генерации методов класса:
// явное определение любого конструктора предотвращает автоматическую генерацию 
// конструктора по умолчанию
// 
//
//#include <iostream>
//
//class Point
//{
//	int x;
//	int y;
//	Point() = default;
//public:
//	Point(int x, int y) :x{ x }, y{ y } {}
//	//Point(double x, double y) = delete;
//	Point& setX(int pX) { x = pX; return *this; }
//	Point& setY(int pY) { y = pY; return *this; }
//
//	void showPoint() const
//	{
//		std::cout << '(' << x << ',' << y << ')';
//	}
//};
//int main()
//{
//	Point p0{int(5.5),int(10.5)};
//
//	p0.setX(10).setY(20).showPoint();
//	std::cout << '\n';
//
//	return 0;
//}

//default - говорит о том что данный метод будер работать как метод по умолчанию
//delete - говорит о том что мы запрешаем использование данного метода


//#include <iostream>
//
//int max(int a, int b) { return a > b ? a : b; }
//template <typename T1, typename T2> int max(T1 a, T2 b) = delete;
//
//int main()
//{
//	std::cout << max(20, 30) << '\n';
//	std::cout << max(20.5, 30) << '\n';
//	std::cout << max('z', false) << '\n';
//	std::cout << max('a', 'b') << '\n';
//
//	return 0;
//}
/*
#include <iostream>
#include <cassert>

class MedalRow
{
	char country[4];
	int medals[3];
public:
	/* определяем константы для удобного и однозначного доступа к элементам массива
	static const int GOLD{ 0 };
	static const int SILVER{ 1 };
	static const int BRONSE{ 2 };

	MedalRow(const char* countryP, const int* medalsP)
	{
		strcpy_s(country, 4, countryP ? countryP : "NON");

		for (int i{ 0 }; i < 3; ++i)
		{
			medals[i] = medalsP ? medalsP[i] : 0;
		}
	}
	MedalRow() : MedalRow(nullptr, nullptr) {}
	MedalRow& setCountry(const char* countryP)
	{
		if (countryP)
		{
			strcpy_s(country, 4, countryP);
		}
		return *this;
	}
	const char* getCountry()const { return country; }
	int& operator[](int idx)
	{
		assert((idx >= 0 and idx < 3) and "Index out of range!");
		return medals[idx];
	}
	int operator[](int idx)const
	{
		assert((idx >= 0 and idx < 3) and "Index out of range!");
		return medals[idx];
	}
	void print()const
	{
		std::cout << '[' << country << "]-( ";
		for (int i{ 0 }; i < 3; ++i)
		{
			std::cout << medals[i];
			if (i < 2) { std::cout << '\t'; }
		}
		std::cout << " )\n";
	}
};

int main()
{
	MedalRow mr;
	mr.setCountry("RUS");
	std::cout << "Country is: " << mr.getCountry() << '\n';
	mr[MedalRow::GOLD] = 3;
	mr[MedalRow::BRONSE] = 2;
	/* намеренная ошибка! в массиве нет элемента с таким индексом!
	*  В процессе работы программы возникнет ошибка!
	*  В данном примере - это нормально.

	mr[MedalRow::SILVER] = 4;
	mr.print();

	return 0;
}*/

//assert - позволяет вычислить некоторое лоигическое устверждение, в случае его 
// ложности выводит на экран само ложное утверждение, , и досрочно 
// завершает работу программы
//

//#include <iostream>
//
//class Dyn2DArr
//{
//	int sizeY;
//	int sizeX;
//public:
//	int** data;
//	Dyn2DArr(int sizeYP, int sizeXP)
//		: sizeY{ sizeYP }, sizeX{ sizeXP }, data{ new int* [sizeYP] }
//	{
//		int* dataElements{ new int[sizeY * sizeX] };
//		for (int y{ 0 }; y < sizeY; ++y)
//		{
//			data[y] = dataElements + y *sizeX;
//		}
//	}
//
//	void print()const
//	{
//		for (int y{ 0 }; y < sizeY; ++y)
//		{
//			for (int x{ 0 }; x < sizeX; ++x)
//			{
//				std::cout << data[y][x] << '\t';
//			}
//			std::cout << '\n';
//		}
//		std::cout << '\n';
//	}
//
//	~Dyn2DArr()
//	{
//		
//		delete[] data[0];
//		
//		delete[] data;
//	}
//};
//
//int main()
//{
//	int rows{ 3 };
//	int columns{ 3 };
//	int counter{ 1 };
//
//	Dyn2DArr arr2d{ rows, columns };
//
//	for (int y{ 0 }; y < rows; ++y)
//	{
//		for (int x{ 0 }; x < columns; ++x)
//		{
//			arr2d.data[y][x] = counter++;
//		}
//	}
//
//	arr2d.print();
//
//	return 0;
//}

//Перегрузка оператора() - cпециальный оператор который может быть перегружен только как 
// функция член класса, работает по принципу, что вы можете обращаться к вашему объекту 
// класса как к обычной функции и передавать неограниченное число параметров.
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//class Calculator {
//public:
//	double operator()(double a, double b, char op) {
//		switch (op) {
//		case '+':
//			return a + b;
//		case '-':
//			return a - b;
//		case '*':
//			return a * b;
//		case '/':
//			if (b != 0) return a / b;
//		}
//	}
//};
//int main() {
//	Calculator calc;
//	cout << "3+4=" << calc(3, 4, '+') << endl;
//}
//Перегрузка операторов преобразования типа

//#include <iostream>
//using namespace std;
//
//class Counter {
//	int value;
//public:
//	Counter(int number) {
//		value = number;
//	}
//	operator int() const
//	{
//		return value;
//	}
//};
//int main() {
//	Counter counter{ 25 };
//	int n = int(counter);
//}

//Невозможно перегрузить след. операторы:
//:: оператор разрешения области
//.* оператор указатель на член класса
// . оператор доступа к члену класса
//?: тернарный оператор


//Перегрузка операторов глобальными фнукциями - теряется принцип инкапсуляции
// При перегрузке таким образом должно указываться обязательно в списке аргументов, 
// один из объектов вашего класса, второй аргумент может иметь любое другое значение

//#include <iostream>
//using namespace std;
//class Complex {
//	
//public:
//	double real;
//	double imag;
//	Complex(double r = 0, double i = 0) :real{ r }, imag{ i } {}
//};
//Complex operator+(const Complex& c1, const Complex& c2) {
//	return Complex(c1.real + c2.real, c1.imag + c2.imag);
//}
//ostream& operator<< (ostream& os, const Complex& c) {
//	os << c.real << " + " << c.imag << 'i'<<endl;
//	return os;
//}
//int main() {
//	Complex c1{ 3.5,2.5 };
//	Complex c2{ 3.5,2.5 };
//	Complex c3 = c1 + c2;
//	cout << c1 << c2 << c3;
//}

//Перегрузка операторов дружественными функциями
//Основное отличие от глобальной перегрузки, устарняется проблема потери инкапсуляции,
//дружественные функции получают доступ к приватным членам класса , объявляется внутри 
//класса с ключевым словом friend  
//
//#include <iostream>
//using namespace std;
//class Complex {
//	double real;
//		double imag;
//public:
//	
//	Complex(double r = 0, double i = 0) :real{ r }, imag{ i } {}
//	friend Complex operator+(const Complex& c1, const Complex& c2);
//	friend ostream& operator<< (ostream& os, const Complex& c);
//	friend istream& operator>> (istream& os, const Complex& c);
//};
// Complex operator+(const Complex& c1, const Complex& c2) {
//	return Complex(c1.real + c2.real, c1.imag + c2.imag);
//}
// ostream& operator<< (ostream& os, const Complex& c) {
//	os << c.real << " + " << c.imag << 'i' << endl;
//	return os;
//}
// istream& operator>> (istream& os, const Complex& c) {
//	 os >> c.real >> c.imag;
//	 return os;
// }
//int main() {
//	Complex c1{ 3.5,2.5 };
//	Complex c2{ 3.5,2.5 };
//	Complex c3 = c1 + c2;
//	cout << c1 << c2 << c3;
//}
//Дружественые классы - это специальные классы или функции, которые имеют доступ к 
//закрытым и защищенным членам другого класса. Этот механизм позволяет улучшить 
//взаимодействие между классами и предоставляет гибкость в проектироваии программ.
//Основное предназначение чтобы один класс имел доступ к скрытым полям другого класса,
//не делая данные ОБЩЕДОСТУПНЫМИ.
//
//#include <iostream>
//using namespace std;
//class Box;
//
//class BoxPrinter {
//public:
//	void printDimension(const Box& box);
//};
//class Box {
//	double length, width, height;
//public:
//	Box(double l, double w, double h) :length{ l }, width{ w }, height{ h } {};
//	friend class BoxPrinter;
//};
//void BoxPrinter::printDimension(const Box& box) {
//	cout << "Len:" << box.length << " ,width:" << box.width << " ,heig:" << box.height<<endl;
//}
//int main() {
//	Box box{ 3.5, 2.0, 1.5 };
//	BoxPrinter printer;
//	printer.printDimension(box);
//}
//
//#include <iostream>
//using namespace std;
//
//class Matrix {
//	int x, y;
//	int** arr;
//public:
//	Matrix(int iP, int jP) : x{ iP }, y{ jP }, arr{ new int* [iP] } {
//		for (int i = 0; i < iP; i++) {
//			arr[i] = new int[y];
//		}
//		for (int i = 0; i < iP; i++) {
//			for (int j = 0; j < jP; j++) {
//				arr[i][j] = 0;
//			}
//		}
//	}
//	Matrix() :Matrix{ 0,0 } {};
//	Matrix(Matrix& mt1) {
//		for (int i = 0; i < x; i++) {
//			delete[] arr[i];
//		}
//		delete arr;
//		arr = new int* [mt1.x];
//		for (int i = 0; i < mt1.x; i++) {
//			arr[i] = new int[mt1.y];
//		}
//		for (int i = 0; i < mt1.x; i++) {
//			for (int j = 0; j < mt1.y; j++) {
//				arr[i][j] = mt1.arr[i][j];
//			}
//		}
//	}
//};

//Статический полиморфизм - это механика, которая позволяет функциям и методам 
//! работать с разными типами данных в момент компиляции, а не во время
//! выполнения. Этодостигается через использование шаблонов в языках 
//! программирования таких как C++, поддерживают обобщенное программирование
//! 
//#include <iostream>
//using namespace std;
//
//template <typename Temp>
//Temp max1(Temp a, Temp b) {
//	return a > b ? a : b;
//}
//int main() {
//	cout << max1(3, 7) << endl;
//	cout << max1(3.5, 2.5) << endl;
//	cout <<char(27)<< endl;
//}
//Полиморфный код- код который может обрабатывать значения разных типов

//! Шаблон класса- механизм яп который поззволяет создавать обощенные
//! классы которые способны работать с различными типами данных
//#include <iostream>
//using namespace std;
////template <typename T, int size>
//template <typename T>
//class MyClass {
//public:
//	T data;
//	MyClass(T d) : data{d}{}
//	T getData() {
//		return data;
//	}
//	void setData(T data);
//};
//
//template<class T>
//void MyClass<T>::setData(T data) {
//	this->data = data;
//}
//
//
//int main() {//При работе с шаблонными классами обязательно указывается тип данных
//	MyClass<int> test{10};
//	cout << test.getData();
//}


//les05_05
//
//#include <iostream>
//#include <vector>
//#include <conio.h>
//using namespace std;
//
//template<class T>
//struct Point
//{
//	T x;
//	T y;
//	void display()
//	{
//		cout << "(" << x << "," << y << ")";
//	}
//};
//
//template<class T>
//struct Array
//{
//	vector<T> data;
//	void Add(T item)
//	{
//		data.push_back(item);
//	}
//	void display()
//	{
//		for (auto var : data)
//			cout << var << " ";
//	}
//};
//
//template<template<class> class T, class T1>
//struct Some
//{
//	T<T1> data; // создается переменная data, 
//	// типом которой будет шаблон класса T,
//	// принимающий параметр-тип T1
//	void Add(T1 item)
//	{
//		data.Add(item);
//	}
//	void display()
//	{
//		data.display();
//		cout << endl;
//	}
//};
//
//int main()
//{
//	// структура Point с целыми x,y
//	Some<Point, int> intPoint;
//	intPoint.data.x = 1;
//	intPoint.data.y = 2;
//	cout << "Some: struct Point with int  x, y  : ";
//	intPoint.display();
//
//	// структура Point с плавающими x,y
//	Some<Point, double> doublePoint;
//	doublePoint.data.x = 10.01;
//	doublePoint.data.y = 0.02;
//	cout << "Some: struct Point with double x,y : ";
//	doublePoint.display();
//
//	// массив (вектор) целых
//	Some<Array, int> intArray;
//	intArray.Add(1);
//	intArray.Add(3);
//	intArray.Add(5);
//	cout << "Some: array (vector) with int items: ";
//	intArray.display();
//
//	_getch();
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//using namespace std;
//template <typename T>
//class Stack {
//	vector<T> elements;
//public :
//	void push(const T& el) {
//		elements.push_back(el);
//	}
//	void pop() {
//		if (!elements.empty()) {
//			elements.pop_back();
//		}
//	}
//	T top() const {
//		if (!elements.empty()) {
//			return elements.back();
//		}
//	}
//	bool empty() const {
//		return elements.empty();
//	}
//	size_t size() const {
//		return elements.size();
//	}
//};
//
//int main() {
//	Stack <int> intStack;
//	intStack.push(5);
//	intStack.push(2);
//	intStack.push(3);
//	cout << intStack.top() << endl;
//	intStack.pop();
//	cout << intStack.top() << endl;
//	cout << intStack.size() << endl;
//}


// Шаблоны с переменным числом аргументов позволяют создавать функции и классы
//которые могут принимать произвольное кол-во аргументов.
//template <typename... Args>
//void func(Args... args)
//#include <iostream>
//using namespace std;
//template <typename... Args>
//double sum(Args... args) {
//	return (args + ...);
//}
//int main() {
//	/*cout << __cplusplus;*/
//	cout << sum(1, 23, 8, 5.5, 9.6);
//}

//initializer_list - спец. тип который позволяет инициализировать контейнеры
//и другие объекты с помощью списков инициализации.

//#include <iostream>
//#include <initializer_list>
//using namespace std;
//
//void printList(initializer_list<int> list) {
//	for (int num : list) {
//		cout << num << endl;
//	}
//}
//int main() {
//	printList({ 1,2,3,4,5,6 });
//}
//Создайте функцию которая будет принимать список чисел и 
// возвращать среднее арифметическое


//Написать шаблон функции для поиска среднего арифметического значений массива.
//#include <iostream>
//using namespace std;
//template <typename T>
//void printList(T* arr, int size) {
//	T y = 0;
//	T r = 0;
//	for (int i = 0; i < size; i++) {
//		r += arr[i];
//		y++;
//	}
//	cout << r / y;
//}
//template <typename T>
//int main() {
//	int size;
//	cin >> size;
//	T* arr = new T[size];
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 10;
//	}
//	printList(arr, size);
//}





//Ascii 
//char ch{ 'п' };
////char8_t ch8{ u8'a' };
////Для кодировки unicode (utf-16,utf-32)
//char16_t ch16{ u'п' };
//char32_t ch32{ U'п' };
//int main() {
//	cout << ch;
//}
//string - char
//u16string - char16_t
//u32string - char32_t

//char text[20]{ "this is a C-string" };
//string text{ "This is a C++ string" };

//Для объектов класса string определены следующие
//операторы :
//▷ присваивания — = ;
//▷ ввода - вывода — << , >> ;
//▷ конкатенации(сложения строк) — + , +=;
//▷ сравнения — == , != , <, >, <= , >= ;
//▷ индексирования —[].

//string text{"Hello"};
	/*string text( 8,'a');*/
	/*string text= "Hello" ;*/
	//int number=0;
	//cout << "|" << number << "|" << text << endl;
	/*string text = "Hello my friend";
	cout << text.size();
	cout << text.length();
	for (int i = 0; i < text.size(); i++) {
		cout << text[i] << endl;
	}
	for (char c : text) {
		cout << c;
	}*/
	/*string text;
	getline(cin,text);
	cout << text;*/

	//#include <iostream>
	//#include <string>
	//using namespace std;
	//int main() {

		//cout << h.at(20);
		/*cout << h.front();
		cout << h.back();
		const char* pname = h.data();*/
		//Методы-итераторы - возращают указатели на элементы строки
		//isalpha - только буква
			//isspace - только пробел
		//isdigit - проверка на цифры
		/*size_t pos;
		string h{ "1298" };
		int n1= stoi(h,&pos,8);
		cout << n1 << endl << pos << endl;*/
		/*cout << h.size() << endl;
		cout << h.capacity() << endl;
		h.reserve(50);
		cout << h.size() << endl;
			cout << h.capacity() << endl;
			h.shrink_to_fit();
			cout << h.size() << endl;
			cout << h.capacity() << endl;*/
			/*cout << h.empty();*/
			/*string str("hi guys");
			h.swap(str);*/
			/*h.resize(15);
			cout << h;*/
			/*cout << h.substr(6, 3);*/
			/*cout << h.insert(6, "dear");*/
			/*cout << h.assign("h, 0, 6");*/
			/*cout << h.find_first_not_of("Hello my");*/
			/*cout << h.rfind("my");*/
			/*for (auto it = h.rbegin(); it < h.rend(); it++) {
				if (!isalpha(*it) && !isspace(*it)) {
					cout << *it;
				}
			}*/
			//}

			//
			//#include <iostream>
			//using namespace std;
			//
			//
			//template <typename T>
			//class Array {
			//	T* arr;
			//	int size;
			//	Array() = default;
			//	
			//public:
			//	Array(const T* arrP){
			//		arr{ new T[sizeof(arrP) / sizeof(arrP[0])] };
			//		size{ sizeof(arrP) / sizeof(arrP[0]) };
			//		for (int i = 0; i < size; i++) {
			//			arr[i] = arrP[i];
			//		}
			//	};
			//
			//	/*GetSize – получение размера массива(количество элементов,
			//		под которые выделена память);*/
			//	int GetSize() {
			//		return size;
			//	}
			//
			//	//■ SetSize(int size, int grow = 1) – установка размера массива
			//	//(если параметр size больше предыдущего размера массива, то
			//	//	выделяется дополнительный блок памяти, если нет, то «лишние» элементы 
			//	// теряются и память освобождается); параметр
			//	//	grow определяет для какого количества элементов необходимо выделить память, 
			//	// если количество элементов превосходит
			//	//	текущий размер массива.Например, SetSize(5, 5); означает,
			//	//	что при добавлении 6 - го элемента размер массива становится
			//	//	равным 10, при добавлении 11 - го - 15 и т.д.;
			//	void SetSize(int sizeP) {
			//		if (size == sizeP) {
			//			cout << "размер одинаков";
			//		}
			//		else {
			//			T* arr1 = new T[size];
			//			for (int i = 0; i < size; i++) {
			//				arr1[i] = arr[i];
			//			}
			//			delete[]arr;
			//			arr = new T[sizeP];
			//			for (int i = 0; i < sizeP; i++) {
			//				arr[i] = arr1[i];
			//			}
			//			delete[]arr1;
			//			size{ sizeP };
			//		}
			//		//IsEmpty - массив пуст ? ;
			//		
			//}
			//	bool Empty() {
			//		bool flag = true;
			//		for (int i = 0; i < size; i++) {
			//			if (arr[i] != null) {
			//				flag = false;
			//			}
			//		}
			//		return flag;
			//	}
			//	//GetUpperBound - получение последнего допустимого индекса в массиве.
			//
			//	int GetUpperBound(){
			//		int a, b;
			//		for (int i = 0; i < size; i++) {
			//			if (arr[i] == NULL) {
			//				return i;
			//			}
			//			
			//		}
			//		return size;
			//	}
			//	//FreeExtra - удалить «лишнюю» память(выше последнего допустимого индекса);
			//	void FreeExtra() {
			//		if (size - 1 > GetUpperBound()) {
			//			T* arr1 = new T[size];
			//			for (int i = 0; i < size; i++) {
			//				arr1[i] = arr[i];
			//			}
			//			delete[]arr;
			//			arr = new T[this->GetUpperBound() + 1];
			//			for (int i = 0; i < GetUpperBound() + 1; i++) {
			//				arr[i] = arr1[i];
			//			}
			//			delete[]arr1;
			//			size{ GetUpperBound() + 1 };
			//		
			//		}
			//	}
			//	//■ RemoveAll – удалить все;
			//	void RemoveAll() {
			//		delete this;
			//	}
			//	~Array() {
			//		delete[]arr;
			//	}
			//	//GetAt - получение определенного элемента(по индексу);
			//	T GetAt(int index) {
			//		 return arr[index];
			//	}
			//	//SetAt – установка нового значения для определенного элемента
			//	// (индекс элемента должен быть меньше текущего размера
			//	//	массива);
			//	void SetAt(int index, T value) {
			//		if (index >= 0 && index < size) {
			//			arr[index] = value;
			//		}
			//		else {
			//			cout << "ошибка" << endl;
			//		}
			//	}
			//	//operator [] – для реализации двух предыдущих функций
			//	void operator[](int index) {
			//		GetAt(index);
			//	}
			//	void operator[](int index, T value) {
			//		SetAt(index, value);
			//	}
			//	/*Add – добавление элемента в массив(при необходимости
			//		массив увеличивается на значение grow функции SetSize);*/
			//	void Add(T y) {
			//		if (size - 1 > GetUpperBound())arr[GetUpperBound()] = y;
			//		else {
			//			T arr1 = new T[size+1];
			//			for (int i = 0; i < size; i++) {
			//				arr1[i] = arr[i];
			//			}
			//			arr1[size+1] = y;
			//			delete[]arr;
			//			arr = new T[size + 1];
			//			for (int i = 0; i < size + 1;i++) {
			//				arr[i] = arr1[i];
			//			}
			//			delete[]arr1;
			//			size{ size + 1 };
			//		}
			//	}
			//	//■ InsertAt – вставка элемента(-ов) в заданную позицию;
			//	void InsertAt(int index, T n) {
			//		if (index >= 0 && index < size) {
			//			T arr1 = new T[size + 1];
			//			for (int i = 0; i < size + 1; i++) {
			//				arr1[i] = arr[i];
			//			}
			//			//T f = arr1;
			//			for (int i = index; i < size; i++) {
			//				arr1[i + 1] = arr1[i];
			//			}
			//			arr1[index] = n;
			//			for (int i = 0; i < size + 1; i++) {
			//				arr[i] = arr1[i];
			//			}
			//			delete[]arr1;
			//		}
			//		else {
			//			cout << "незя";
			//		}
			//	}
			//};
			//
			//
			//int main() {
			//	int mas[10]{ 1,23,4,56,7,8,9,1,2,5 };
			//	cout << sizeof(mas[0]);
			//}




			//Динамические структуры данных-
			//некая конструкция способная при необходимости выделять память под новые элементы
			//или удалять выделеную память для ненужных элементов во время работы программы.

			//Стэк- динамическая структура данных, представлющая из себя упорядоченный набор
			//элементов, в который добавление новых элементов и удаление существующих 
			//производится с одного конца, называемого вершиной стека
			//
			//#include <iostream>
			//#include <string.h>
			//#include <time.h>
			//using namespace std;
			//
			//class Stack {
			//	enum {EMPTY=-1,FULL=20};
			//	char st[FULL + 1];
			//	int top;
			//public:
			//	Stack();
			//	void Push(char c);
			//	char Pop();
			//	void Clear();
			//	bool IsEmpty();
			//	bool IsFull();
			//	int GetCount();
			//};
			//Stack::Stack() {
			//	top = EMPTY;
			//}
			//void Stack::Clear() {
			//	top = EMPTY;
			//}
			//bool Stack::IsEmpty() {
			//	return top == EMPTY;
			//}
			//bool Stack::IsFull() {
			//	return top == FULL;
			//}
			//int Stack::GetCount() {
			//	return top + 1;
			//}
			//void Stack::Push(char c) {
			//	if (!IsFull()) {
			//		st[++top] = c;
			//	}
			//}
			//char Stack::Pop() {
			//	if (!IsEmpty()) return st[top--];
			//	else return 0;
			//}
			//
			//void main() {
			//	srand(time(NULL));
			//	Stack ST;
			//	char c;
			//	while (!ST.IsFull()) {
			//		c = rand() % 4 + 2;
			//		ST.Push(c);
			//	}
			//	while (c = ST.Pop()) {
			//		cout << c << " ";
			//	}
			//	cout << endl;
			//}


			//Очередь - последовательный набор элементов с переменной длиной.
			//  При этом добавление элементов в очередь происходит с одной стороны, а удаление с другой

			//#include <iostream>
			//#include <string.h>
			//#include <time.h>
			//using namespace std;
			//
			//class Queue {
			//	int* Wait;
			//	int MaxQueueLength;
			//	int QueueLength;
			//public:
			//	Queue(int m);
			//	~Queue();
			//	void Add(int c);
			//	int Extract();
			//	void Clear();
			//	bool IsEmpty();
			//	bool IsFull();
			//	int GetCount();
			//	void Show();
			//};
			//
			//void Queue::Show() {
			//	for (int i = 0; i < QueueLength; i++) {
			//		cout << Wait[i] << " ";
			//	}
			//	cout << endl;
			//}
			//Queue::~Queue() {
			//	delete[]Wait;
			//}
			//Queue::Queue(int m) {
			//	MaxQueueLength = m;
			//	Wait = new int[MaxQueueLength];
			//	QueueLength = 0;
			//
			//}
			//void Queue::Clear() {
			//	QueueLength = 0;
			//}
			//bool Queue::IsEmpty() {
			//	return QueueLength == 0;
			//}
			//bool Queue::IsFull() {
			//	return QueueLength == MaxQueueLength;
			//}
			//int Queue::GetCount() {
			//	return QueueLength;
			//}
			//void Queue::Add(int c) {
			//	if (!IsFull()) {
			//		Wait[QueueLength++] = c;
			//	}
			//}
			//int Queue::Extract() {
			//	if (!IsEmpty()) {
			//		int temp = Wait[0];
			//		for (int i = 1; i < QueueLength; i++) {
			//			Wait[i - 1] = Wait[i];
			//		}
			//		QueueLength--;
			//		return temp;
			//	}
			//	else {
			//		return -1;
			//	}
			//}
			//int main() {
			//	srand(time(0));
			//	Queue QU(25);
			//	for (int i = 0; i < 5; i++) {
			//		QU.Add(rand() % 50);
			//	}
			//	QU.Show();
			//	QU.Extract();
			//	QU.Show();
			//}

			//Кольцевая очередь- по сути обыная очередь, но разница в том что элемент который 
			// выходит из начала очереди перемещен в ее конец

			//#include <iostream>
			//#include <string.h>
			//#include <time.h>
			//using namespace std;
			//
			//class Queue {
			//	int* Wait;
			//	int MaxQueueLength;
			//	int QueueLength;
			//public:
			//	Queue(int m);
			//	~Queue();
			//	void Add(int c);
			//	bool Extract();
			//	void Clear();
			//	bool IsEmpty();
			//	bool IsFull();
			//	int GetCount();
			//	void Show();
			//};
			//
			//void Queue::Show() {
			//	for (int i = 0; i < QueueLength; i++) {
			//		cout << Wait[i] << " ";
			//	}
			//	cout << endl;
			//}
			//Queue::~Queue() {
			//	delete[]Wait;
			//}
			//Queue::Queue(int m) {
			//	MaxQueueLength = m;
			//	Wait = new int[MaxQueueLength];
			//	QueueLength = 0;
			//
			//}
			//void Queue::Clear() {
			//	QueueLength = 0;
			//}
			//bool Queue::IsEmpty() {
			//	return QueueLength == 0;
			//}
			//bool Queue::IsFull() {
			//	return QueueLength == MaxQueueLength;
			//}
			//int Queue::GetCount() {
			//	return QueueLength;
			//}
			//void Queue::Add(int c) {
			//	if (!IsFull()) {
			//		Wait[QueueLength++] = c;
			//	}
			//}
			//bool Queue::Extract() {
			//	if (!IsEmpty()) {
			//		int temp = Wait[0];
			//		for (int i = 1; i < QueueLength; i++) {
			//			Wait[i - 1] = Wait[i];
			//		}
			//		Wait[QueueLength - 1] = temp;
			//		return 1;
			//	}
			//	else {
			//		return 0;
			//	}
			//}
			//int main() {
			//	srand(time(0));
			//	Queue QU(25);
			//	for (int i = 0; i < 5; i++) {
			//		QU.Add(rand() % 50);
			//	}
			//	QU.Show();
			//	QU.Extract();
			//	QU.Show();
			//}

			//Очередь с приоритетом
			//Очередь с приоритетным включением-
			// последовательность элементов является строго упорядоченной, каждый элемент при попадании
			// в очередь сразу же распологается согласно своего приоритета
			//Очереди с приоритетным исключением-элементы добавляется в конец очереди, а при извлечении
			//осуществялется самого приоритетного элемента, который в последствии удаляется из 
			//очереди

			//#include <iostream>
			//#include <string.h>
			//#include <time.h>
			//using namespace std;
			//
			//class Queue {
			//	int* Wait;
			//	int* Pri;
			//	int MaxQueueLength;
			//	int QueueLength;
			//public:
			//	Queue(int m);
			//	~Queue();
			//	void Add(int c,int p);
			//	int Extract();
			//	void Clear();
			//	bool IsEmpty();
			//	bool IsFull();
			//	int GetCount();
			//	void Show();
			//};
			//
			//void Queue::Show() {
			//	for (int i = 0; i < QueueLength; i++) {
			//		cout << Wait[i] << " - "<< Pri[i]<<endl;
			//	}
			//	cout << endl;
			//}
			//Queue::~Queue() {
			//	delete[]Wait;
			//	delete[]Pri;
			//}
			//Queue::Queue(int m) {
			//	MaxQueueLength = m;
			//	Wait = new int[MaxQueueLength];
			//	Pri = new int[MaxQueueLength];
			//	QueueLength = 0;
			//
			//}
			//void Queue::Clear() {
			//	QueueLength = 0;
			//}
			//bool Queue::IsEmpty() {
			//	return QueueLength == 0;
			//}
			//bool Queue::IsFull() {
			//	return QueueLength == MaxQueueLength;
			//}
			//int Queue::GetCount() {
			//	return QueueLength;
			//}
			//void Queue::Add(int c,int p) {
			//	if (!IsFull()) {
			//		Wait[QueueLength] = c;
			//		Pri[QueueLength] = p;
			//		QueueLength++;
			//	}
			//}
			//int Queue::Extract() {
			//	if (!IsEmpty()) {
			//		int max_pri = Pri[0];
			//		int pos_max_pri = 0;
			//		for (int i = 1; i < QueueLength; i++) {
			//			if (max_pri < Pri[i]) {
			//				max_pri = Pri[i];
			//				pos_max_pri = i;
			//			}
			//		}
			//		int temp1 = Wait[pos_max_pri];
			//		int temp2 = Pri[pos_max_pri];
			//		for (int i = pos_max_pri; i < QueueLength - 1; i++) {
			//			Wait[i] = Wait[i + 1];
			//			Pri[i] = Pri[i + 1];
			//		}
			//		QueueLength--;
			//		return temp1;
			//	}
			//	else {
			//		return -1;
			//	}
			//}
			//int main() {
			//	srand(time(0));
			//	Queue QU(25);
			//	for (int i = 0; i < 5; i++) {
			//		QU.Add(rand() % 50,rand()%12);
			//	}
			//	QU.Show();
			//	QU.Extract();
			//	QU.Show();
			//}

			//Односвязный список-это структура данных, которая состоит из узлов, где каждый узел
			//содержит данные и указатель на следующий узел в списке.
			//
			//#include <iostream>
			//using namespace std;
			//
			//struct Node {
			//	int data; //Данные узла
			//	Node* next;//Указатель на след. узел
			//};
			//
			//class LinkedList {
			//	Node* head;//указатель на голову списка
			//public:
			//	LinkedList() :head{ nullptr } {};
			//
			//	void insertAtHead(int value) {
			//		Node* newNode = new Node;//Создали нвоый узел
			//		newNode->data = value;
			//		newNode->next = head;
			//		head = newNode;
			//	}
			//
			//	void display() {
			//		Node* current = head;
			//		while (current != nullptr) {
			//			cout << current->data << " ";
			//			current = current->next;
			//		}
			//		cout << endl;
			//	}
			//	~LinkedList() {
			//		Node* current = head;
			//		while (current != nullptr) {
			//			Node* nextnode = current->next;
			//			delete current;
			//			current = nextnode;
			//		}
			//	}
			//};
			//int main() {
			//	LinkedList list;
			//	list.insertAtHead(10);
			//	list.insertAtHead(20);
			//	list.insertAtHead(30);
			//	list.display();
			//}

			//Двусвязный список - это структура данных состоящая из узлов, где каждый узел содержит
			//три компонента, данные, указатель на предыдуший узел, указатель на последую щий узел
			//#include <iostream>
			//using namespace std;
			//
			//struct Node {
			//	int data;
			//	Node* next;
			//	Node* prev;
			//	Node(int value) : data{ value }, next{ nullptr }, prev{ nullptr } {}
			//};
			//class DoublyLinkedList {
			//	Node* head;
			//	Node* tail;
			//public:
			//	DoublyLinkedList() :head{ nullptr }, tail{ nullptr } {};
			//	//Добавление в конец
			//	void append(int value) {
			//		Node* newNode = new Node(value);
			//		if (!head) {
			//			head = tail = newNode;//Если список пуст, голова и хвост указываюит на новый узел
			//		}
			//		else {
			//			tail->next = newNode;
			//			newNode->prev = tail;
			//			tail = newNode;
			//		}
			//	}
			//	void prepend(int value) {
			//		Node* newNode = new Node(value);
			//		if (!head) {
			//			head = tail = newNode;//Если список пуст, голова и хвост указываюит на новый узел
			//		}
			//		else {
			//			newNode->next = head;
			//			head->prev = newNode;
			//			head = newNode;
			//		}
			//	}
			//	void displayForward() {
			//		Node* current = head;
			//		while (current != nullptr) {
			//			cout << current->data << " ";
			//			current = current->next;
			//		}
			//		cout << endl;
			//	}
			//	void displayBackward() {
			//		Node* current = tail;
			//		while (current != nullptr) {
			//			cout << current->data << " ";
			//			current = current->prev;
			//		}
			//		cout << endl;
			//	}
			//	~DoublyLinkedList() {
			//		Node* current = head;
			//		while (current != nullptr) {
			//			Node* nextNode = current->next;
			//			delete current;
			//			current = nextNode;
			//		}
			//		cout << endl;
			//	}
			//	void insertAtPosition(int value, int position) {
			//		if (position <= 0) {
			//			prepend(value);
			//		}
			//		else {
			//			Node* newNode = new Node(value);
			//			Node* current = head;
			//			int currentPosition = 0;
			//			while (current != nullptr && currentPosition < position) {
			//				current = current->next;
			//				currentPosition++;
			//			}
			//			if (current == nullptr) {
			//				append(value);
			//			}
			//			else {
			//				newNode->prev = current->prev;
			//				newNode->next = current;
			//				if (current->prev) {
			//					current->prev->next = newNode;
			//				}
			//				else {
			//					head = newNode;
			//				}
			//				current->prev = newNode;
			//			}
			//		}
			//	}
			//	void remove(int value) {
			//		Node* current = head;
			//		while (current != nullptr) {
			//			if (current->data == value) {
			//				if (current->prev) {
			//					current->prev->next = current->next;
			//				}
			//				else {
			//					head = current->next;
			//				}
			//				if (current->next) {
			//					current->next->prev = current->prev;
			//				}
			//				else {
			//					tail = current->prev;
			//				}
			//				delete current;
			//				return;
			//			}
			//			current = current->next;
			//		}
			//	}
			//};
			//int main() {
			//	DoublyLinkedList list;
			//	list.append(10);
			//	list.append(15);
			//	list.append(20);
			//	list.displayForward();
			//	list.displayBackward();
			//}

			//Создайте шаблонный класс односвязного списка для работы
			//с целыми значениями.Требуется создать реализации для типичных
			//  операций над элементами :
			//■ AddToHead – добавление элемента в голову;
			//■ AddToTail – добавление элемента в хвост;
			//■ DeleteFromHead – удаление элемента из головы;
			//■ DeleteFromTail – удаление элемента из хвоста;
			//■ DeleteAll – удаление всех элементов;
			//■ Show – отображение всех элементов списка на экран.

			//
			//#include <iostream>
			//using namespace std;
			//
			//
			//
			//
			//template <typename T>
			//class LinkList {
			//	struct Node {
			//		T data;
			//		Node* next;
			//		Node(T value) :data{ value }, next{ nullptr } {}
			//	};
			//	Node* head;
			//	Node* tail;
			//public:
			//	LinkList() :head{ nullptr }, tail{ nullptr } {};
			//	void AddToHead(T value) {
			//		Node* newNode = new Node(value);
			//		if (!head) {
			//			head = tail = newNode;
			//		}
			//		else {
			//			newNode->next = head;
			//			head = newNode;
			//		}
			//	}
			//	void AddToTail(T value) {
			//		Node* newNode = new Node(value);
			//		if (!head) {
			//			head = tail = newNode;
			//		}
			//		else {
			//			tail->next = newNode;
			//			tail = newNode;
			//		}
			//	}
			//	void DeleteFromHead() {
			//		if (head) {
			//			Node* current = head;
			//			head = current.next;
			//			current.next = nullptr;
			//			delete current;
			//			
			//		}
			//	}
			//	void  DeleteFromTail() {
			//		if (head) {
			//			Node* current = head;
			//			while (current.next != tail) {
			//				current = current.next;
			//			}
			//			current.next = nullptr;
			//			delete tail;
			//			tail = current;
			//		}
			//	}
			//	void DeleteAll() {
			//		while (head) DeleteFromHead();
			//	}
			//	void Show() {
			//		Node* current = head;
			//		while (current!=nullptr) {
			//			cout << current->data << " " ;
			//			current = current->next;
			//		}
			//		cout << endl;
			//
			//	}
			//};
			//int main() {
			//	LinkList<int> list;
			//	list.AddToHead(10);
			//	list.AddToHead(15);
			//	list.AddToHead(20);
			//	list.Show();
			//}


			//Задание №1
			//Создайте шаблонный класс двусвязного списка для работы с
			//целыми значениями.Требуется создать реализации для типичных операций над элементами :
			//AddToHead – добавление элемента в голову;-Лев
			//AddToTail – добавление элемента в хвост;-Миша
			//DeleteFromHead – удаление элемента из головы;-Виталя
			//DeleteFromTail – удаление элемента из хвоста;-Лукьян
			//DeleteAll – удаление всех элементов;-Владислав
			//Show – отображение всех элементов списка на экран.-Никита
			//вставка элемента в заданную позицию,-Равиль
			// удаление элемента по заданной позиции- Толя
			// поиск заданного элемента(функция возвращает позицию найденного элемента 
			// в случае успеха или NULL в случае неудачи) - Максим
			// поиск и замена заданного элемента(функция возвращает количество замененных элементов в 
			// случае успеха или - 1 в случае неудачи), 
			// переворот списка.
			//#include <iostream>
			//using namespace std;
			//
			//template <typename T>
			//class DoubleLink {
			//	struct Node {
			//		T data;
			//		Node* next;
			//		Node* prev;
			//		Node(T value) :next{ nullptr }, prev{ nullptr }, data{ value } {};
			//	};
			//	Node* head;
			//	Node* tail;
			//public:
			//	DoubleLink() : head{ nullptr }, tail{ nullptr } {};
			//	void AddToHead(T value) {
			//		Node* nn = new Node(value);
			//		if (!head) {
			//			head = tail = nn;
			//		}
			//		else {
			//			head->prev = nn;
			//			nn->next = head;
			//			head = nn;
			//		}
			//	}
			//	void  DeleteFromTail() {
			//
			//		if (head) {
			//			Node* current = head;
			//			while (current->next != tail) {
			//				current = current->next;
			//			}
			//			current->next = nullptr;
			//			delete tail;
			//			tail = current;
			//		}
			//	}
			//	void DeleteAll() {
			//		while (head) {
			//			if (head) {
			//				Node* current = head;
			//				head = current->next;
			//				current->next = nullptr;
			//				head->prev = nullptr;
			//				delete current;
			//			}
			//		}
			//	}
			//	void Show() {
			//		Node* current = head;
			//		while (current != nullptr) {
			//			cout << current->data << " ";
			//			current = current->next;
			//		}
			//		cout << endl;
			//	}
			//	void DeleteFromHead() {
			//		if (head) {
			//			Node* current = head;
			//			head = current->next;
			//			head->prev = nullptr;
			//			delete current;
			//
			//		}
			//	}
			//	void AddToTail(T value) {
			//		Node* newNode = new Node(value);
			//		if (!head) {
			//			head = tail = newNode;
			//		}
			//		else {
			//			tail->next = newNode;
			//			newNode->prev = tail;
			//			tail = newNode;
			//		}
			//	}
			//
			//};
			//
			//int main() {
			//	DoubleLink<int> list;
			//	list.AddToHead(10);
			//	list.AddToHead(20);
			//	list.AddToHead(30);
			//	list.AddToHead(15);
			//	list.AddToTail(5);
			//	list.Show();
			//}

			//Бинарное дерево - структура данных, в которой каждый узел имеет более двух дочерних
			//узлов, обычно называемых левым и правым. Данная структура используется для 
			//упорядочивания данных, выполнения операций поиска, вставки и удаления, а так же 
			//для реализации различных алогоритмов
			// Узел , Корень, Лист
			//#include <iostream>
			//using namespace std;
			//
			//class Bus {
			//public:
			//	string number, FIO;
			//	int marshrut, seats;
			//	Bus(string numberP, string fioP, int marshrutP, int seatsP) :
			//		number{ numberP }, FIO{ fioP }, marshrut{ marshrutP }, seats{ seatsP } {}
			//};
			//
			//
			//class Node {
			//public:
			//	Bus* data;
			//	Node* left;
			//	Node* right;
			//	Node(string numberP, string fioP, int marshrutP, int seatsP) : left{ nullptr }, right{ nullptr }{
			//		data = new Bus(numberP, fioP, marshrutP, seatsP);
			//	}
			//};
			//class BinaryTree {
			//	Node* root;
			//	Node* insert(Node* node, string numberP, string fioP, int marshrutP, int seatsP) {
			//		if (node == nullptr) {
			//			return new Node(numberP, fioP, marshrutP, seatsP);
			//		}
			//		if (numberP < node->data->number) {
			//			node->left = insert(node->left, numberP, fioP, marshrutP, seatsP);
			//		}
			//		else {
			//			node->right = insert(node->right, numberP, fioP, marshrutP, seatsP);
			//		}
			//		return node;
			//	}
			//	void inOrder(Node* node) {
			//		if (node == nullptr)return;
			//		inOrder(node->left);
			//		cout << node->data << " ";
			//		inOrder(node->right);
			//	}
			//
			//	void  search(Node* node, string value) {
			//		if (node == nullptr) {
			//			return ;
			//		}
			//		if (node->data->number == value) {
			//			cout << node->data->number << node->data->FIO << node->data->marshrut << node->data->seats << endl;
			//		}
			//		return value < node->data->number ? search(node->left, value) : search(node->right, value);
			//
			//	}
			//public:
			//	BinaryTree() :root{ nullptr } {};
			//	void insert(string numberP, string fioP, int marshrutP, int seatsP) {
			//		root = insert(root, numberP, fioP, marshrutP, seatsP);
			//	}
			//	void inOrder() {
			//		inOrder(root);
			//		cout << endl;
			//	}
			//	void  search(string value) {
			//		search(root, value);
			//	}
			//};
			//
			//int main() {
			//	setlocale(LC_ALL, "");
			//	BinaryTree tree;
			//	tree.insert("Х930ТР64", "Заречный Данила", 57, 10);
			//	ert("Р460УТ64", "Заречный Александр", 90, 50);
			//	tree.search("Р460УТ64");
			//	//BinaryTree tree;
			//	//tree.insert(5);
			//	//tree.insert(3);
			//	//tree.insert(7);
			//	//tree.insert(2);
			//	//tree.insert(4);
			//	//tree.insert(6);
			//	//tree.insert(8);
			//	//tree.inOrder();
			//	//int value = 6;
			//	//cout <<( tree.search(value) ? "Serch" : "No serch");
			//}tree.insert("Х469УН164", "Заречный Андрей", 3, 15);
			//	tree.ins

			//Вложенный класс - это класс полностью определенный внутри другого класса. И если объект
			//обычного класса , как правило существует самостоятельно , то объект вложенного класса 
			//должен быть привязан к объекту класса, в котором этот вложенный описан. Класс в который
			//вкладывается другой класс называется объемлющим
			//#include <iostream>
			//using namespace std;


			//class B {
			//	int b = 10;
			//public:
			//	class A {
			//	public:
			//		int arr=5;
			//	};
			//	A* g;
			//	
			//};
			//int main() {
			//	B::A a;
			//}
			//class A {
			//public:
			//	int init(int);
			//private:
			//	class B;
			//	B* obj;
			//	class B {
			//	public:
			//		int value;
			//		B(int val = 0);
			//		void mf(const A&);
			//	};
			//};
			//Вложенный класс это подкласс который , не имеет доступа к
			// объемлещему классу, не имеет доступа к его членам, и 
			// является элементом дополнения главного класса
			//void mf(A& i1) {
			//	int memb = i1.init();
			//}
			//A::B::B(int val) {
				//A::init();
				//value = init(val);
			//}
			//A::B::B(int val) { value = val; }
			//int A::B::value = 10;

			//Агрегирование и композиция
			//Агрегирование - 'это включение объекта (объектов) одного класса 
			//в состав объекта другого класса
			//#include <iostream>
			//using namespace std;
			//class Point {
			//	int x, y;
			//public:
			//	Point() {
			//		x = y = 0;
			//	}
			//	void setPoint(int xP, int yP) {
			//		x = xP; y = yP;
			//	}
			//	void Show() {
			//		cout << x << "  " << y << endl;
			//	}
			//};
			//class Figura {
			//	Point* obj;
			//	int count;
			//	int color;
			//public:
			//	Figura() {
			//		count = color = 0;
			//		obj = NULL;
			//	}
			//	void CreateFigura(int cr, int ct) {
			//		if (ct < 3) exit(0);
			//		count = ct;
			//		color = cr;
			//		obj = new Point[count];
			//		if (!obj) exit(0);
			//		int tmpX, tmpY;
			//		for (int i = 0; i < count; i++) {
			//			cout << "Set x,y:";
			//			cin >> tmpX >> tmpY;
			//			obj[i].setPoint(tmpX, tmpY);
			//		}
			//	}
			//	void ShowFigura() {
			//		cout << "C:" << color << " \nP:" << count << endl;
			//		for (int i = 0; i < count; i++) {
			//			obj[i].Show();
			//		}
			//	}
			//	~Figura() {
			//		if (obj != NULL)delete[] obj;
			//	}
			//};
			//int main() {
			//	Figura f;
			//	f.CreateFigura(255, 3);
			//	f.ShowFigura();
			//}
			//Композиция- форма агрегации, при которой каждый агрегируемый
			//объект сам может являться агрегатором.

			//Наследование - механизм , посредством которого, один объект
			//может получать свойства другого объекта и добавлять к ним
			//черты характерные только для него.
//#include <iostream>
//using namespace std;

//class имя_класса: спецификатор_доступа имя_базового_класса{
//	описание_класса;
// }
//Конструктор базового класса всегда вызывается и выполняется до
// конструктора производного класса
// 
// Деструкторы базовых классов выполняются в порядке, обратном
// перечислению классов в определении производного класса.Таким
// обрахом порядок уничтожения объекта противоположен по 
// отношению к порядку его конструирования.
// 
// Вызова деструкторов для объектов класса и для базовых классов
// выполняются неявно и почти никогда не требуют никаких действий
// программиста.
//
//class Animal {
//protected:
//	string name;
//public:
//	Animal(string nameP) :name{ nameP } {};
//	void voice() {
//		cout << this->name << " подал голос" << endl;
//	}
//};
//class Cat :public Animal {
//public:
//	Cat(string nameP) :Animal(nameP) {};
//	void voice() {
//		cout << this->name << " мяу-мяу" << endl;
//	}
//};
//int main() {
//	setlocale(LC_ALL, "");
//	Cat cat("Мурка");
//	Animal dog("Муха");
//	cat.voice();
//	dog.voice();
//}

//Создайте класс транспорт , от него создайте производный класс
// машина и переопределите метод сигнал


//Множественное наследование - особый вид наследования в ООП , когда класс может наследовать
//свойства и методы более чем от одного родительского класса.


//#include <string>
//
//class Animal {
//public:
//	void eat() {
//		cout << "Animal eats food" << endl;
//	}
//};
//class Pet {
//public:
//	void play() {
//		cout << "Pets plays with owner" << endl;
//	}
//};
//class Dog :public Animal, public Pet {
//public:
//	void bark() {
//		cout << "Dog barks" << endl;
//	}
//};
//int main() {
//	Dog myDog;
//	myDog.bark();
//	myDog.eat();
//	myDog.play();
//}

//Виртуальный базовый класс- класс, который используется в констексте множественного наследования, 
//чтобы предотвратить проблемы связанные с алмазным наследованием.

//class Shape {//Виртуальный базовый класс
//public:
//	virtual void draw() {
//		cout << "Базовый класс"<<endl;
//	};//Чисто виртуальная функция
//};
//class Circle : public virtual  Shape {
//public:
//	void draw() override {
//		cout << "draw circle" << endl;
//	}
//};
//class Square : public virtual Shape {
//public:
//	void draw()  override {
//		cout << "draw square" << endl;
//	}
//};
//
//class Graphic :public Circle, public Square{
//public :
//	void draw(){
//		Shape::draw();
//	}
//};
//int main() {
//	Graphic g;
//	g.draw();
//}
//override - явным образом указывает что мы хотим переопределить функцию , а не скрыть ее
//
//Создать абстрактный базовый класс «Транспортное средство»
//и производные классы «Автомобиль», «Велосипед», «Повозка».
//Подсчитать время и стоимость перевозки пассажиров и грузов
//каждым транспортным средством

//class Transport {
//protected:
//	int time;
//	int st;
//public:
//	void buy() {
//		cout << "Стоимость вашей поездки составила: " << time * st;
//	}
//};
//class Auto :public Transport {
//	int st = 20;
//	int time;
//public:
//	Auto(int timeP) :time(timeP) {};
//	void buy() {
//		cout << "Стоимость вашей поездки составила: " << time * st << endl;
//	}
//};
//class Velo :public Transport {
//	int st = 10;
//	int time;
//public:
//	Velo(int timeP) :time(timeP) {};
//	void buy() {
//		cout << "Стоимость вашей поездки составила: " << time * st << endl;
//	}
//};
//class Pov :public Transport {
//	int st = 5;
//	int time;
//public:
//	Pov(int timeP) :time(timeP) {};
//	void buy() {
//		cout << "Стоимость вашей поездки составила: " << time * st << endl;
//	}
//};
//int main() {
//	setlocale(LC_ALL, "");
//	Auto a{ 152 };
//	Velo b{ 152 };
//	Pov c{ 152 };
//	a.buy();
//	b.buy();
//	c.buy();
//}
//Объяснение кода :
//Базовые классы :
//Квадрат имеет методы для вычисления площади и периметра.
//Окружность имеет методы для вычисления площади и длины окружности.
//Класс ВписаннаяОкружность :
//Наследует от обоих классов(Квадрат и Окружность).
//В конструкторе определяется радиус окружности как половина стороны квадрата.
//Метод информация позволяет вывести данные о квадрате и окружности.
//Пример использования :
//Мы создаём объект ВписаннаяОкружность с заданной стороной квадрата и выводим 
//информацию о нем.



//class kv {
//protected:
//	int a;
//public:
//	kv(int ap) :a{ap} {}
//	void P() {
//		cout << "периметр равен: " << a * 4 << endl;
//	}
//	void S() {
//		cout << "площадь равна: " << a * a << endl;
//	}
//};
//
//class ok {
//protected:
//	int r;
//public:
//	ok(int rp) :r{ rp } {}
//	void len() {
//		cout << "длина окружности равна: " << 2 * 3.14 * r << endl;
//	}
//	void S() {
//		cout << "Площадь окружности равна: " << 3.14 * (r * r) << endl;
//	}
//};
//
//
//class vp :public ok, public kv {
//public:
//	vp(int ap) : kv(ap), ok(ap / 2) {}
//	void show() {
//		kv::P();
//		kv::S();
//		ok::len();
//		ok::S();
//	}
//};
//
//int main() {
//	vp w{10};
//	w.show();
//}


/*Класс Колеса: Этот класс представляет колеса автомобиля и хранит количество колес.
Метод информация возвращает строку с информацией о количестве колес.
Класс Двигатель: Этот класс хранит информацию о двигателе, включая его мощность и тип.
Метод информация возвращает соответствующие характеристики двигателя.
Класс Двери: Для представления дверей автомобиля класс хранит количество дверей.
Метод информация аналогично возвращает соответствующую строку.
Класс Автомобиль: Этот класс наследует от всех трех классов и инициализирует их атрибуты.
Метод информация агрегирует информацию о колесах, двигателе и дверях, формируя полное
описание автомобиля.*/
//class Kolesa {
//	int kolvo;
//public:
//	Kolesa(int kolvoP) :kolvo{ kolvoP } {};
//	void Kolvo() {
//		cout << "количество колес: " << kolvo << endl;
//	}
//};
//class Dviz {
//	int moh;
//	string tip;
//public:
//	Dviz(int mohP, string tipP) :moh{ mohP }, tip{ tipP } {};
//	void mohnost() {
//		cout << "мощнсть: " << moh << endl;
//	}
//	void tipp() {
//		cout << "тип: " << tip << endl;
//	}
//};
//class Dveri {
//	int kolvo;
//public:
//	Dveri(int kolvoP) :kolvo{ kolvo } {};
//	void Kolvo() {
//		cout << "количество дверей: " << kolvo << endl;
//	}
//};
//class Auto :public Kolesa, public Dviz, public Dveri {
//public:
//	Auto(int kolvoP,int mohP,string tipP,)
//	Kolesa::kolvo();
//};


//Виртуальные функции - один из важнейших приемов реализации полиморфизма.
//Позволяет создавать общий код , который может работать как с объектами
//базового класса, так и с объектами любого его класса-наследника. При этом 
//базовый класс определяет способы работы с объектами и любые его 
//наследники могут предоставлять конкретную реализацию этого способа.
//(С помощью виртуальных функций объект сам определяет свое поведение)
//A obj_a;//базовый
//B obj_b;//производ от А
//C obj_c;//производный от B
//A* obj;
//obj = &obj_c;
//obj = &obj_a;

//B* obj;- указатель на производный класс, не может ссылаться на базовый
//obj = &obj_a;
//#include <iostream>
//using namespace std;
//class A {
//public: 
//	virtual void v_func() {
//		cout << "objA";
//	};//описивает некое поведение класса А
//};
//class B:public A {
//public:
//	virtual void v_func() {
//		cout << "objB";
//	};//Замещающая функция - если у функции 
//	//одинаковое название как и в базовом классе 
//};
//int main() {
//	A* ptr_obj;
//	B objB;
//	A objA;
//	ptr_obj = &objA;
//	ptr_obj->v_func();
//	ptr_obj = &objB;
//	ptr_obj->v_func();
//};
//Если в базовом классе от которго наследуется потребуется изменить
//действие фукнции но даннный метод не является виртуальным, его
//нельзя будет переопределить

//При замещении виртуальных функций требуется полное совпадение типов 
//параметров, имен функций и типов возращаемых значений в базовом и
//производных классах

//Полиморфмизм - переопределение наследником функций-членов базового класса
//Полиморфизм бывает динамическим, когда вызываемая функция определяется
//во время выполнения (позднее связывание) и статическим(ранее связывание)

//class A{
//public:
//	virtual void v_func() = 0;
//};
//Класс который содержит хотя бы одну виртуальную функцию, называется 
//абстрактным классом(класс заготовка) - для этого класса нельзя 
//создать объекты такого класса.

//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Animal {
//public:
//	char Title[20];
//	Animal(const char* t) {
//		strcpy_s(Title, t);
//	}
//	virtual void speak() = 0;
//};
//class Frog :public Animal {
//public:
//	Frog(const char* t) :Animal(t) {};
//	virtual void speak() {
//		cout << Title << " say kwa-kwa\n";
//	}
//};
//class Dog :public Animal {
//public:
//	Dog(const char* t) :Animal(t) {};
//	virtual void speak() {
//		cout << Title << " say gav-gav\n";
//	}
//};
//class Cat :public Animal {
//public:
//	Cat(const char* t) :Animal(t) {};
//	virtual void speak() {
//		cout << Title << " say myu-myu\n";
//	}
//};
//class Lion :public Cat {
//public:
//	Lion(const char* t) :Cat(t) {};
//	virtual void speak() {
//		cout << Title << " say rrr-rrr\n";
//	}
//};
//
//int main() {
//	Animal* animals[4] = {new Dog("Bob"),new Cat("Murka"),
//		new Frog("Vasya"),new Lion("King") };
//	for (int i = 0; i < 4; i++) {
//		animals[i]->speak();
//	}
//}

//Создать базовый класс «Домашнее животное» и производные
//классы «Собака», «Кошка», «Попугай», «Хомяк».С помощью конструктора
//установить имя каждого животного и его характеристики.
//Реализуйте для каждого из классов функции :
//Sound – издает звук животного(пишем текстом в консоль);
//Show – отображает имя животного;
//Type – отображает название его подвида.
//
//class Animal {
//public:
//	char Title[20];
//	char Poroda[20];
//	Animal(const char* t,const char*p1) {
//		strcpy_s(Title, t);
//		strcpy_s(Poroda, p1);
//	}
//	
//	virtual void sound() = 0;
//	virtual void show() = 0;
//	virtual void type() = 0;
//};
//class Dog :public Animal {
//public:
//	Dog(const char* t, const char* Poroda) :Animal(t, Poroda) {};
//	virtual void sound() {
//		cout << Title << " say gav-gav\n";
//	}
//	virtual void show() {
//		cout << Title << endl;
//	}
//	virtual void type() {
//		cout << Poroda << endl;
//	}
//};
//class Cat :public Animal {
//public:
//	Cat(const char* t, const char* Poroda) :Animal(t,Poroda) {};
//	virtual void sound() {
//		cout << Title << " say meow-meow\n";
//	}
//	virtual void show() {
//		cout << Title << endl;
//	}
//	virtual void type() {
//		cout << Poroda << endl;
//	}
//};
//class Popugay :public Animal {
//public:
//	Popugay(const char* t, const char* Poroda) :Animal(t,Poroda) {};
//	virtual void sound() {
//		cout << Title << " say chik-chik\n";
//	}
//	virtual void show() {
//		cout << Title << endl;
//	}
//	virtual void type() {
//		cout << Poroda << endl;
//	}
//};
//class Hamster :public Animal {
//public:
//	Hamster(const char* t, const char* Poroda) :Animal(t,Poroda) {};
//	virtual void sound() {
//		cout << Title << " say pi-pi\n";
//	}
//	virtual void show() {
//		cout << Title << endl;
//	}
//	virtual void type() {
//		cout << Poroda << endl;
//	}
//};
//
//int main() {
//		
//	Animal* animals[4] = {new Dog("Bob","Стафорд"),new Cat("Murka","Какая-то"),
//		new Popugay("Vasya",""),new Hamster("King","")};
//	for (int i = 0; i < 4; i++) {
//		animals[i]->sound();
//		animals[i]->show();
//		animals[i]->type();
//	}
//}

//class A {
//public:
//	int val;
//};
//class B :public virtual A {
//public: int val;
//};
//class C: public virtual A{};
//class D : public B, public C {
//public:
//	int Get_Val() {
//		return val;
//	}
//};
//Виртуальные базовые классы используются только при множественном наследовании
//class Base {
//private:
//	char* sp1;
//	int size;
//public:
//	Base(const char* S, int s) {
//		size = s;
//		sp1 = new char[size];
//		cout << "Base";
//	}
//	virtual ~Base() {
//		cout << "Base";
//		delete[]sp1;
//	}
//};
//class Derived : public Base {
//private:
//	char* sp2;
//	int size2;
//public:
//	Derived(const char* S1, int s1, const char* S2, int s2) :Base(S1, s1) {
//		size2 = s2;
//		sp2 = new char[size2];
//		cout << "Derived";
//	}
//	virtual ~Derived() {
//		cout << "Derived";
//		delete[]sp2;
//	}
//};
//int main() {
//	/*Derived str("string 1", 9, "string 2", 9);*/
//	Base* pBase;
//	pBase = new Derived("string 1", 9, "string 2", 9);
//	delete pBase;
//}

//class Something {
//public:
//	virtual ~Something() = 0;
//};
//Something::~Something() {};
//Создать абстрактный базовый класс с виртуальной
//функцией — корни уравнения.Создать производные
//классы : класс линейных уравнений и класс квадратных уравнений.
//Определить функцию вычисления
//корней уравнений.

#include<iostream>
#include <math.h>
//using namespace std;
//class ku {
//public:
//	void virtual kvur(int a,int b, int c) = 0;
//};
//class ku2 : public ku {
//public:
//	void virtual kvur(int a, int b, int c) {
//		int x = (c - b) / a;
//		cout << x<<endl;
//	}
//};
//class ku1 :public ku {
//public:
//	void virtual kvur(int a, int b, int c) {
//		int d = b * b - 4 * a * c;
//		if (d > 0) {
//			float x1 = (-b + pow(d, 0.5)) / (2 * a);
//			float x2 = (-b - pow(d, 0.5)) / (2 * a);
//			cout << x1 << x2;
//		}
//		else if (d == 0) {
//			float x1 = -b / (2 * a);
//			cout << x1;
//		}
//		else {
//			cout << "resheniya net";
//		}
//	}
//};
//int main() {
//	ku1 a;
//	ku2 b;
//	b.kvur(13, -21, 5);
//	a.kvur(1,-4,4);
//}

//Создать абстрактный базовый класс с виртуальной функцией – площадь.Создать производные классы : 
//прямоугольник, круг, прямоугольный треугольник, трапеция со своими функциями площади.Для проверки
//определить массив ссылок на абстрактный класс, которым присваиваются адреса различных объектов.

//class Ravil {
//
//public:
//	void virtual Площадь(int a=0,int b=0,int c=0) = 0;
//};
//class Pr:public Ravil {
//public:
//	void virtual Площадь(int a=0,int b=0,int c=0) {
//		c = a * b;
//		cout << c << endl;
//	}
//};
//class Circle :public Ravil {
//public:
//	void virtual Площадь(int a = 0, int b = 0, int c = 0) {
//		float e = 3.14 * a * a;
//		cout << e << endl;
//	}
//};
//class Triangle :public Ravil {
//public:
//	void virtual Площадь(int a = 0, int b = 0, int c = 0) {
//		c = a * b / 2;
//		cout << c<<endl;
//	}
//};
//class Vlad :public Ravil {
//public:
//	void virtual Площадь(int a = 0, int b = 0, int c = 0) {
//		int e = (a + b) * c / 2;
//		cout << e << endl;
//	}
//};
//int main() {
//	Pr a;
//	a.Площадь(5, 10);
//	Circle b;
//	b.Площадь(2);
//	Triangle c;
//	c.Площадь(5, 8);
//	Vlad vl;
//	vl.Площадь(4, 9, 6);
//}
//
//class Shape {
//public:
//	int x, y;
//	Shape() :x{ 0 }, y{ 0 } {};
//	Shape(int xp, int yp) :x{ xp }, y{ yp } {};
//	virtual void Show() = 0;
//};
//class Square : public Shape {
//public:
//	int a;
//	Square(int ap, int xp, int yp) :a{ ap }, Shape{ xp,yp } {};
//	virtual void Show(){
//		cout << "square: " << x << " " << y << endl << a << endl;
//}
//};
//class Rectangle : public Shape {
//public:
//	int a;
//	int b;
//	Rectangle(int ap, int bp, int xp, int yp) :a{ ap }, b{ bp }, Shape { xp, yp } {};
//	virtual void Show() {
//		cout << "rectangle: " << x << " " << y << endl << a <<" " << b << endl;
//	}
//};
//class Circle : public Shape {
//public:
//	int a;
//	Circle(int ap, int xp, int yp) :a{ ap }, Shape{ xp,yp } {};
//	virtual void Show() {
//		cout << "circle: " << x << " " << y << endl << a << endl;
//	}
//};
//class Ellipse : public Shape {
//public:
//	int a;
//	int b;
//	Ellipse(int ap, int bp, int xp, int yp) :a{ ap }, b{ bp },Shape { xp, yp } {};
//	virtual void Show() {
//		cout << "Ellipse: " << x << " " << y << endl << a << " "<< b << endl;
//	}
//};
//int main() {
//	Shape* mas[4]{
//		new Square(1,2,3),
//		new Rectangle(1,2,3,4),
//		new Circle(1,2,3),
//		new Ellipse(1,2,3,4)
//	};
//	for (int i = 0; i < 4; i++) {
//		mas[i]->Show();
//	}
//
//}

//Исключение - исключительная ситуация, генерируемая программой, например, в момент
//возникновения ошибки
//try - контролировать - c помощью фигурных скобок отделяет определенную область кода, 
//в которой может быть сгенерированно исключение;
//throw - (бросать )- оператор который в момент возникновения исключительной ситуации
//  генерирует исключение и выводит программу из "критического" блока
// catch - поймать - оператор который позволяет "поймать" Конкретное исключение и
// проанализировав его выдать нужную реакцию 
//#include <iostream>
//using namespace std;

//void main() {
//	
//	cout << "Start" << endl;
//	try {
//		cout << "Step 1"<<endl;
//		throw 100;
//		cout << "Step 2" << endl;
//	}
//	catch( int g) {
//		cout << "Your error " << g << endl;
//	}
//
//}

//void Some() {
//	int a;
//	int b;
//	try {
//		cin >> a >> b;
//		if (b == 0)throw 0;
//		int c = a / b;
//		cout << c;
//	}
//	catch (...) {
//		cout << "Error";
//	}
//}
//void Test(int a) {
//	if (a == 2) {
//		throw 2;
//	}
//	if (a == 3) {
//		throw 3;
//	}
//}
//int main() {
//	try {
//		Test(2);
//		Test(3);
//	}
//	catch (...) {
//		cout << "Error";
//	}
//	/*Some();*/
//	/*try {
//		int a, b;
//		cin >> a >> b;
//		if (b == 0)throw 0;
//		cout << a / b;
//		throw "error";
//	}
//	catch (...) {
//		cout << "Error" << endl;
//	}*/
//	/*catch (int g) {
//		cout << "Division by zero";
//	}
//	catch (const char* g) {
//		cout << g;
//	}*/
//
//}

//Пространство имен  (namespace) - в программировании именованная, либо неименованная 
 //область определения перменных, типов, констант

//#include <iostream>
//using namespace std;
//int main() {
//	int a = 0;
//	try {
//		cin >> a;
//		if (a <= -2147483648 or a>=2147483647)throw 0;
//		cout << a;
//	}
//	catch (int g) {
//		cout << "Vixod za ramku" << endl;
//	}
//}
//namespace combat {
//	void fire() {
//		cout << "Vistrel" << endl;
//	}
//}
//namespace exploration {
//	void fire() {
//		cout << "Ogon" << endl;
//	}
//}
//using namespace combat;
//
//int x = 15;
//int main() {
//	int x = 10;
//	cout << ::x;
//	/*fire();*/
//}

//Глобальное пространство имен - название области видимости самого высокого уровня, то
//есть той, где существуют глобальные переменных
//:: - символ расширения области видимости

//Написать функцию вычисления значения по заданной строке
//символов, являющихся записью этого числа в десятичной системе исчисления.
//Предусмотреть случай выхода за границы диапазона определяемого типом int.
//Используйте механизм исключений.

//Создайте класс калькулятор в которой будет возможность складывать значения, 
// вычитать значения, перемножать, делить, добавить вариации целочисленного деления, остатка 
// от деления и обычного деления

//namespace Calc {
//	double plus1(double a, double b) {
//		return a + b;
//	}
//	double minus1(double a, double b) {
//		return a - b;
//	}
//	double del(double a, double b) {
//		return a / b;
//	}
//	double umn(double a, double b) {
//		return a * b;
//	}
//	int cel_del(int a, int b) {
//		return a / b;
//	}
//	int ost_del(int a, int b) {
//		return a % b;
//	}
//}
//
//using namespace Calc;
//
//int main() {
//	double a = 10.4;
//	double b = 5.2;
//	cout << plus1(a, b) << endl;
//	cout << minus1(a, b) << endl;
//	cout << del(a, b) << endl;
//	cout << umn(a, b) << endl;
//	cout << cel_del(a, b) << endl;
//	cout << ost_del(a, b) << endl;
//}

/*
Создайте программу которая запрашивает у пользователя размер массива, после чего мы выделяем для 
массива динамическую память, заполнить массив случайными числами, после чего запрашиваем у пользователя
сколько элементов показать на экране(функция вывода), и необходимо создать функцию которая отобразит 
сколько памяти занимает массив	
*/
//#include <iostream>
//using namespace std;
//
//void Print(int* ar,int n) {
//	for (int i = 0; i < n; i++) {
//		cout << ar[i] << " ";
//	}
//	cout << endl;
//}
//void randomazer(int* ar, int n) {
//	for (int i = 0; i < n; i++) {
//		ar[i] = rand() % 100;
//	}
//}
//auto pamit(int* ar) {
//	return _msize(ar);
//}
//template <typename T>
//auto pamit_ost(T* ar) {
//	int n=0;
//	for (int i = 0; i < _msize(ar) / sizeof(ar[0]); i++) {
//		if (ar[i] != -842150451) n++;
//	}
//	return _msize(ar) - sizeof(ar[0])*n;
//}
//int main() {
//	setlocale(LC_ALL, "");
//	int n;
//	cout << "размер массива: ";
//	cin >> n;
//	int* ar = new int[n];
//	int b;
//	try {
//		cout << "сколько чисел нужно заполнить: ";
//		cin >> b;
//		if (b > n) throw 52;
//		randomazer(ar, b);
//	}
//	catch (int g) {
//		cout << "неверное значение" << endl;
//	}
//	try {
//		cout << "сколько элементов показать на экран: ";
//		int a;
//		cin >> a;
//		if (a > n or a>b) throw 42;
//		Print(ar, a);
//	}
//	catch (int g) {
//		cout << "неверное значение" << endl;
//	}
//	cout << pamit(ar) << endl;
//	cout<<pamit_ost(ar);
//}


//Создайте класс BankAccount, представляющий банковский счет.Этот класс должен включать 
// функции для депозита, снятия денег и получения текущего баланса.Также необходимо 
// обрабатывать исключения в следующих ситуациях :
//Недостаточно средств для снятия : Если пользователь пытается снять больше денег, 
// чем у него на счету, программа должна выбросить исключение std::runtime_error с
//  сообщением "Недостаточно средств".
//Негативная сумма депозита : Если пользователь пытается внести негативную сумму,
//  программа должна выбросить исключение std::invalid_argument с сообщением "Сумма
//  должна быть положительной".
//Негативная сумма снятия : Если пользователь пытается снять негативную сумму,
//  программа должна выбросить исключение std::invalid_argument с сообщением "Сумма 
// должна быть положительной".
//Требования к реализации :
//Создайте класс BankAccount с приватным полем balance, представляющим текущий 
// баланс счета, и несколькими публичными методами :
//deposit(double amount) — для внесения средств на счет.
//withdraw(double amount) — для снятия средств со счета.
//double getBalance() — для получения текущего баланса.


//class BankAccount {
//	double balance;
//public:
//	BankAccount(double balance): balance{balance}{};
//
//	double getBalance(){
//		return balance;
//	}
//
//	void deposit(double amount) {
//		try {
//			if (amount <= 0) {
//				throw invalid_argument("Слишком мало денег!");
//			}
//			balance += amount;
//		}
//		catch (invalid_argument e) {
//			cout << e.what();
//		}
//
//		
//	}
//
//	void withdraw(double amount) {
//		try {
//			if (balance < amount) {
//				throw invalid_argument("Недостаточно средств на балансе!");
//			}
//			if (amount <= 0) {
//				throw invalid_argument("Сумма должна быть положительной!");
//			}
//
//			balance -= amount;
//		}
//		catch (invalid_argument e) {
//			cout << e.what();
//		}
//	}
//};
//
//int main() {
//	setlocale(LC_ALL, "");
//	BankAccount account{ 600 };
//
//	cout << account.getBalance() << " руб." << endl;
//	int a;
//	int b;
//	cout << "Введите сумму депозита: ";
//	cin >> a;
//	account.deposit(a);
//	cout << account.getBalance() << " руб." << endl;
//	cout << "Введите сумму снятия: ";
//	cin >> b;
//	account.withdraw(b);
//
//}





//Задача 1: Класс "Книга братан"
//Создайте класс Book, представляющий книгу в библиотеке.Этот класс должен включать 
// следующие атрибуты и методы :
//
//Атрибуты:
//Название книги(строка).
//Автор книги(строка).
//Год издания(целое число).
//Штрих - код(строка).
//Методы :
//	Конструктор, принимающий название, автора, год издания и штрих - код.Проверьте, 
// что год издания не является отрицательным числом.Если это так, выбросьте исключение
//  std::invalid_argument с сообщением "Год издания не может быть отрицательным".
//	Метод для отображения информации о книге.
//	Метод для обновления штрих - кода(входные данные должны быть непустой строкой; 
//если это не так, выбросьте исключение с сообщением "Штрих-код не может быть пустым").


//Задача 2: Класс "Автомобиль"
//Создайте класс Car, представляющий автомобиль с следующими атрибутами и методами :
//
//Атрибуты:
//Марка(строка).
//Модель(строка).
//Год выпуска(целое число).
//Пробег(двойное число).
//Методы :
//	Конструктор, который принимает марку, модель и год выпуска.Проверьте, что
//	год не меньше 1886 года(год появления первого автомобиля); если это так, 
//	выбросьте исключение std::invalid_argument с сообщением "Некорректный год выпуска".
//	Метод для увеличения пробега, принимающий значение, которое увеличить; если
//	значение отрицательное, выбросьте исключение с сообщением "Пробег не может 
//	быть уменьшен".
//	Метод для вывода информации об автомобиле.




//Задача 3: Класс "Числовой массив"
//Создайте класс NumberArray, представляющий динамический массив чисел 
//с возможностью добавления, удаления и получения элементов.Класс должен
//включать следующие методы :
//Конструктор, создающий массив заданного размера.
//Метод для добавления элемента.Проверьте, что размер массива не превышен;
//выделения памяти, выбросьте стандартное исключение std::bad_alloc.
//Метод для удаления элемента по индексу.Если индекс выходит за пределы массива,
//выбросьте исключение std::out_of_range с сообщением "Индекс вне диапазона".
//Метод для получения элемента по индексу, который также должен выбрасывать 
//std::out_of_range, если индекс неверный.

//class NumberArray {
//	int* array;
//	int size;
//	int index = 0;
//public:
//	NumberArray(int size) : size{ size } {
//		array = new int[size];
//	};
//
//	void append(int element) {
//		try {
//			if (index >= size) throw bad_alloc();
//			
//			array[index++] = element;
//		}
//		catch (bad_alloc e) {
//			cout << e.what() << endl;
//		}
//	}
//
//	void pop(int index) {
//		try {
//			if (index >= size || index < 0) throw out_of_range("Индекс вне размера массива!");
//
//			array[index] = NULL;
//		}
//		catch (out_of_range e) {
//			cout << e.what() << endl;
//		}
//	}
//
//	int get(int index) {
//		try {
//			if (index >= size || index < 0) throw out_of_range("Индекс вне размера массива!");
//
//			return array[index];
//		}
//		catch (out_of_range e) {
//			cout << e.what() << endl;
//		}
//	}
//
//	~NumberArray() {
//		delete[] array;
//	}
//};
//
//int main() {
//	setlocale(LC_ALL, "");
//	NumberArray arr{5};
//
//	arr.append(5);
//	arr.append(5);
//	arr.append(5);
//	arr.append(5);
//	arr.append(5);
//	cout << arr.get(6);
//}



//Задача 4: Класс "Студент"
//Создайте класс Student, который будет представлять студента с атрибутами, 
//такими как имя, возраст и список оценок.Реализуйте методы для добавления и 
//удаления оценки с обработкой ошибок.
//
//Атрибуты :
//	Имя(строка).
//	Возраст(целое число).
//	Список оценок(вектор чисел с плавающей запятой).
//	Методы :
//	Конструктор, который принимает имя и возраст(возраст должен быть положительным 
//		числом; если это не так, выбросьте исключение std::invalid_argument с 
//		сообщением "Возраст должен быть положительным").
//	Метод для добавления оценки; если оценка выходит за пределы 0 - 100, выбросьте 
//	std::out_of_range с сообщением "Оценка должна быть в пределах от 0 до 100".
//	Метод для получения среднего значения оценок с обработкой случая, когда у 
//	студента нет оценок — выбросьте std::runtime_error с сообщением "Нет оценок".

//class Automobil {
//	string mark;
//	string model;
//	int year;
//	double probeg;
//public:
//	Automobil(string m, string mo, int y, double p) : mark{ m }, model{ mo }, probeg{ p } {
//		try {
//			if (y < 1886) {
//				throw invalid_argument("Некорректный год выпуска");
//			}
//		}
//		catch (invalid_argument t) {
//			cout << t.what();
//		}
//		year = y;
//	}
//	void addProbeg(double num) {
//		try {
//			if (num < 0) {
//				throw invalid_argument("Пробег не может быть уменьшен\n");
//			}
//			probeg += num;
//		}
//		catch (invalid_argument t) {
//			cout << t.what();
//		}
//	}
//	void showInfo() {
//		cout << "\nМарка: " << mark << "\nМодель: " << model << "\nГод выпуска: " << year << "\nПробег: " << probeg;
//	}
//	//Марка(строка).
//	//Модель(строка).
//	//Год выпуска(целое число).
//	//Пробег(двойное число).
//};
//
//int main() {
//	setlocale(LC_ALL, "");
//	Automobil autoo("vaz", "2112", 1999, 100000);
//	autoo.showInfo();
//	autoo.addProbeg(-3);
//	autoo.showInfo();
//	autoo.addProbeg(25000);
//	autoo.showInfo();
//}

//int main() {
//	double d;
//	d = (double)10 / 3;
//	cout << d;
//	}

//static_cast - используется для безопасного приведения типов,
//когда компилятор может проверить корректность этого 
//преобразования на этапе компиляции

//class Base {
//public:
//	virtual void show() {
//		cout << "Base class" << endl;
//	}
//};
//class Derived : public Base {
//public:
//	//override - говорит о том что мы переопределяем функцию
//	void show() override{
//		cout << "Derived class" << endl;
//	}
//};
//int main() {
//	Base* b = new Derived();
//	Derived* d = static_cast<Derived*>(b);
//	d->show();
//	delete b;
//}
//dynamic_cast - использует возможности полиморфизма и проверяет
//тип во время выполнения
//int main() {
//	Base* b = new Derived();
//	Derived* d = dynamic_cast<Derived*>(b);
//	if (d) {
//		d->show();
//	}
//	else {
//		cout << "Convert false";
//	}
//	delete b;
//}
//const_cast - позволяет добавлять и удалять const 
//квалификатор у объектов.Необходим в тех ситуациях , когда
//необходимо изменить объект, который изначально был объявлен 
//как const
//
//void modifyValue(const int* val) {
//	int* nonConstVal=const_cast<int*>(val);
//	*nonConstVal = 10;
//}
//int main() {
//	int x = 5;
//	const int* const ptr = &x;
//	modifyValue(ptr);
//	cout << x;
//
//}

//reinterpret_cast- позволяет выполнять произвольные преобразования 
//указателей. Используется когда необходимо переделать один тип
//указателя в другой без проверок совместимости
//class Base {
//public :
//	int a;
//};
//class Derived {
//public:
//	int b;
//};
//int main() {
//	Base base;
//	base.a = 5;
//	Derived* d = reinterpret_cast<Derived*>( & base);
//	d->b = 10;
//	cout << base.a << endl;
//}

//STL - стандартная библиотека шаблонов
//Структура STL:
//Контейнер - блок для хранения данных, управления ими и 
//размещения.
//Алгоритм - спец. функция для работы с данными, которые
//содержатся в контейнере
//Итератор - Спец.указатель который позволяет алгоритмам 
//перемещаться по данным конкретного контейнера.
//Функторы - механизм инкапсуляции функций в конкретном 
//объекте для использования его другими компонентами
//Аллокатор - распределитель памяти.
//Предикат - функция нестандартного типа , используемая 
//в контейнере.

//auto_ptr - предоставляет возможность автоматического управления
//временем жизни объекта, на который он указывает
//memory
//int main() {
//	unique_ptr<int> ptr1(new int(42));
//	cout << *ptr1;
//	unique_ptr<int> ptr2 = move(ptr1);//Move - передача
//	//владения указателем
//	if (!ptr1.get()) {
//		cout << "ptr1 is empty"<<endl;
//	}
//	else {
//		cout << *ptr2 << endl;
//	}
//}

//int main() {
//	vector<int> number{ 1,2,3,4,5 };
//	vector<int>::iterator it;//Создание итератора
//	for (it = number.begin(); it != number.end(); ++it) {
//		cout << *it<<" ";
//	}
//	cout << endl;
//	for (it = number.begin(); it != number.end(); ++it){
//		*it+=10;
//		}
//	for (it = number.begin(); it != number.end(); ++it) {
//		cout << *it << " ";
//	}
////}
//int main() {
//	list<int> num{ 1,2,3,4,5 };
//	list<int>::iterator it;
//	for (it = num.begin(); it != num.end(); ++it) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	it = find(num.begin(), num.end(),3);
//	if (it != num.end()) {
//		num.erase(it);
//	}
//	for (it = num.begin(); it != num.end(); ++it) {
//		cout << *it << " ";
//	}
//}
//int main() {
//	vector<int> number{ 1,2,3,4,5 };
//	vector<int>::const_iterator it;//Создание итератора
//	for (it = number.cbegin(); it != number.cend(); ++it) {
//		cout << *it<<" ";
//	}
//	cout << endl;
//
//}
//Написать программу «Автоматизированная информационная
//система ЖД вокзала».Система содержит : сведения об 
//отправлении поездов дальнего следования.Для каждого
//поезда указываем : номер, время отправления, станцию 
//назначения.Обеспечить :
//	■ Ввод данных в систему;
//■ Вывод информации о всех поездах;
//■ Вывод информации о запрашиваемом поезде.
//Использовать контейнерный класс vector

//Напишите программу в которой необходимо создать следующие классы
//поезд, путь, дочерний класс от обоих расписание, в расписании необходимо
//хранить информацию по всем отправлениям поездов, и сохранить все пункты
//вашего расписания в векторе
//
//class Train {
//	string model;
//	int vagon;
//	int speed;
//};
//class Road {
//	string A;
//	string B;
//	int num;
//};
//class Raspisanie {
//	Train train;
//	Road road;
//	double time;
//
//};
//
//int main() {
//	vector<Raspisanie> rasp = {  };
//}

//Поток - последовательность байтов, не зависящая от устройств с 
//которыми ведется обмен данными
//iostream
//istream : cin >>
//ostream: cout,cerr-отправка сообщений об ошибках, clog <<

//Файловый ввод и вывод с применением потоков
//ofstream
//ifstream
//fstream

//// Максимальная длина пути к файлу
//#define MAX_PATH 260
//// Количество столбцов на экране
//#define NUM_COLS 18
//// Количество строк на экране
//#define NUM_ROWS 24
//
//int main() // Исправлено с void на int
//{
//	char path[MAX_PATH];
//	// Запрашиваем путь к файлу
//	cout << "Input path to file: ";
//	cin.getline(path, MAX_PATH);
//
//	int counter = 0, i = 0, j = 0;
//	char text[NUM_COLS];
//
//	// Открытие файла в двоичном режиме
//	ifstream input(path, ios::in | ios::binary);
//	if (!input)
//	{
//		cout << "Cannot open file for display!" << endl;
//		return 1; // Возвращаем не нулевой код ошибки
//	}
//
//	// Режим отображения в верхнем регистре для шестнадцатиричного вывода
//	cout.setf(ios::uppercase);
//
//	// Пока не конец файла, читаем из него данные и производим форматированный вывод на экран
//	while (!input.eof())
//	{
//		// Чтение данных в массив
//		input.read(text, NUM_COLS);
//		i = input.gcount(); // Получаем количество считанных байт
//
//		for (j = 0; j < i; j++)
//		{
//			// Вывод в шестнадцатеричном формате
//			if ((unsigned char)text[j] < 0x10)
//				cout << setw(2) << 0 << hex << (unsigned int)(unsigned char)text[j];
//			else
//				cout << setw(3) << hex << (unsigned int)(unsigned char)text[j];
//		}
//
//		// Выравнивание для незавершенной строки
//		for (; j < NUM_COLS; j++)
//			cout << "   "; // Обеспечиваем 3 пробела для выравнивания
//
//		cout << "\t";
//
//		for (j = 0; j < i; j++)
//		{
//			// Символ не является управляющим?
//			if (text[j] > 31 && text[j] <= 255)
//				cout << text[j];
//			else
//				cout << ".";
//		}
//		cout << "\n";
//
//		// Если экран уже заполнен, производим остановку
//		if (++counter == NUM_ROWS)
//		{
//			counter = 0;
//			cout << "Press any key to continue..." << flush;
//			// Ожидаем нажатия любой клавиши
//			cout << "\n";
//		}
//	}
//
//	// Закрываем файл
//	input.close();
//	return 0; // Возвращаем 0 для успешного завершения
//}

//class Person {
//private:
//	string name;
//	int age;
//public:
//	Person() :name(""), age{ 0 } {};
//	Person(const string& name, int age) :name{ name }, age{ age } {};
//	void saveToFile(ofstream& outFile) const {
//		outFile << name << endl;
//		outFile << age << endl;
//	}
//	void loadFromFile(ifstream& inFile) {
//		getline(inFile, name);
//		inFile >> age;
//		inFile.ignore();
//	}
//	void display() const {
//		cout << "Name:" << name << ",Age:" << age << endl;
//	}
//};
//int main() {
//	setlocale(LC_ALL, "");
//	vector<Person> students = { };
//	vector<Person>::iterator it;
//	while (true) {
//		int a;
//		cout << "1-Загрузить в файл\n 2-Выгрузить из файла\n 3-Просмотреть список\n 4-Добавить студента\n";
//		cin >> a;
//		if (a == 1) {
//			ofstream outFile("person.txt");
//			if (outFile.is_open()) {
//				for (it = students.begin(); it != students.end(); ++it)
//					it->saveToFile(outFile);
//				outFile.close();
//				cout << "Объект сохранен в файл";
//			}
//			else {
//				cerr << "Не удалось открыть файл для записи" << endl;
//			}
//		}
//		else if (a == 2) {
//			ifstream inFile("person.txt");
//			Person user1;
//			if (inFile.is_open()) {
//				students.clear();
//				while (!inFile.eof()) {
//					user1.loadFromFile(inFile);
//					students.push_back(user1);
//				}
//				inFile.close();
//				cout << "Объект загружен из файла" << endl;
//			}
//			else {
//				cerr << "Не удалось открыть файл для чтения" << endl;
//			}
//		}
//		else if (a == 3) {
//			for (it = students.begin(); it < students.end(); it++) {
//				it->display();
//			}
//		}
//	}
//	
//	
//	
//	
//	
//	
//}

//Доделайте данный код чтобы он сохранял список личностей, загружал их из файла, реализуйте
//красивое отображение записей,  Добавление студентов, удаление студентов по имени , Выход из программы


//void func(int a, int b, int c) {
//	c = a + b;
//}
//void func1(int& a, int& b, int& c) {
//	c = a + b;
//}
//int main() {
//	int a = 5, b = 6, c = 7;
//	func(a, b, c);
//	cout << c<<endl;
//	func1(a, b, c);
//	cout << c;
//
//}
//
//class Train {
//	int number;
//	string name;
//public:
//	Train() :number{ 0 }, name{ "Poezd" } {};
//	Train(int num, string name) :number{ num }, name{ name } {};
//	void print() {
//		cout << "Поезд #" << number << " , Название: " << name << endl;
//	}
//};
//
//int main() {
//	setlocale(LC_ALL, "");
//	vector<Train> depo;
//	depo.push_back({ 10,"Ласточка" });
//	depo[0].print();
//	while (true) {
//		int a = 0;
//		cout << "можно добавлять поезда, удалить последний, и просматривать список";
//		cin >> a;
//		if (a == 1) {
//			int nnum = 0;
//			string nname;
//			cin >> nnum >> nname;
//			depo.push_back({ nnum,nname});
//		}
//		if (a == 2) {
//			depo.pop_back();
//		}
//		if (a == 3) {
//			vector<Train>::iterator it;
//			for (it = depo.begin(); it < depo.end(); it++) {
//				it->print();
//			}
//		}
//		if (a == 0)break;
//	}
	//Создайте меню при помощи которого, можно добавлять поезда, удалять
	// последний, и просматривать список
	//assign - помещает в вектор набор значений с параметрами start и end
	//at(10) = [10] - возникает исключение если ничего нет
	//back() - возврат последнего элемента в векторе
	//begin - обращение к начальному элементу
	//capacity - текущая емкость вектора
	//clear()
	//empty - true -если пустой
	//end - конец вектора
	//erase - команда для удаления по индексу, можно удалять диапазоном, 
	//если указать ссылку на старт и конец
	//front - ссылка на первый элемент в векторе
	//insert - вставка элемента по индексу
	//max_size - максимальное число элементов содержаее вектор
	//pop_back - удалить последний элемент
	//push_back - добавить в конец
	//size -тек кол-во элементов в векторе


//}
/*int main() {
	list<int> numbers;
	numbers.push_front(10);
	numbers.push_back(20);
	numbers.push_back(30);

	auto it = numbers.begin();
	++it;
	numbers.insert(it, 15);

	for (auto number : numbers) {
		cout << number<<endl;
	}

	it = find(numbers.begin(), numbers.end(), 15);
	if (it != numbers.end()) {
		numbers.erase(it);
	}
	
	numbers.clear();

	if (numbers.empty()) {
		cout << "Список пуст:" << endl;
	}
}*/

//map  - контейнер, который хранит пары ключ-значение, где ключи все уникальны
//int main() {
//	map<string,int> ages;
//	ages["Alice"] = 25;
//	ages["Bob"] = 30;
//	ages["Charlie"] = 35;
//	
//	for (auto pair : ages) {
//		//first- обращение к ключу
//		//second - обращение к значению
//		cout << pair.first << " " << pair.second << endl;
//	}
//
//	if (ages.find("Bob") != ages.end()) {
//		cout << "Возраст Бобы:" << ages["Bob"] << endl;
//	}
//
//	ages.erase("Charlie");
//
//	cout << ages.size();
//
//}
//multimap контейнер который похож на map, но допускает хранение нескольких 
//значений под одним ключом. Полехен когда необходимо связать одно ключевое 
//значение с несколькими данными

//Функторы, предикаты, алгоритмы
//Функторы - (функциональный объект ) объект который ведет себя как функция.
//В С++ это класс который перегружает оператор вызова функции

//class Square {
//public:
//	int operator()(int x) const {
//		return x * x;
//	}
//};
//
//int main() {
//	Square square;
//	int result = square(5);
//	cout << result;
//}

//Предикаты - это функция или функтор, возвращающий логическое значение. 
//Предикаты часто исапользуются в алгоритмах стандартной библиотеки С++.
//
//bool isEven(int num) {
//	return num % 2 == 0;
//}
//int main() {
//	vector<int> numbers{ 1,2,3,4,5,6,7,8,9,10 };
//	auto it = find_if(numbers.begin(), numbers.end(), isEven);
//	if (it != numbers.end()) {
//		cout << *it;
//	}
//}

//Алгоритмы - набор функций в C++, предназначенный для выполнения различных 
//операций над контейнерами. Могут выполнять сортировка, поиск, преобразование и тд
//
//int main() {
//	vector<int> num{ 4,45,345,34,664,6233,5,654,7,54,6,547,5,2,346,5,785 };
//	sort(num.begin(), num.end());
//	for (auto num1 : num) {
//		cout << num1 << " ";
//	}
//	auto it = find(num.begin(), num.end(), 6233);
//	if (it != num.end()) {
//		cout << "Найдено число 6233 на позиции" << distance(num.begin(), it);
//	}
//	else {
//		cout << "NF";
//	}
//	cout << endl << endl;
//	vector<int> square(num.size());
//	transform(num.begin(), num.end(), square.begin(), [](int x) {return x * x; });
//	for (auto num1 : square) {
//		cout << num1 << " ";
//	}
//}

//[Захват](Параметры) {Тело};
//int main() {
//	/*auto a=[]() {cout << "Hello,World!" << endl; };
//	a();*/
//
//	int a1 = 40;
//	auto a = [a1](int a2) {cout << "Hello,World!"<<a1<<" "<<a2 << endl; };
//	a(15);
//}

int main() {
	cout << "Privetiki";//Релдакктор
	cout << "hello world";
}