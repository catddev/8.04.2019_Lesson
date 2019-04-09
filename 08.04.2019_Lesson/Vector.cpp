#include"Vector.h"

Vector::Vector() {
	els = 0;
	buf_size = 0;
	cur_size = 0;
}

Vector::Vector(int size) {
	buf_size = size;
	cur_size = 0;
	els = new RRectangle[buf_size];
}

Vector::Vector(const Vector& obj)
{

	buf_size = obj.cur_size;
	cur_size = obj.cur_size;
	els = new RRectangle[buf_size];
	for (int i = 0; i < cur_size; i++) {
		els[i] = obj.els[i];
	}
}

Vector::~Vector()
{
	delete[] els;
}

int Vector::size()
{
	return cur_size;
}

void Vector::add(RRectangle el)
{
	if (buf_size == 0) {
		buf_size = 4;
		els = new RRectangle[buf_size];
	}
	else
	{
		if (buf_size == cur_size) {
			buf_size *= 2;
			RRectangle* tmp = new RRectangle[buf_size];
			for (int i = 0; i < cur_size; i++)
				tmp[i] = els[i];
			delete[] els;
			els = tmp;
		}

	}
	els[cur_size++] = el;
}

RRectangle Vector::at(int index)
{
	return els[index];
}

RRectangle & Vector::operator[](int index)
{
	return els[index];
}