#pragma once
#include "Project allowed DS/LinkedQueue.h"

template<typename T>
class QueueDerived : public  LinkedQueue<T> {


public:
    QueueDerived() :LinkedQueue() {

    }
    bool Cancel(int ID) {
        if (this->isEmpty())  // Explicitly use `this` to access inherited members
            return false;

        Node<T>* prevPtr = nullptr;
        Node<T>* currPtr = this->frontPtr; // Explicitly use `this`

        while (currPtr != nullptr) {
            if (currPtr->getItem()->getID() == ID) { // Assuming `getItem()` returns a pointer with `getID()` method
                if (prevPtr == nullptr) { // Case for the first node
                    this->frontPtr = currPtr->getNext(); // Explicitly use `this`
                    if (this->frontPtr == nullptr) // If it's the last node
                        this->backPtr = nullptr;  // Explicitly use `this`
                }
                else {
                    prevPtr->setNext(currPtr->getNext());
                    if (currPtr == this->backPtr) // If it's the last node
                        this->backPtr = prevPtr;  // Explicitly use `this`
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