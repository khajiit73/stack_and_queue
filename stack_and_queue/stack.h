#pragma once
#include <iostream>
using namespace std;

class Stack
{
	int *stack;
	int size;
	int top;
public:
	Stack();
	Stack(const Stack& other);
	~Stack();

	bool is_empty();
	int head();
	void push(int data);
	int pop();
	void print();

	Stack& operator=(const Stack& other);
};