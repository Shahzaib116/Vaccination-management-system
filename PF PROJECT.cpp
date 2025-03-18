#include <iostream>
#include <string>
using namespace std;

struct Patient {
    string name;
    int age;
    string contact;
    string status; // "Vaccinated" or "Pending"
};

struct Vaccine {
    string type;
    int quantity;
};

struct Appointment {
    string patientName;
    string date;
};

Patient patient;
Vaccine vaccine;
Appointment appointment;

int main() {
    int choice;
    do {
        cout << "\nVaccination Management System Menu:" << endl;
        cout << "1. Register Patient" << endl;
        cout << "2. Add Vaccine" << endl;
        cout << "3. Schedule Appointment" << endl;
        cout << "4. Mark as Vaccinated" << endl;
        cout << "5. Display Patient Info" << endl;
        cout << "6. Display Vaccine Info" << endl;
        cout << "7. Display Appointment Info" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:  
                cout << "Enter patient name: ";
                cin >> patient.name;
                cout << "Enter age: ";
                cin >> patient.age;
                cout << "Enter contact: ";
                cin >> patient.contact;
                patient.status = "Pending";
                cout << "Patient registered successfully!" << endl;
                break;
            
            case 2:  
                cout << "Enter vaccine type: ";
                cin >> vaccine.type;
                cout << "Enter quantity: ";
                cin >> vaccine.quantity;
                cout << "Vaccine added successfully!" << endl;
                break;

            case 3:  
                cout << "Enter patient name for appointment: ";
                cin >> appointment.patientName;
                cout << "Enter appointment date (dd/mm/yyyy): ";
                cin >> appointment.date;
                cout << "Appointment scheduled successfully!" << endl;
                break;

            case 4:  
                patient.status = "Vaccinated";
                cout << "Patient marked as vaccinated!" << endl;
                break;

            case 5:  
                cout << "Patient Name: " << patient.name << endl;
                cout << "Age: " << patient.age << endl;
                cout << "Contact: " << patient.contact << endl;
                cout << "Status: " << patient.status << endl;
                break;

            case 6:  
                cout << "Vaccine Type: " << vaccine.type << endl;
                cout << "Quantity: " << vaccine.quantity << endl;
                break;

            case 7:  
                cout << "Appointment for: " << appointment.patientName << endl;
                cout << "Date: " << appointment.date << endl;
                break;

            case 8:  
                cout << "Exiting system..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again!" << endl;
        }
    } while (choice != 8);

    return 0;
}
