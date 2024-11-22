#pragma once
#include "Project allowed DS/LinkedQueue.h"

template<typename T>
class QueueDerived : public  LinkedQueue<T> {


public:
    QueueDerived() :LinkedQueue() {

    }
    bool Cancel(int ID) {
        if (isEmpty())
            return false;

        Node<T>* prevPtr = nullptr;
        Node<T>* currPtr = frontPtr;

        while (currPtr != nullptr)
        {
            if (currPtr->getItem() == itemToRemove)
            {
                if (prevPtr == nullptr) // Case for the first node 
                {
                    frontPtr = currPtr->getNext();
                    if (frontPtr == nullptr) // If it's the last node
                        backPtr = nullptr;
                }
                else
                {
                    prevPtr->setNext(currPtr->getNext());
                    if (currPtr == backPtr) // If it's the last node
                        backPtr = prevPtr;
                }
                delete currPtr;
                return true;
            }
            prevPtr = currPtr;
            currPtr = currPtr->getNext();
        }

        return false; // Item not found
    }
};