#include <iostream>
#include <cstdio>
const char * qualify[4] = 
{
	"Оболтус\n",
	"Бывалый\n",
	"Старый пердун\n",
	"Мертв/не родился\n",
};

int main()
{
	int age;
	std::cout << "Введи свой возраст: " ; std::cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	std::cout << "Судя по возрасту, ты: " << qualify[index];      
	return 0;
}
