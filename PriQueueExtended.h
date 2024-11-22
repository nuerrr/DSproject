#pragma once
#include "Project Allowed DS/priQueue.h"


template<typename T>
class PriQueueExtended : public  priQueue<T> {


public:
    PriQueueExtended() :priQueue() {

    }
    bool Cancel(int ID) {
        if (isEmpty())
            return false;

        Node<T>* prevPtr = nullptr;
        Node<T>* currPtr = Head;

        while (currPtr != nullptr)
        {
            if (currPtr->getItem()->getID() == ID)
            {
                if (prevPtr == nullptr) // Case for the first node 
                {
                    frontPtr = currPtr->getNext();
                    
                }
                else
                {
                    prevPtr->setNext(currPtr->getNext());
                    
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

