// MAIN I RREGULLUAR – Erioni (FARMACI)
#include <iostream>
#include <vector>
#include "Patient.h"
#include "Appointment.h"
#include "pharmacy.h"

using namespace std;

int main() {
    vector<Patient> pacientet;
    vector<Appointment> terminet;
    Farmaci farmacia;

    int zgjedhja = -1;

    do {
        cout << "\n--- APLIKACION SHËNDETËSOR DOKI ---\n";
        cout << "1. Shto pacient\n";
        cout << "2. Shfaq pacientët\n";
        cout << "3. Shto termin\n";
        cout << "4. Shfaq terminet\n";
        cout << "5. Farmaci (blerje barnash)\n";
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
            cout << "Pacienti u shtua me sukses.\n";
            break;
        }
        case 2:
            cout << "\n--- LISTA E PACIENTËVE ---\n";
            for (const auto& p : pacientet)
                p.shfaq();
            break;

        case 3: {
            string emri, data;

            cout << "Emri i pacientit: ";
            cin >> emri;
            cout << "Data e terminit (dd/mm/vvvv): ";
            cin >> data;

            terminet.push_back(Appointment(emri, data));
            cout << "Termini u regjistrua me sukses.\n";
            break;
        }
        case 4:
            cout << "\n--- LISTA E TERMINEVE ---\n";
            for (const auto& t : terminet)
                t.shfaq();
            break;

        case 5: {
            int zgjedhjaFarmaci = -1;
            do {
                cout << "\n--- FARMACI ---\n";
                cout << "1. Shto barnë\n";
                cout << "2. Shfaq karrocën\n";
                cout << "3. Checkout\n";
                cout << "0. Kthehu mbrapa\n";
                cout << "Zgjedhja juaj: ";

                cin >> zgjedhjaFarmaci;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Zgjedhje e pavlefshme!\n";
                    continue;
                }

                if (zgjedhjaFarmaci == 1) {
                    string emriBarne;
                    double cmimi;

                    cout << "Emri i barnës: ";
                    cin >> emriBarne;
                    cout << "Çmimi: ";
                    cin >> cmimi;

                    farmacia.shtoBarne(emriBarne, cmimi);
                }
                else if (zgjedhjaFarmaci == 2) {
                    farmacia.shfaqKarroca();
                }
                else if (zgjedhjaFarmaci == 3) {
                    farmacia.checkout();
                }

            } while (zgjedhjaFarmaci != 0);
            break;
        }

        case 0:
            cout << "Programi po mbyllet...\n";
            break;

        default:
            cout << "Zgjedhje e pavlefshme!\n";
        }

    } while (zgjedhja != 0);

    cout << "Programi u mbyll.\n";
    return 0;
}
