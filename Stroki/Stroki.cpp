// Stroki.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "");
	int k;
	string name;
	string glasnie;
	string soglasnie;
	do
	{	
	cout << "1. Выведется слово задом наперёд\n2. Выведется слово без гласных\n3. Выведется слово без согласных\n4. Рандомно раскидать буквы в слове\n5. Выход\n";
	cin >> k;
	
		cout << "\nВведите слово: ";
		cin >> name;
		switch (k)
		{
		case 1:

			reverse(name.begin(), name.end());
			cout << name << endl;
			break;


		case 2:

			glasnie = "АаЕеЁёИиОоУуЫыЭэЮюЯя";
			for (int i = 0; i < name.length(); i++)
			{
				for (int j = 0; j < glasnie.length(); j++)
				{
					if (name[i] == glasnie[j])
					{
						name.erase(name.begin() + i);
					}

				}

			}
			cout << name << endl;
			break;

		case 3:

			soglasnie = "цкнгшщзхфвпрлджчсмтрбЦКНГШЩЗХФВПРЛДЖЧСМТБ";
			for (int i = 0; i < name.length(); i++)
			{
				for (int j = 0; j < soglasnie.length(); j++)
				{
					if (name[i] == soglasnie[j])
					{
						name.erase(name.begin() + i);
					}

				}

			}
			cout << name << endl;

			break;

		case 4:

			random_shuffle(name.begin(), name.end());
			cout << name << endl;


		default:
			cout << "Введена неверная операция\n";

		}

	} 
	while (k != 5);

	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.