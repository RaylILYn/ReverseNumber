#include <iostream>	
#include <string>		
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int chisl;
	cout << "Введите трехзначное число: ";
	cin >> chisl;
	string s = to_string(chisl);
	reverse(s.begin(), s.end());
	cout << "Реверс числа: " << s << endl << endl;
	system("pause");
}