#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
public:
    std::string emri;
    int mosha;

    Patient();
    Patient(std::string e, int m);

    void shfaq() const;
};

#endif
