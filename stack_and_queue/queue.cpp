#include "queue.h"

Queue::Queue(int maxlenght_)
{
	maxlenght = maxlenght_;
	queue = new int[maxlenght];
	front = rear = -1;
}

Queue::~Queue()
{
	delete[] this->queue;
}

bool Queue::empty()
{
	if (front == -1) return true;
	return false;
}

bool Queue::full()
{
	if (addone(rear) == front || (front == 0 && rear == maxlenght - 1)) return true;
	return false;
}

int Queue::get_front()
{
	if (empty())
	{
		cout << "queue is empty" << endl;
		return 0;
	}
	return queue[front];
}

void Queue::enqueue(int data)
{
	if (full())
	{
		cout << "queue is full" << endl;
	}
	else
	{
        if (front == -1)   front = 0;
		rear = addone(rear);
		queue[rear] = data;
	}
}

void Queue::dequeue()
{
	if (empty()) 
    {
        cout << "queue is empty" << endl;
       
    }
    else if (front == rear) 
    {
        front = rear = -1;
    } 
    else 
    {
        front = addone(front);
    }
    
}

void Queue::show()
{
	int i;
	if (front == -1)
	{
		cout << endl;
	}
	else
	{
		for (i = front; i != rear; i = (i + 1) % maxlenght)
		{
			cout << queue[i] << " ";
		}
		cout << queue[i] << endl;
	}
	
}

int Queue::addone(int i)
{
	return (i + 1) % maxlenght;
}