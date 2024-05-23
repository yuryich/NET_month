#include <iostream>
using namespace std;

enum class months {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	Semptember,
	October,
	November,
	December
};


int main()
{
	setlocale(LC_ALL, "Rus");
	int number;
	cout << "Введите номер месяца: ";
	cin >> number;
	while (number != 0) {
		months month = static_cast<months>(number);
		switch (month)
		{
		case months::January:
			cout << "Январь" << endl;
			break;
		case months::February:
			cout << "Февраль" << endl;
			break;
		case months::March:
			cout << "Март" << endl;
			break;
		case months::April:
			cout << "Апрель" << endl;
			break;
		case months::May:
			cout << "Май" << endl;
			break;
		case months::June:
			cout << "Июнь" << endl;
			break;
		case months::July:
			cout << "Июль" << endl;
			break;
		case months::August:
			cout << "Август" << endl;
			break;
		case months::Semptember:
			cout << "Сентябрь" << endl;
			break;
		case months::October:
			cout << "Октябрь" << endl;
			break;
		case months::November:
			cout << "Ноябрь" << endl;
			break;
		case months::December:
			cout << "Декабрь" << endl;
			break;
		default:
			cout << "Неправильный номер!" << endl;
		}
		cout << "Введите номер месяца: ";
		cin >> number;
	}
	cout << "До свидания";
}

