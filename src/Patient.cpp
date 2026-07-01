#include "Patient.h"

Patient::Patient() {}

Patient::Patient(int id, string name, int age, string gender) {
    this->id = id;
    this->name = name;
    this->age = age;
    this->gender = gender;
}