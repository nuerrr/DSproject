#pragma once
#include <iostream>
#include <vector>
#include"Patient.h"
#include"Car.h"
#include"Hospital.h"
#include "Project allowed DS/LinkedQueue.h"
#include "Project allowed DS/priQueue.h"
#include "PriQueueExtended.h"
#include <fstream>

using namespace std;

class Organizer
{
private:
	vector<vector<int>> distanceMatrix;
	LinkedQueue<Patient> PR;//patient requests
	LinkedQueue<int> CL; //cancellation list
	Hospital* hospital; //hospital list
	PriQueueExtended<Car>OC; //out cars 
	priQueue<Car>BC; //back car
	LinkedQueue<int> FL; //finished list
	

public:
	Organizer();

	void setHospital(int numHospitals);

	void setDistance(int hospital1, int hospital2, int distance);

	bool ReadFile(string FileName);


};

