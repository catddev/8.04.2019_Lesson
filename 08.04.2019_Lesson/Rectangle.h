#pragma once
#include"Point.h"
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
using namespace std;

//Разработать класс RRectangle(прямоугольник) со сторонами параллельными осям координат.
//Поля класса должны быть объектами класса Point(точка).
//Класс должен содержать : конструктор по умолчанию, конструктор с параметрами,
//при необходимости реализовать деструктор и конструктор копирования.
//Добавить методы для :
//□	перемещения прямоугольника вдоль осей
//□	изменения размера прямоугольника
//□	определения площади, периметра прямоугольника
//□	метод для проверки на равенство  двух прямоугольников
//□	вывод на экран информации об объекте
//□	для копирования объектов
//□	остальные методы на усмотрение разработчика(методы set и get)
//Написать интерфейс для работы с классом.
//Реализовать динамический массив объектов класса с возможностью добавления, удаления объектов из массива.
//Реализовать возможность записи информации об объектах массива в текстовый файл, бинарный файл.

class RRectangle {
	Point p_higher;
	Point p_lower;

public:
	RRectangle() : p_higher(), p_lower() {}
	RRectangle(double x_h, double y_h, double x_l, double y_l) : p_higher(x_h, y_h), p_lower(x_l, y_l) {
	}

	void setHigherX(double x);
	void setLowerX(double x);
	void setHigherY(double y);
	void setLowerY(double y);

	double getHigherX();
	double getHigherY();
	double getLowerX();
	double getLowerY();
	void move(double x, double y);

	void change_size(double a, double b);
	double sideA();
	double sideB();
	double area();
	double perimeter();
	bool compare(RRectangle obj);
	void print();
};