#pragma once
#include "Project allowed DS/LinkedQueue.h"

template<typename T>
class QueueDerived : public  LinkedQueue<T> {
public:
	QueueDerived() :LinkedQueue() {

	}
	bool Cancel(int ID) {
		//test
	}
};