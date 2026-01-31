#ifndef AMBULANCE_H
#define AMBULANCE_H

#include <string>
#include <vector>

using namespace std;

struct AmbulancaInfo {
    string emri;
    double distanca; // në kilometra
};

class Ambulanca {
private:
    vector<AmbulancaInfo> listaAmbulancave;

public:
    void shtoAmbulance(const string& emri, double distanca);
    void shfaqAmbulancat() const;
    void gjejMeTeAfermen() const;
};

#endif