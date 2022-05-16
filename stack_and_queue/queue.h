#pragma once
#include <iostream>
using namespace std;

class Queue
{
	int maxlenght;
	int *queue;
	int front;
	int rear;
	int addone(int i);
public:
	Queue(int maxlenght_);
	~Queue();

	bool empty();
	bool full();
	int get_front();
	void enqueue(int data);
	void dequeue();
	void show();
};
