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
	if (mTailIndex < 0)
	{
		std::cout << "EMPTY!!" << std::endl;
		return;
	}

	for (int i = mHeadIndex; i <= mTailIndex; i++)
	{
		std::cout << mQueue[i] << std::endl;
	}
}

void Queue::Enqueue(int value)
{
	if (mTailIndex >= STACK_SIZE - 1)
	{
		std::cout << "QUEUE IS FULL!" << std::endl;
		return;
	}

}

void Queue::Dequeue()
{

}

void Queue::ProcessUI()
{

}