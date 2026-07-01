#include <iostream>
#include <fstream>
#include "Hospital.h"

using namespace std;

static int pid = 1;
static int did = 1;

// ---------- PATIENT ----------
void Hospital::addPatient() {
    string name, gender;
    int age;

    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Gender: ";
    cin >> gender;

    patients.push_back(Patient(pid++, name, age, gender));
}

void Hospital::viewPatients() {
    for (auto &p : patients) {
        cout << p.id << " " << p.name << " " << p.age << " " << p.gender << endl;
    }
}

void Hospital::searchPatient(int id) {
    for (auto &p : patients) {
        if (p.id == id) {
            cout << "Found: " << p.name << endl;
            return;
        }
    }
    cout << "Not found\n";
}

// ---------- DOCTOR ----------
void Hospital::addDoctor() {
    string name, gender;
    int age;

    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Gender: ";
    cin >> gender;

    doctors.push_back(Doctor(did++, name, age, gender));
}

void Hospital::viewDoctors() {
    for (auto &d : doctors) {
        cout << d.id << " " << d.name << " " << d.age << " " << d.gender << endl;
    }
}

void Hospital::searchDoctor(int id) {
    for (auto &d : doctors) {
        if (d.id == id) {
            cout << "Found: " << d.name << endl;
            return;
        }
    }
    cout << "Not found\n";
}

// ---------- APPOINTMENT ----------
void Hospital::scheduleAppointment() {
    int p, d;
    string date;

    cin >> p >> d >> date;
    appointments.push_back(Appointment(p, d, date));
}

void Hospital::viewAppointments() {
    for (auto &a : appointments) {
        cout << a.patientId << " " << a.doctorId << " " << a.date << endl;
    }
}

// ---------- FILE HANDLING ----------
void Hospital::saveData() {
    ofstream pf("data/patients.txt");
    for (auto &p : patients)
        pf << p.id << " " << p.name << " " << p.age << " " << p.gender << endl;

    ofstream df("data/doctors.txt");
    for (auto &d : doctors)
        df << d.id << " " << d.name << " " << d.age << " " << d.gender << endl;

    ofstream af("data/appointments.txt");
    for (auto &a : appointments)
        af << a.patientId << " " << a.doctorId << " " << a.date << endl;
}

void Hospital::loadData() {
    ifstream pf("data/patients.txt");
    int id, age;
    string name, gender;

    while (pf >> id >> name >> age >> gender) {
        patients.push_back(Patient(id, name, age, gender));
        pid = max(pid, id + 1);
    }

    ifstream df("data/doctors.txt");
    while (df >> id >> name >> age >> gender) {
        doctors.push_back(Doctor(id, name, age, gender));
        did = max(did, id + 1);
    }
}