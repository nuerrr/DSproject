#pragma once
#include "Project Allowed DS/priQueue.h"


template<typename T>
class PriQueueExtended : public priQueue<T> {


public:
    PriQueueExtended(){}

    bool Cancel(int ID) {
        if (this->isEmpty())
            return false;

        Node<T>* prevPtr = nullptr;
        Node<T>* currPtr = this->head;

        while (currPtr != nullptr)
        {
            if (currPtr->getItem()->getID() == ID)
            {
                if (prevPtr == nullptr) // Case for the first node 
                {
                    this->head = currPtr->getNext();
                    
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

