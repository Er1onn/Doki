#include <iostream>
#include <vector>

#include "Patient.h"
#include "Appointment.h"
#include "pharmacy.h"
#include "Ambulance.h"
#include "Report.h"

using namespace std;

int main() {
    vector<Patient> pacientet;
    vector<Appointment> terminet;
    Farmaci karrocaIme;
    Ambulance ambulance;
    Report raport;

    int zgjedhja = -1;

    do {
        cout << "\n--- APLIKACIONI SHËNDETËSOR DOKI ---\n";
        cout << "1. Shto pacient\n";
        cout << "2. Shfaq pacientët\n";
        cout << "3. Shto termin\n";
        cout << "4. Shfaq terminet\n";
        cout << "5. Farmaci (blerje barnash)\n";
        cout << "6. Gjej ambulancën më të afërt\n";
        cout << "7. Raporte shëndetësore\n";
        cout << "0. Dil nga programi\n";
        cout << "Zgjedhja juaj: ";

        cin >> zgjedhja;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Zgjedhje e pavlefshme!\n";
            continue;
        }

        switch (zgjedhja) {

        case 1: {
            string emri;
            int mosha;

            cout << "Shkruaj emrin e pacientit: ";
            cin >> emri;
            cout << "Shkruaj moshën: ";
            cin >> mosha;

            pacientet.push_back(Patient(emri, mosha));
            cout << " Pacienti u shtua me sukses.\n";
            break;
        }

        case 2:
            cout << "\n--- LISTA E PACIENTËVE ---\n";
            if (pacientet.empty()) {
                cout << "Nuk ka pacientë të regjistruar.\n";
            }
            for (const auto& p : pacientet) {
                p.shfaq();
            }
            break;

        case 3: {
            string emri, data;

            cout << "Emri i pacientit: ";
            cin >> emri;
            cout << "Data e terminit (dd/mm/vvvv): ";
            cin >> data;

            terminet.push_back(Appointment(emri, data));
            cout << " Termini u regjistrua me sukses.\n";
            break;
        }

        case 4:
            cout << "\n--- LISTA E TERMINEVE ---\n";
            if (terminet.empty()) {
                cout << "Nuk ka termine të regjistruara.\n";
            }
            for (const auto& t : terminet) {
                t.shfaq();
            }
            break;

        case 5: {
            int zgjedhjaFarmaci = -1;
            do {
                cout << "\n--- FARMACI ---\n";
                cout << "1. Shto barnë\n";
                cout << "2. Shfaq karrocën\n";
                cout << "3. Checkout\n";
                cout << "0. Kthehu\n";
                cout << "Zgjedhja: ";
                cin >> zgjedhjaFarmaci;

                switch (zgjedhjaFarmaci) {
                case 1: {
                    string emriBarne;
                    double cmimi;

                    cout << "Emri i barnës: ";
                    cin >> emriBarne;
                    cout << "Çmimi: ";
                    cin >> cmimi;

                    karrocaIme.shtoBarne(emriBarne, cmimi);
                    break;
                }
                case 2:
                    karrocaIme.shfaqKarroca();
                    break;
                case 3:
                    karrocaIme.checkout();
                    break;
                }
            } while (zgjedhjaFarmaci != 0);
            break;
        }

        case 6: {
            string lokacioni;
            cout << "Shkruaj lokacionin tuaj: ";
            cin >> lokacioni;
            ambulance.gjejAmbulancenMeTeAfert(lokacioni);
            break;
        }

        case 7:
            raport.shfaqRaport();
            break;

        case 0:
            cout << " Programi u mbyll.\n";
            break;

        default:
            cout << " Zgjedhje e pavlefshme!\n";
        }

    } while (zgjedhja != 0);

    return 0;
}