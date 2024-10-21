//19. Описать процедуру, которая для заданного N строит дерево
//следующего вида : корнем является узел, информационная часть
//которого равна; второй уровень содержит узлы со значениями
//N - 1 и N - 2; третий уровень - N - 3, N - 4, N - 5, N - 6 и т.д.
//Последний уровень может быть неполным, он содержит узел
//с конечным значением 1.

#include <Windows.h>
#include "TREE.h"

int menu();

int main()
{
	SetConsoleOutputCP(1251);
	int choice{};
	TREE tr;
	do
	{
		choice = menu();
		switch(choice)
		{
		case 1:
		{
			int n{};
			std::cout << "Введите значение N: ";
			std::cin >> n;
			tr.fill(n);
			break;
		}
		case 2:
		{
			tr.print(tr.get_root(), 0);
			break;
		}
		case 3:
			break;
		default:
		{
			std::cout << "Введено неправильное значение, повторите попытку!";
			break;
		}
		}
	} while (choice != 3);
	return 0;
}

int menu()
{
	std::cout << "1. Решить задачу.\n2. Напечатать дерево.\n3. Закрыть.\n->";
	int choice = 0;
	std::cin >> choice;
	return choice;
}