#include "Appointment.h"

Appointment::Appointment() {}

Appointment::Appointment(int p, int d, string date) {
    patientId = p;
    doctorId = d;
    this->date = date;
}