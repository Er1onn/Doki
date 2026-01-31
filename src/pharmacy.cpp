#include "pharmacy.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Farmaci::shtoBarne(const string& emri, double cmimi) {
    if (cmimi <= 0) {
        cout << "Çmimi nuk mund të jetë negativ ose zero.\n";
        return;
    }

    Barne b;
    b.emri = emri;
    b.cmimi = cmimi;

    karroca.push_back(b);
    cout << "Bari \"" << emri << "\" u shtua në karrocë.\n";
}

void Farmaci::shfaqKarroca() const {
    if (karroca.empty()) {
        cout << "Karroca është bosh.\n";
        return;
    }

    cout << "\n--- KARROCA E BARNAVE ---\n";
    double totali = 0.0;

    for (size_t i = 0; i < karroca.size(); i++) {
        cout << i + 1 << ". "
            << karroca[i].emri
            << " - "
            << fixed << setprecision(2)
            << karroca[i].cmimi << " €\n";

        totali += karroca[i].cmimi;
    }

    cout << "--------------------------\n";
    cout << "Totali: " << fixed << setprecision(2) << totali << " €\n";
}

void Farmaci::checkout() {
    if (karroca.empty()) {
        cout << "Nuk ka barna për checkout.\n";
        return;
    }

    shfaqKarroca();
    cout << "Checkout u krye me sukses. Faleminderit!\n";

    karroca.clear();
}
