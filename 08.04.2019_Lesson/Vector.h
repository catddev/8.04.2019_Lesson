#pragma once
#include "Rectangle.h"

class Vector {
private:
	RRectangle* els; //!!!!!из-за стандартной функции Rectangle возникает конфликт, поэтому пришлось корректировать имя RRectangle
	int buf_size;
	int cur_size;
public:
	Vector();
	Vector(int size);
	Vector(const Vector& obj);
	~Vector();
	int size();
	void add(RRectangle el);
	RRectangle at(int index);
	RRectangle& operator[](int index);
};
