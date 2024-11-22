#pragma once
#include <iostream>
#include"Patient.h"
#include "Project allowed DS/LinkedQueue.h"
#include "Project allowed DS/priQueue.h"

enum CarType {
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
	CarType T;
	status S;
	Patient* P;

public:
	Car();
	void Assign();
	void Load();
	void deLoad();
};

