#include "stack.h"

Stack::Stack()
{
	stack = nullptr;
	size = 0;
	top = -1;
}

Stack::Stack(const Stack& other)
{
	this->size = other.size;
	this->top = other.top;
	this->stack = new int[size];

	for (int i = 0; i < size; i++)
	{
		this->stack[i] = other.stack[i];
	}
}

Stack::~Stack()
{
	if (size > 0) delete[] this->stack;
}

bool Stack::is_empty()
{
	return top == -1;
}

int Stack::head()
{
	if (top == -1) return 0;
	return stack[top];
}

void Stack::push(int data)
{
	if (top == -1)
	{
		if (stack == nullptr)
		{
			size = 1;
			stack = new int[size];
		}
		top++;
		stack[top] = data;
	}
	else if (top == size - 1)
	{
		Stack tmp(*this);

		this->size += 5;
		delete[] this->stack;
		stack = new int[size];

		for (int i = 0; i < tmp.size; i++)
		{
			this->stack[i] = tmp.stack[i];
		}

		top++;
		stack[top] = data;
	}
	else
	{
		top++;
		stack[top] = data;
	}
}

int Stack::pop()
{
	if (this->is_empty())
	{
		cout << "stack underflow" << endl;
		top = -1;
		return 0;
	}
	else
	{
		top--;
		return stack[top + 1];
	}
}

void Stack::print()
{
	for (int i = 0; i <= top; i++)
	{
		cout << stack[i] << " ";
	}
	cout << endl;
}

Stack& Stack::operator=(const Stack& other)
{
	if (this->stack != nullptr)
	{
		delete[] this->stack;
	}

	this->size = other.size;
	this->top = other.top;
	this->stack = new int[size];

	for (int i = 0; i < size; i++)
	{
		this->stack[i] = other.stack[i];
	}

	return *this;
}
