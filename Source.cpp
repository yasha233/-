#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a=1, b=1, c, n, i=0;
	cout << "Введите номер элемента" << endl;
	cin >> n;
	while (i < n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	cout << "число под номером " << n << "=" << b;
}