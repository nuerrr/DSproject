#include "Organizer.h"

Organizer::Organizer() {
}

void Organizer::setHospital(int numHospitals)
{
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

bool Organizer::ReadFile(string FileName)
{
    //variables
    int H_num;
    int Scar_speed;
    int Ncar_speed;

    ifstream file(FileName);

    if (!file) {
        std::cerr << "Unable to open file\n";
        return false;
    }
    file >> H_num;
    cout <<"hospital number: "<< H_num;

    setHospital(H_num);

    file >> Scar_speed;
    file >> Ncar_speed;

    cout << "\nScar speed: " << Scar_speed;
    cout << "\nNcar speed: " << Ncar_speed;

    //for(int i=0; i<H_num; )


}
