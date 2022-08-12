#pragma once

const int STACK_SIZE{ 10 };

enum Command
{
	ENQUEUE = 1,
	DEQUEUE = 2,
	EXIT = 3
};

class Queue
{
	int mQueue[STACK_SIZE]{};
	int mHeadIndex{ -1 };
	int mTailIndex{ -1 };

public:
	void PrintInfo();
	void PrintQueue();
	void Enqueue(int value);
	void Dequeue();
	void ProcessUI();
};

