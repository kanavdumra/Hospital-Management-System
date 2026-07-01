#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <vector>
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"

class Hospital {
private:
    vector<Patient> patients;
    vector<Doctor> doctors;
    vector<Appointment> appointments;

public:
    void addPatient();
    void viewPatients();
    void searchPatient(int id);

    void addDoctor();
    void viewDoctors();
    void searchDoctor(int id);

    void scheduleAppointment();
    void viewAppointments();

    void saveData();
    void loadData();
};

#endif