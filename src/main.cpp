#include <iostream>
#include <vector>

// Erion
#include "Patient.h"
#include "Appointment.h"
#include "pharmacy.h"

// Loresa
#include "ambulance.h"

// Delvina
#include "Report.h"

using namespace std;

int main() {
    vector<Patient> pacientet;
    vector<Appointment> terminet;
    Farmaci farmaci;
    Ambulance ambulance;
    Report raport;

    int zgjedhja;

    do {
        cout << "\n==============================\n";
        cout << "  Sistemi Sh\x89ndet\x89sor - Doki\n";
        cout << "==============================\n";
        cout << "1. Shto pacient\n";
        cout << "2. Shfaq pacient\x89t\n";
        cout << "3. Shto termin\n";
        cout << "4. Shfaq terminet\n";
        cout << "5. Menaxho farmacin\x89\n";
        cout << "6. Gjej ambulanc\x89n m\x89 t\x89 af\x89rt\n";
        cout << "7. Shfaq raport sh\x89ndet\x89sor\n";
        cout << "0. Dil\n";
        cout << "Zgjedhja: ";
        cin >> zgjedhja;

        switch (zgjedhja) {

        case 1: {
            Patient p;
            p.shtoPacient();
            pacientet.push_back(p);
            break;
        }

        case 2:
            if (pacientet.empty()) {
                cout << "Nuk ka pacient\x89 t\x89 regjistruar.\n";
            }
            else {
                for (const auto& p : pacientet) {
                    p.shfaqPacient();
                }
            }
            break;

        case 3: {
            Appointment a;
            a.shtoTermin();
            terminet.push_back(a);
            break;
        }

        case 4:
            if (terminet.empty()) {
                cout << "Nuk ka termine t\x89 regjistruara.\n";
            }
            else {
                for (const auto& t : terminet) {
                    t.shfaqTermin();
                }
            }
            break;

        case 5:
            farmaci.shfaqBarnat();
            break;

        case 6:
            ambulance.gjejAmbulancenMeTeAfert("Qyteti");
            break;

        case 7:
            raport.shfaqRaport();
            break;

        case 0:
            cout << "Programi u mbyll me sukses.\n";
            break;

        default:
            cout << "Zgjedhje e pavlefshme!\n";
        }

    } while (zgjedhja != 0);

    return 0;
}