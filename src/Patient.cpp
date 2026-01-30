#include "Patient.h"
#include <iostream>

using namespace std;

Patient::Patient() {
    emri = "";
    mosha = 0;
}

Patient::Patient(string e, int m) {
    emri = e;
    mosha = m;
}

void Patient::shfaq() const {
    cout << "Emri: " << emri << " | Mosha: " << mosha << endl;
}
