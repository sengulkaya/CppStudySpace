#include <iostream>
#include <vector>

class MyClass
{
public:
	Date mdate;
	int a[1000];

};

class Date
{
public:
	int d, m, y;

};

MyClass foo();

class Point
{
public:
	Point(int, int, int);
private:

};

Point MakePoint(int x) //factory function
{
	return Point(x, x, x);
};

int main() 
{
	auto p = MakePoint(3); //same as Point(3, 3, 3);

	Point(3, 3, 3);

}