#pragma once
#include <iostream>
#include"Patient.h"
#include"Hospital.h"
#include "Project allowed DS/LinkedQueue.h"
#include "Project allowed DS/priQueue.h"

enum type {
	SC, //special car
	NC  //normal car
};
enum status {
	Ready,
	Assigned,
	Loaded
};
class Car
{
	int carSpeed;
	type T;
	status S;
	Patient* P;

public:
	void Assign();
	void Load();
	void deLoad();
};

