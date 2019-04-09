#include "Rectangle.h"


void RRectangle::setHigherX(double x)
{
	p_higher.setX(x);
}

void RRectangle::setLowerX(double x)
{
	p_lower.setX(x);
}

void RRectangle::setHigherY(double y)
{
	p_higher.setY(y);
}

void RRectangle::setLowerY(double y)
{
	p_lower.setY(y);
}

double RRectangle::getHigherX()
{
	return p_higher.getX();
}

double RRectangle::getHigherY()
{
	return p_higher.getY();
}

double RRectangle::getLowerX()
{
	return p_lower.getX();
}

double RRectangle::getLowerY()
{
	return p_lower.getY();
}

void RRectangle::move(double x, double y) {
	p_higher.setX(p_higher.getX() + x);
	p_higher.setY(p_higher.getY() + y);

	p_lower.setX(p_lower.getX() + x);
	p_lower.setY(p_lower.getY() + y);
}

void RRectangle::change_size(double a, double b) {
	p_higher.setY(p_higher.getY() + a);
	p_lower.setX(p_lower.getX() + b);
}

double RRectangle::sideA() {
	return abs(p_higher.getY() - p_lower.getY());
}

double RRectangle::sideB() {
	return abs((p_lower.getX() - p_higher.getX()));
}

double RRectangle::area() {
	return sideA() * sideB();
}

double RRectangle::perimeter() {
	return 2 * (sideA() + sideB());
}

bool RRectangle::compare(RRectangle obj) {
	return (area() == obj.area());
}

void RRectangle::print()
{
	cout << "Higher point" << endl;
	cout << p_higher.getX() << " " << p_higher.getY() << endl;
	cout << "Lower point" << endl;
	cout << p_lower.getX() << " " << p_lower.getY();
	cout << endl << "Sides:" << endl;
	cout << sideA() << " " << sideB() << endl;
}
