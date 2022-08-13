#pragma once

class Number
{
	int mValue;
	Number* mHead{};
	Number* mTail{};
	Number* mNext{};
public:
	Number* AddNumber(const int value);
	int CountList();
	void PrintList();
	Number* FindNumber(const int value);
	void DeleteList();
	bool DeleteNumber(const int value);
};


