#include "stack.h"
#include "queue.h"

int main()
{
	cout << "--------------------------Stack a------------------------" << endl;
	Stack a;
	a.push(5);
	a.push(44);
	a.push(33);
	a.push(1);
	a.push(77);
	cout << "stack after adding elements - 5, 44, 33, 1, 77:" << endl;
	a.print();
	cout << "element that has been removed from the stack:" << endl;
	cout << a.pop() << endl;
	cout << "stack after removing an element:" << endl;
	a.print();
	cout << "top element of the stack:" << endl;
	cout << a.head() << endl;
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	cout << "attempt to remove item from empty stack:" << endl;
	a.pop();
	a.push(33);
	cout << "stack after adding an element - 33:" << endl;
	a.print();
	cout << "--------------------------Stack b------------------------" << endl;
	Stack b;
	b = a;
	cout << "stack b copied from stack a:" << endl;
	b.print();
	b.push(34);
	cout << "stack after adding an element - 34:" << endl;
	b.print();
	b.pop();
	b.push(12);
	cout << "stack after removing an element and adding an element - 12:" << endl;
	b.print();
	cout << "--------------------------Queue------------------------" << endl;
	Queue c(3);
	cout << "creating queue(maxlenght = 3)\nis queue empty? (1 - is empty, 0 - isn't empty):" << endl;
	cout << c.empty() << endl;
	c.enqueue(5);
	cout << "queue after adding an element - 5:" << endl;
	c.show();
	c.enqueue(44);
	cout << "queue after adding an element - 44:" << endl;
	c.show();
	c.enqueue(77);
	cout << "queue after adding an element - 77:" << endl;
	c.show();
	cout << "queue after adding an element - 45:" << endl;
	c.enqueue(45);
	c.show();
	cout << "queue after removing an element:" << endl;
	c.dequeue();
	c.show();
	c.enqueue(11);
	cout << "queue after adding an element - 11:" << endl;
	c.show();
	cout << "is queue full? (1 - is full, 0 - isn't full):" << endl;
	cout << c.full() << endl;
	c.dequeue();
	c.dequeue();
	cout << "queue after removing two elements:" << endl;
	c.show();
	cout << "is queue empty? (1 - is empty, 0 - isn't empty):" << endl;
	cout << c.empty() << endl;
	cout << "is queue full? (1 - is full, 0 - isn't full):" << endl;
	cout << c.full() << endl;
	c.dequeue();
	cout << "attempt to remove item from empty queue:" << endl;
	c.dequeue();
	c.show();
	cout << "is queue empty? (1 - is empty, 0 - isn't empty):" << endl;
	cout << c.empty() << endl;
	c.enqueue(44);
	cout << "queue after adding an element - 44:" << endl;
	c.show();
}
