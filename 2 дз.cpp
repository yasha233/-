#include<iostream>
#include<math.h>
#include<string>
using namespace std;

	class dahlyak 
	{
	public:

		string name;
		string surname;
		int high;
		int age;

	};
	int main()
	{
		setlocale(LC_ALL, "rus");
		cout << "1 ����" << endl;
		dahlyak yashka; 
		yashka.name = "����";
		yashka.surname = "��������";
		yashka.high = 197;
		yashka.age = 19;
		cout << "��� " << yashka.name << endl;
		cout <<"������� " << yashka.surname << endl;
		cout <<"���� " << yashka.high << endl;
		cout <<"������� " << yashka.age << endl;
		cout << "2 ����" << endl;
		dahlyak sasha;
		sasha.name = "����";
		sasha.surname = "������";
		sasha.high = 201;
		sasha.age = 21;
		cout << "��� " << sasha.name << endl;
		cout << "������� " << sasha.surname << endl;
		cout << "���� " << sasha.high << endl;
		cout << "������� " << sasha.age << endl;

		return 0;
	}



