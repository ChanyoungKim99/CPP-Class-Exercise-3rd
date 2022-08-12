#include "Stack.h"
#include <iostream>

void Stack::PrintInfo()
{
	std::cout << "<STACK>" << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "[3] exit" << std::endl;
	std::cout << "---------------" << std::endl;
}

void Stack::PrintStack()
{
	std::cout << "--- stack ---" << std::endl;

	if (mTopIndex < 0)
	{
		std::cout << "EMPTY!!" << std::endl;
		return;
	}

	for (int i = mTopIndex; i >= 0; i--)
	{
		std::cout << mStack[i] << std::endl;
	}
}

void Stack::Push(int value)
{
	if (mTopIndex >= STACK_SIZE - 1)
	{
		std::cout << "STACK IS FULL!" << std::endl;
		return;
	}

	mStack[++mTopIndex] = value;
}

void Stack::Pop()
{
	if (mTopIndex < 0)
	{
		std::cout << "EMPTY!!" << std::endl;
		return;
	}

	std::cout << mStack[mTopIndex--] << " pop!" << std::endl;
}

void Stack::ProcessUI()
{
	int command;

	while (true)
	{
		PrintStack();

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
			case PUSH:
			{
				int value;
				std::cout << "\tpush value = ";
				std::cin >> value;
				Push(value);
				break;
			}

			case POP:
				Pop();
				break;

			case EXIT:
				command = EXIT;
				break;

			default:
				std::cout << "INVALID COMMAND" << std::endl;
				break;
		}

		if (command == EXIT)
		{
			break;
		}
	}
}