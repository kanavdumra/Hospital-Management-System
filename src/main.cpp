#include <iostream>
#include "Hospital.h"

using namespace std;

int main() {
    Hospital h;
    h.loadData();

    int choice;

    do {
        cout << "\n1. Add Patient\n2. View Patients\n3. Search Patient\n";
        cout << "4. Add Doctor\n5. View Doctors\n6. Search Doctor\n";
        cout << "7. Schedule Appointment\n8. View Appointments\n0. Exit\n";

        cin >> choice;

        switch (choice) {
            case 1: h.addPatient(); break;
            case 2: h.viewPatients(); break;
            case 3: {
                int id; cin >> id;
                h.searchPatient(id);
                break;
            }
            case 4: h.addDoctor(); break;
            case 5: h.viewDoctors(); break;
            case 6: {
                int id; cin >> id;
                h.searchDoctor(id);
                break;
            }
            case 7: h.scheduleAppointment(); break;
            case 8: h.viewAppointments(); break;
            case 0:
                h.saveData();
                cout << "Saved!\n";
                break;
        }

    } while (choice != 0);

    return 0;
}