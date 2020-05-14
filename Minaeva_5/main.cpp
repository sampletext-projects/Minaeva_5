#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Выполнила Минаева Полина Валерьевна УТН - 111\n";
	cout << "Программа для рассчёта стоимости тапочек\n";

	double N;
	cout << "Введите объём продаж N: ";
	cin >> N;

	double C;
	cout << "Введите стоимости пары тапочек C: ";
	cin >> C;

	int K;
	cout << "Введите кол-во лет для рассчёта K: ";
	cin >> K;

	for (int i = 0; i <= K; i++)
	{
		cout << "Год " << i << ": объём продаж: " << N << " тыс., стоимость пары: " << C << "\n";
		N *= 1.05;
		C *= 0.99;
	}

	system("pause");

	return 0;
}
