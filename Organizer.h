#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Organizer
{
private:
	vector<vector<int>> distanceMatrix;
public:
	Organizer(int numHospitals) {};

	void setDistance(int hospital1, int hospital2, int distance);
};

