#include "Queue.h"
#include <iostream>

void Queue::PrintInfo()
{
	std::cout << "<STACK>" << std::endl;
	std::cout << "[1] enqueue" << std::endl;
	std::cout << "[2] dequeue" << std::endl;
	std::cout << "[3] exit" << std::endl;
	std::cout << "---------------" << std::endl;
}

void Queue::PrintQueue()
{
	if (mTopIndex < 0)
	{
		std::cout << "EMPTY!!" << std::endl;
		return;
	}

	for (int i = mTopIndex; i >= 0; i--)
	{
		std::cout << mQueue[i] << std::endl;
	}
}

void Queue::Enqueue(int value)
{
	if (mTopIndex >= QUEUE_SIZE - 1)
	{
		std::cout << "QUEUE IS FULL!" << std::endl;
		return;
	}

	mQueue[++mTopIndex] = value;
}

void Queue::Dequeue()
{
	int* mTemp = new int[QUEUE_SIZE];

	if (mTopIndex < 0)
	{
		std::cout << "EMPTY!!" << std::endl;
		return;
	}

	std::cout << "dequeue: " << mQueue[0] << std::endl;

	for (int i = 0; i < mTopIndex; i++)
	{
		mTemp[i] = mQueue[i + 1];
		mQueue[i] = mTemp[i];
	}
	mTopIndex--;

	delete[] mTemp;
}

void Queue::ProcessUI()
{
	int command;

	while (true)
	{
		PrintQueue();

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
			case ENQUEUE:
			{
				int value;
				std::cout << "\tpush value = ";
				std::cin >> value;
				Enqueue(value);
				break;
			}

			case DEQUEUE:
				Dequeue();
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