#include "SingleLinkedList.h"
#include <iostream>

Number* Number::AddNumber(const int value)
{
	Number* mNew = new Number;
	mNew->mValue = value;

	if (mTail == nullptr)
	{
		mHead = mNew;
		mTail = mNew;
	}
	else
	{
		mTail->mNext = mNew;
		mTail = mNew;
	}
	return mNew;
}

int Number::CountList()
{
	int count{};
	Number* mTemp = mHead;

	while (mTemp != nullptr)
	{
		count++;
		mTemp = mTemp->mNext;
	}
	return count;
}

void Number::PrintList()
{
	Number* mTemp = mHead;
	int index{};
	while (mTemp != nullptr)
	{
		std::cout << ++index << " : " << mTemp->mValue << std::endl;
		mTemp = mTemp->mNext;
	}
}

Number* Number::FindNumber(const int value)
{
	Number* mTemp = mHead;

	while (mTemp != nullptr)
	{
		if (mTemp->mValue == value)
		{
			return mTemp;
		}
		mTemp = mTemp->mNext;
	}
	return nullptr;
}

void Number::DeleteList()
{
	Number* mTemp = mHead;
	Number* mPrev{};

	while (mTemp != nullptr)
	{
		mPrev = mTemp->mNext;
		delete mTemp;
		mTemp = mPrev;
	}
	mHead = mTail = nullptr;
}

bool Number::DeleteNumber(const int value)
{
	Number* mTemp = mHead;
	Number* mPrev{};
	
	while (mTemp != nullptr)
	{
		if (mTemp->mValue == value)
		{
			break;
		}
		mPrev = mTemp;
		mTemp = mTemp->mNext;
	}
	
	if (mTemp == nullptr)
	{
		return false;
	}
	else if (mHead == mTail)
	{
		mHead = mTail = nullptr;
	}
	else if (mHead == mTemp)
	{
		mHead = mTemp->mNext;
	}
	else if (mTail == mTemp)
	{
		mTail = mPrev;
		mPrev->mNext = nullptr;
	}
	else
	{
		mPrev->mNext = mTemp->mNext;
	}
	delete mTemp;
	return true;
}
