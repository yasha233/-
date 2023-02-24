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
		cout << "1 курс" << endl;
		dahlyak yashka; 
		yashka.name = "Яков";
		yashka.surname = "Макейкин";
		yashka.high = 197;
		yashka.age = 19;
		cout << "Имя " << yashka.name << endl;
		cout <<"Фамилия " << yashka.surname << endl;
		cout <<"Рост " << yashka.high << endl;
		cout <<"Возраст " << yashka.age << endl;
		cout << "2 курс" << endl;
		dahlyak sasha;
		sasha.name = "Саня";
		sasha.surname = "Волков";
		sasha.high = 201;
		sasha.age = 21;
		cout << "Имя " << sasha.name << endl;
		cout << "Фамилия " << sasha.surname << endl;
		cout << "Рост " << sasha.high << endl;
		cout << "Возраст " << sasha.age << endl;

		return 0;
	}



