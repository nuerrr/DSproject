#include "Organizer.h"

Organizer::Organizer(int numHospitals) {
	distanceMatrix.resize(numHospitals, vector<int>(numHospitals, 0));
}

void Organizer::setDistance(int hospital1, int hospital2, int distance) {
    if (hospital1 >= 0 && hospital2 >= 0 && hospital1 < distanceMatrix.size() && hospital2 < distanceMatrix.size()) {
        distanceMatrix[hospital1][hospital2] = distance;
        distanceMatrix[hospital2][hospital1] = distance;  // Since it's undirected (both ways)
    }
    else {
        cout << "Invalid hospital indices." << endl;
    }
}