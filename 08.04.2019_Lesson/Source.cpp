//#include "Rectangle.h"
#include "Vector.h"

int main() {
	//ЗАПИСЬ В БИНАРНЫЙ ФАЙЛ
	ifstream in_file("Student.rar", ios::binary); // просто имя с прямой директории "17.01.2019.rar" или полный путь
	//режим считывания и записи должен быть binary
	ofstream out_file("copy_file.rar", ios::binary); //так будет копировать в директорию проекта, или можно прописать полный путь в другую директорию

	char c; //для посимвольного копирования

	if (!in_file)
	{
		cout << "file open error" << endl;
	}
	else
	{
		while (!in_file.eof()) {
			in_file.get(c);
			out_file << c;
		}
	}



	//RRectangle

	//перед запуском закомменить верхний код с копированием файлов
	Vector h;
	double x1, y1, x2, y2;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		RRectangle r(x1, y1, x2, y2); 
		h.add(r);
	}
	h.at(0).area();
	for (int i = 0; i < n; i++)
	{
		h.at(i).print();
	}

	system("pause");
	return 0;
}