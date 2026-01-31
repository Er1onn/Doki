#ifndef PHARMACY_H
#define PHARMACY_H

#include <string>
#include <vector>

using namespace std;

struct Barne {
    string emri;
    double cmimi;
};

class Farmaci {
private:
    vector<Barne> karroca;

public:
    void shtoBarne(const string& emri, double cmimi);
    void shfaqKarroca() const;
    void checkout();
};

#endif
