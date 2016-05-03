#include <iostream>
#include <cmath>
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"

using std::cout;
using std::cin;
using std::endl;



class Square : public Rectangle {
protected:
	double side;
	
public:
	Square(double side=0) {
		length = side;
		width = side;
	}
	~Square() {}
	
	virtual bool contains(const Point & P) const {};
	void setLength(double side){ length = side; }
	void setWidth(double side) { length = side; }


};
//class Ellipse : public Shape {
//protected: 
//	double radius;
//public:
//	virtual bool contains(const Point & P) const {}
//	Ellipse(double radius = 0) { this->radius = radius; }
//	~Ellipse() {}
//	void setRadius(double radius) { this->radius = radius; }
//	double getRadius() { return radius; }
//};
//class Circle : public Ellipse {
//
//};
void draw(const vector<Shape*> & v) {
}
int main (){
	Point O1(1, 1);
	Point O2(2, 2);
	cout << O2.distance(O1)<<endl;
}
#include "Point.h"

Point::Point(double x, double y) {
		this->x = x;
		this->y = y;
	}
Point::~Point() {}
void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::distance(const Point & p) { return abs(sqrt(((x - p.getX())*(x - p.getX())) + ((y - p.getY())*(y - p.getY())))); }
};
#ifndef POINT_H
#define POINT_H
class Point {
protected:
	double x;
	double y;
public:
	Point(double = 0, double =0);
	~Point();
	void setX(int);
	void setY(int);
	double getX() const;
	double getY() const;
	double distance(const Point &);
};
#endif 
#include "Rectangle.h"
#include "Shape.h"
#include "Point.h"

	bool Rectangle::contains(const Point & p) const {
	};
	Rectangle::Rectangle(double length = 0, double width = 0, Point &center = Point()) /* Rectangle(1,4, Point (1,1));*/ {
		this->length = length;
		this->width = width;
		this->center = center;
	}
	Rectangle::~Rectangle() {}
	void Rectangle::setLength(double length) { this->length = length; }
	void Rectangle::setWidth(double width) { this->width = width; }
	double Rectangle::getLength() { return length; }
	double Rectangle::getWidth() { return width; }
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public Shape {
protected:
	double length;
	double width;
	Point center;
public:
	virtual bool contains(const Point &) const;
	Rectangle(double, double, Point &); /* Rectangle(1,4, Point (1,1));*/
	
	~Rectangle();
	void setLength(double);
	void setWidth(double); 
	double getLength();
	double getWidth();
};

#endif RECTANGLE_H
#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"
class Shape{
protected:
public:
	virtual bool contains(const Point &) const=0;
	virtual ~Shape()=default;
};
#endif

