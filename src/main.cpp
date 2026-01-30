#include <iostream>
#include <vector>
#include "Patient.h"
#include "Appointment.h"

using namespace std;

int main() {
    vector<Patient> pacientet;
    vector<Appointment> terminet;

    int zgjedhja;

    do {
        cout << "\n--- APLIKACION SHËNDETËSOR ---\n";
        cout << "1. Shto pacient\n";
        cout << "2. Shfaq pacientët\n";
        cout << "3. Shto termin\n";
        cout << "4. Shfaq terminet\n";
        cout << "0. Dil nga programi\n";
        cout << "Zgjedhja juaj: ";
        cin >> zgjedhja;

        if (zgjedhja == 1) {
            string emri;
            int mosha;

            cout << "Shkruaj emrin e pacientit: ";
            cin >> emri;
            cout << "Shkruaj moshën: ";
            cin >> mosha;

            pacientet.push_back(Patient(emri, mosha));
            cout << "Pacienti u shtua me sukses.\n";
        }
        else if (zgjedhja == 2) {
            cout << "\n--- LISTA E PACIENTËVE ---\n";
            for (const auto& p : pacientet) {
                p.shfaq();
            }
        }
        else if (zgjedhja == 3) {
            string emri, data;

            cout << "Emri i pacientit: ";
            cin >> emri;
            cout << "Data e terminit (dd/mm/vvvv): ";
            cin >> data;

            terminet.push_back(Appointment(emri, data));
            cout << "Termini u regjistrua me sukses.\n";
        }
        else if (zgjedhja == 4) {
            cout << "\n--- LISTA E TERMINEVE ---\n";
            for (const auto& t : terminet) {
                t.shfaq();
            }
        }

    } while (zgjedhja != 0);

    cout << "Programi u mbyll.\n";
    return 0;
}
