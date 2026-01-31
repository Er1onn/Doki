#include "pharmacy.h"
#include <iostream>

// Shto barnë në karrocë
void Farmaci::shtoBarne(const std::string& emri, double cmimi) {
    karroca.push_back({ emri, cmimi });
}

// Shfaq listën e barnave në karrocë
void Farmaci::shfaqKarroca() {
    std::cout << "Karroca me barnat:\n";
    for (auto& barne : karroca)
        std::cout << barne.emri << " - €" << barne.cmimi << "\n";
}

// Llogarit totalin dhe pastron karrocën
double Farmaci::checkout() {
    double totali = 0;
    for (auto& barne : karroca)
        totali += barne.cmimi;
    std::cout << "Totali per pagesë: €" << totali << "\n";
    karroca.clear();
    return totali;
}
