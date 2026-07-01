#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
using namespace std;

class Appointment {
public:
    int patientId;
    int doctorId;
    string date;

    Appointment();
    Appointment(int p, int d, string date);
};

#endif