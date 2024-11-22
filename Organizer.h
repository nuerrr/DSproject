#pragma once
#include <iostream>
#include <vector>
#include"Patient.h"
#include"Car.h"
#include"Hospital.h"
#include "Project allowed DS/LinkedQueue.h"
#include "Project allowed DS/priQueue.h"

using namespace std;

class Organizer
{
private:
	vector<vector<int>> distanceMatrix;
	LinkedQueue<Patient> PR;//patient requests
	LinkedQueue<int> CL; //cancellation list
	Hospital* hospital; //hospital list
	priQueue<Car>BC; //back car
	LinkedQueue<int> FL; //finished list
	

public:
	Organizer(int numHospitals) {};

	void setDistance(int hospital1, int hospital2, int distance);


};

