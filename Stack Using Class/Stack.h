#pragma once

const int STACK_SIZE{ 10 };

enum Command
{
	PUSH = 1,
	POP = 2,
	EXIT = 3
};

class Stack
{
	int mStack[STACK_SIZE]{};
	int mTopIndex = -1;

public:
	Stack()
	{
	};
	~Stack()
	{
	};

	void PrintInfo();
	void PrintStack();
	void Push(int value);
	void Pop();
	void ProcessUI();
};

