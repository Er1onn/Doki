#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>

class Appointment {
public:
    std::string emriPacientit;
    std::string data;

    Appointment(std::string e, std::string d);
    void shfaq() const;
};

#endif
