#include <iostream>
#include <string>
#include <cmath>

class Figure {

public:
	string Name = "undeff";
	int countOfPoints = 0;

	virtual double area()=0;

	

};

class Rectangle: public Figure {
	double a=4, b=5;
public:
	void setAB(int a1,int b1) {
		this->a = a1;
		this->b = b1;

	}
	double area()override 
	{
		return a * b;

	}
		
};

class circle: public Figure {

	double R;
public:
	void setR(double A) {

		R = A;
	}
	double area()override {
		return 3.14159265359 * pow(R,2);

	}

};



class triangleR: public Figure
{
private:
	double a, b;
public:
	
	void setKats(double x, double y) {
		a = x;
		b = y;


	}
	double area()override {

		return (a * b) / 2;
	}



};

class trapezium:public Figure {
	
public:
	double a, b, h;

	void setABH(int a, int b, int h) {
		this->a = a;
		this->b = b;
		this->h = h;

	}
	double area()override {

		return ((a + b) / 2) * h;
	}

};
