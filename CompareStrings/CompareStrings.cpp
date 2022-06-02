//Задание 1. Дано два текстовых файла.Выяснить, совпадают ли их строки.
//Если нет, то вывести несовпадающую строку из каждого файла.

#include <iostream>
#include <fstream>
#include <direct.h>
#include <iostream>
//#include <string.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	ifstream file, file1; // создаем объект класса ifstream
	file.open("text.txt"); // открываем файл
	file1.open("text1.txt");

	if (file.is_open() && file1.is_open()) {//если оба файла открыты 
		//  is_open() вернет 1, если файл найден и успешно открыт. Иначе вернет 0 и сработает код прописанный в блоке else

		string s, s1;//создаем две перменных типа string
		string glS = ""; //создаем пустую строку
		bool flag = true; //создаем флаг с значением true 
		cout << "\tfile1\t\t\t\t file2\n";
		
		while (flag)//пока не достигнут конец обоих файлов
		{
			if (!file.eof()) {// eof возвращает 1, если был достигнут конец файла; в противном случае она возвращает 0
				getline(file, s); //пока не достигнут конец файла считывать линии из файла file в строку s
			}
			else {
				s = "";//при достижении конца файла строке присвоить пустое значение
			}
			if (!file1.eof()) {
				getline(file1, s1); ////пока не достигнут конец файла считывать линии из файла file1 в строку s1
			}
			else {
				s1 = ""; 
			}

			cout << s << "         " << s1; //вывести обе считанные строки
			//cout << s.compare(s1) << endl;
			if (s.compare(s1) == 0) {
				cout << "\nStrings are equal" <<endl << endl;
			}
			else { cout << "\nСтроки различаются" << endl << endl; }

			flag = !(file.eof() && file1.eof());//флаг поменяется на false когда оба файла будут прочитаны до конца
		}

		//cout << glS;

	} cout << "Не могу открыть файл(ы)" << endl;
}