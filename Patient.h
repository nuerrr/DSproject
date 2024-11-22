#pragma once

enum type {
		SP, //special case patients
		EP, //emergency case patients
		NP  //normal patients
	};

class Patient
{
	int ID; //patient ID
	int RT; //Request time
	int PT; //pickup time
	int NH;	//Nearest hospital ID to patient
	int DNH;//Distance to nearest hospital (from patient)
	type T;
public:
	Patient(int id, int rt, int nh, int dnh);
	Patient();
};

