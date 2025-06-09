#pragma once
#include <iostream>
#include <algorithm>
using namespace std;




template <typename T>
class SimpleVector
{
private:
	T* data;
	int currentSize;
	int currentCapacity;

	void resize(int newCapacity)
	{
		if (newCapacity > currentCapacity)
		{
			T* newData = new T[newCapacity];
			for (int i = 0; i < currentSize; ++i)
			{
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
			currentCapacity = newCapacity;
		}
	}


public:


	SimpleVector() : currentSize(0), currentCapacity(10)
	{
		data = new T[currentCapacity];
	}
	SimpleVector(int capacity) : currentSize(0), currentCapacity(capacity)
	{
		data = new T[capacity];
	}

	void push_back(const T& value)
	{
		if (currentSize < currentCapacity)
		{
			data[currentSize++] = value;
		}
		else if(currentSize == currentCapacity)
		{
			
			resize(currentCapacity+5);
			data[currentSize++] = value;
		}
	
	}

	void pop_back()
	{
		if (currentSize > 0)
		{
			--currentSize;
		}
	}

	int size()
	{
		return currentSize;
	}

	int capacity()
	{
		return currentCapacity;
	}


	void sortData()
	{
		sort(data, data + currentSize);
	}

	void print() const
	{
		
		for (int i = 0; i < currentSize; ++i)
		{
			cout << data[i] << " ";
		}
		cout << endl;
	}

	~SimpleVector()
	{
		if (data != nullptr)
		{
			delete[] data;
		}
	}


};
