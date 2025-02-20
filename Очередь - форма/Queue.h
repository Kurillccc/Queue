#pragma once

#include "Zveno.h"


class QueueC
{
private:

	Zveno* first;
	Zveno* last;

public:

	QueueC()
	{
		first = 0;
		last = 0;
	}

	~QueueC()
	{
		delete first;
	}

	QueueC(const QueueC& tmp)
	{
		if (tmp.first == 0)
		{
			first = 0;
			last = 0;
		}
		else
		{
			Zveno* current = tmp.first;
			first = new Zveno(*current);
			last = first;

			while (current->getNext() != 0)
			{
				current = current->getNext();
				Zveno* A = new Zveno(current->getInfo());
				last->setNext(A);
				last = A;
			}
		}
	}

	QueueC& operator =(QueueC tmp)
	{
		if (first != 0)
		{
			delete first;
		}
		if (tmp.first == 0)
		{
			first = 0;
			last = 0;
		}
		else
		{
			Zveno* current = tmp.first;
			first = new Zveno(*current);
			last = first;
			while (current->getNext() != 0)
			{
				current = current->getNext();
				Zveno* A = new Zveno(current->getInfo());
				last->setNext(A);
				last = A;
			}
		}

		return *this;
	}


	void push(int tmp)
	{
		Zveno* A = new Zveno(tmp);
		if (first == 0)
		{
			first = A;
			last = A;
		}
		else
		{
			last->setNext(A);
			last = A;
		}
	}

	int pop()
	{
		if (first != 0)
		{
			int a = first->getInfo();
			Zveno* q = first;
			first = first->getNext();
			q->setNext(0);
			delete q;

			if (first == 0) last = 0;

			return a;
		}
		return -1;
	}

	int is_empty()
	{
		if (first == 0) return 1;

		return 0;
	}
};