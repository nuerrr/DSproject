#pragma once

#include <iostream>
#include"Patient.h"
#include"Car.h"
#include "Project allowed DS/LinkedQueue.h"
#include "Project allowed DS/priQueue.h"
#include "QueueDerived.h"

using namespace std;

class Hospital
{
private:
	LinkedQueue<Patient> SP;//special patients
	priQueue<Patient>EP; //emergency patients
	QueueDerived<Patient>NP;//Normal patient list
	LinkedQueue<Car> SCar; 
	LinkedQueue<Car> NCar; 
	
public:


};



