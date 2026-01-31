#ifndef FARMACI_H
#define FARMACI_H

#include <vector>
#include <string>

struct Barnat {
    std::string emri;
    double cmimi;
};

class Farmaci {
private:
    std::vector<Barnat> karroca;
public:
    void shtoBarne(const std::string& emri, double cmimi);
    void shfaqKarroca();
    double checkout();
};

#endif
