#ifndef AMBULANCE_H
#define AMBULANCE_H

#include <string>
#include <vector>

using namespace std;

// Struktura për informacion mbi ambulancën
struct AmbulancaInfo {
    string emri;
    double distanca; // në kilometra
};

class Ambulance {
private:
    vector<AmbulancaInfo> listaAmbulancave;

public:
    void shtoAmbulance(const string& emri, double distanca);
    void shfaqAmbulancat() const;
    void gjejAmbulancenMeTeAfert(const string& qyteti) const;
};

#endif
