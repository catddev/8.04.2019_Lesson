#include"Rectangle.h"

//Vector::Vector(int size)
//{
//	buf_size = size;
//	cur_size = 0;
//	els = new Rectangle[buf_size];
//}
//
//Vector::Vector(int size, int value)
//{
//	cur_size = buf_size = size;
//	els = new int[buf_size];
//	for (int i = 0; i < cur_size; i++)
//		els[i] = value;
//}
//
//Vector::Vector(const Vector & obj)
//{
//	this->buf_size = this->cur_size = obj.cur_size;
//	this->els = new int[buf_size];
//	for (int i = 0; i < cur_size; i++)
//		this->els[i] = obj.els[i];
//}
//
//Vector::~Vector()
//{
//	cout << "Destructor" << endl;
//	delete[] els;
//}
//
//void Vector::add(int el)
//{
//	if (buf_size == 0) {
//		buf_size = 4;
//		els = new int[buf_size];
//	}
//	else {
//		if (cur_size == buf_size)
//			buf_size *= 2;
//		int *tmp = new int[buf_size];
//		for (int i = 0; i < cur_size; i++)
//			tmp[i] = els[i];
//		delete[] els;
//		els = tmp;
//	}
//	els[cur_size++] = el;
//}
//int Vector::at(int pos)
//{
//	return els[pos];
//}
//int Vector::size()
//{
//	return cur_size;
//}
//
//void Vector::print()
//{
//	for (int i = 0; i < cur_size; i++)
//		cout << els[i] << " ";
//	cout << endl;
//}