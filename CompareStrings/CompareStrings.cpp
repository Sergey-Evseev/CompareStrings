//������� 1. ���� ��� ��������� �����.��������, ��������� �� �� ������.
//���� ���, �� ������� ������������� ������ �� ������� �����.

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
	ifstream file, file1; // ������� ������ ������ ifstream
	file.open("text.txt"); // ��������� ����
	file1.open("text1.txt");

	if (file.is_open() && file1.is_open()) {//���� ��� ����� ������� 
		//  is_open() ������ 1, ���� ���� ������ � ������� ������. ����� ������ 0 � ��������� ��� ����������� � ����� else

		string s, s1;//������� ��� ��������� ���� string
		string glS = ""; //������� ������ ������
		bool flag = true; //������� ���� � ��������� true 
		cout << "\tfile1\t\t\t\t file2\n";
		
		while (flag)//���� �� ��������� ����� ����� ������
		{
			if (!file.eof()) {// eof ���������� 1, ���� ��� ��������� ����� �����; � ��������� ������ ��� ���������� 0
				getline(file, s); //���� �� ��������� ����� ����� ��������� ����� �� ����� file � ������ s
			}
			else {
				s = "";//��� ���������� ����� ����� ������ ��������� ������ ��������
			}
			if (!file1.eof()) {
				getline(file1, s1); ////���� �� ��������� ����� ����� ��������� ����� �� ����� file1 � ������ s1
			}
			else {
				s1 = ""; 
			}

			cout << s << "         " << s1; //������� ��� ��������� ������
			//cout << s.compare(s1) << endl;
			if (s.compare(s1) == 0) {
				cout << "\nStrings are equal" <<endl << endl;
			}
			else { cout << "\n������ �����������" << endl << endl; }

			flag = !(file.eof() && file1.eof());//���� ���������� �� false ����� ��� ����� ����� ��������� �� �����
		}

		//cout << glS;

	} cout << "�� ���� ������� ����(�)" << endl;
}