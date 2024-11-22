#include "Patient.h"

Patient::Patient(int id, int rt, int nh, int dnh)
{
		ID = id;
		RT = rt;
		NH = nh;
		DNH = dnh;
}

Patient::Patient()
{
}

int Patient::getID()
{
	return ID;
}
