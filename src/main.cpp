#include <iostream>
#include <vector>

#include "patient.h"
#include "appointment.h"
#include "pharmacy.h"
#include "ambulance.h"
#include "report.h"

using namespace std;

int main() {
    vector<Patient> pacientet;
    vector<Appointment> terminet;

    Farmaci farmaci;
    Ambulance ambulance;
    Report raport;

    int zgjedhja;
    char mbyllja;

    do {
        cout << "\n==============================\n";
        cout << "  Aplikacioni Shendetesor - Doki\n";
        cout << "==============================\n";
        cout << "1. Shto pacient\n";
        cout << "2. Shfaq pacientet\n";
        cout << "3. Shto termin\n";
        cout << "4. Shfaq terminet\n";
        cout << "5. Farmaci\n";
        cout << "6. Gjej ambulancen me te afert\n";
        cout << "7. Shfaq raport shendetesor\n";
        cout << "0. Dil\n";
        cout << "Zgjedhja: ";
        cin >> zgjedhja;

        switch (zgjedhja) {

        case 1: {
            string emri;
            int mosha;
            cout << "Emri: ";
            cin >> emri;
            cout << "Mosha: ";
            cin >> mosha;
            pacientet.push_back(Patient(emri, mosha));
            cout << "Pacienti u shtua me sukses.\n";
            break;
        }

        case 2:
            if (pacientet.empty())
                cout << "Nuk ka paciente.\n";
            else
                for (const auto& p : pacientet)
                    p.shfaq();
            break;

        case 3: {
            string emri, data;
            cout << "Emri i pacientit: ";
            cin >> emri;
            cout << "Data e terminit: ";
            cin >> data;
            terminet.push_back(Appointment(emri, data));
            cout << "Termini u shtua.\n";
            break;
        }

        case 4:
            if (terminet.empty())
                cout << "Nuk ka termine.\n";
            else
                for (const auto& t : terminet)
                    t.shfaq();
            break;

        case 5: {
            string emri;
            double cmimi;
            cout << "Emri i barit: ";
            cin >> emri;
            cout << "Cmimi: ";
            cin >> cmimi;
            farmaci.shtoBarne(emri, cmimi);
            break;
        }

        case 6:
            ambulance.gjejAmbulancenMeTeAfert("Qyteti");
            break;

        case 7:
            raport.shfaqRaport();
            break;

        case 0:
            cout << "Programi u mbyll.\n";
            return 0;

        default:
            cout << "Zgjedhje e pavlefshme!\n";
        }

        cout << "\nDeshironi ta mbyllni programin? (y/n): ";
        cin >> mbyllja;

    } while (mbyllja == 'n' || mbyllja == 'N');

    cout << "Programi perfundoi.\n";
    return 0;
}
