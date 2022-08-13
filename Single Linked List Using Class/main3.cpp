#include "SingleLinkedList.h"
#include <iostream>

int main()
{
	Number n1;

	n1.AddNumber(3);
	n1.AddNumber(6);
	n1.AddNumber(9);

	std::cout << n1.CountList() << std::endl;
	n1.PrintList();

	int number;
	std::cout << "FIND NUMBER : ";
	std::cin >> number;
	Number* mFind = n1.FindNumber(number);
	if (mFind == nullptr)
	{
		std::cout << "EMPTY!" << std::endl;
	}
	else
	{
		std::cout << number << " FOUND!" << std::endl;
	}


	//n1.DeleteList();
	//std::cout << n1.CountList() << std::endl;

	n1.DeleteNumber(6);
	n1.PrintList();
}