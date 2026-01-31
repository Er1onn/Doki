#include <iostream>
#include <vector>
#include "Patient.h"
#include "Appointment.h"
#include "pharmacy.h"   // shtimi i file-t të Student 1

using namespace std;

int main() {
    vector<Patient> pacientet;
    vector<Appointment> terminet;
    Farmaci karrocaIme;   // instance për Farmaci

    int zgjedhja;

    do {
        cout << "\n--- APLIKACION SHËNDETËSOR ---\n";
        cout << "1. Shto pacient\n";
        cout << "2. Shfaq pacientët\n";
        cout << "3. Shto termin\n";
        cout << "4. Shfaq terminet\n";
        cout << "5. Blerje barnash\n";  // opsioni i ri
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
        else if (zgjedhja == 5) {
            int zgjedhjaFarmaci;
            do {
                cout << "\n--- FARMACI ---\n";
                cout << "1. Shto barnë\n";
                cout << "2. Shfaq karrocën\n";
                cout << "3. Checkout\n";
                cout << "0. Kthehu në menunë kryesore\n";
                cout << "Zgjedhja juaj: ";
                cin >> zgjedhjaFarmaci;

                if (zgjedhjaFarmaci == 1) {
                    string emriBarne;
                    double cmimi;
                    cout << "Shkruaj emrin e barnës: ";
                    cin >> emriBarne;
                    cout << "Shkruaj çmimin: ";
                    cin >> cmimi;
                    karrocaIme.shtoBarne(emriBarne, cmimi);
                }
                else if (zgjedhjaFarmaci == 2) {
                    karrocaIme.shfaqKarroca();
                }
                else if (zgjedhjaFarmaci == 3) {
                    karrocaIme.checkout();
                }

            } while (zgjedhjaFarmaci != 0);
        }

    } while (zgjedhja != 0);

    cout << "Programi u mbyll.\n";
    return 0;
}
