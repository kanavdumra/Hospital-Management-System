#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
using namespace std;

class Doctor {
public:
    int id;
    string name;
    int age;
    string gender;

    Doctor();
    Doctor(int id, string name, int age, string gender);
};

#endif