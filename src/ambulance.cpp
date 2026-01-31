#include "ambulance.h"
#include <iostream>
#include <limits>

using namespace std;

void Ambulanca::shtoAmbulance(const string& emri, double distanca) {
    listaAmbulancave.push_back({ emri, distanca });
    cout << "Ambulanca "" << emri << "" u shtua.\n";
}

void Ambulanca::shfaqAmbulancat() const {
    if (listaAmbulancave.empty()) {
        cout << "Nuk ka ambulanca të regjistruara.\n";
        return;
    }
    cout << "\n--- LISTA E AMBULANCAVE ---\n";
    for (size_t i = 0; i < listaAmbulancave.size(); i++)
        cout << i + 1 << ". " << listaAmbulancave[i].emri
        << " - " << listaAmbulancave[i].distanca << " km\n";
}

void Ambulanca::gjejMeTeAfermen() const {
    if (listaAmbulancave.empty()) {
        cout << "Nuk ka ambulanca të regjistruara.\n";
        return;
    }

    double minDist = numeric_limits<double>::max();
    size_t indeksi = 0;

    for (size_t i = 0; i < listaAmbulancave.size(); i++)
        if (listaAmbulancave[i].distanca < minDist) {
            minDist = listaAmbulancave[i].distanca;
            indeksi = i;
        }

    cout << "Ambulanca më e afërt është: "
        << listaAmbulancave[indeksi].emri
        << " - " << listaAmbulancave[indeksi].distanca << " km\n";
}