#pragma once

const int QUEUE_SIZE{ 10 };

enum Command
{
	ENQUEUE = 1,
	DEQUEUE = 2,
	EXIT = 3
};

class Queue
{
	int mQueue[QUEUE_SIZE]{};
	int mTopIndex{ -1 };

public:
	void PrintInfo();
	void PrintQueue();
	void Enqueue(int value);
	void Dequeue();
	void ProcessUI();
};

