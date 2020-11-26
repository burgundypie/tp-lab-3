#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

class Circle {
private:
	double radius;
	double ference;
	double area;

public:
	Circle(double);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();
};

#endif