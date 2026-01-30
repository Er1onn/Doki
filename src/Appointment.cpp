#include "Appointment.h"
#include <iostream>

using namespace std;

Appointment::Appointment(string e, string d) {
    emriPacientit = e;
    data = d;
}

void Appointment::shfaq() const {
    cout << "Pacienti: " << emriPacientit
        << " | Data: " << data << endl;
}
