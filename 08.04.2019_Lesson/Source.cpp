#include"Rectangle.h"
#include"Vector.h"

int main() {
	//ЗАПИСЬ В БИНАРНЫЙ ФАЙЛ
	ifstream in_file("Student.rar", ios::binary); // просто имя с прямой директории "17.01.2019.rar" или полный путь
	//режим считывания и записи должен быть binary
	ofstream out_file("copy_file.rar", ios::binary); //так будет копировать в директорию проекта, или можно прописать полный путь в другую директорию

	char c; //для посимвольного копирования

	if (!in_file)
		cout << "file open error" << endl;
	else
	while (!in_file.eof()) {
		in_file.get(c);
		out_file << c;
	}

	system("pause");
}