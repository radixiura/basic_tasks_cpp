// Delenie chisla na razryadi //

#include <iostream>
using namespace std;
int main()
{
	int five;
	start:
	setlocale(LC_ALL, "Russian");
	cout << "Введите положительное 5-тизначное число: ";
	cin >> five;
	if (five>9999 && five<100000)
	{
		cout << " Первая цифра: " << (five/10000)%10 << endl;
		cout << " Вторая цифра: " << (five/1000)%10 << endl;
		cout << " Третья цифра: " << (five/100)%10 << endl;
		cout << " Четвертая цифра: " << (five/10)%10 << endl;
		cout << " Пятая цифра: " << (five/1)%10 << endl;
	}
	else
	{
		cout << "\nВведено некорректное число." << endl;
		goto start;
	}
return 0;
}

