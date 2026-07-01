#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient {
public:
    int id;
    string name;
    int age;
    string gender;

    Patient();
    Patient(int id, string name, int age, string gender);
};

#endif