#ifndef KIEROWCA_H
#define KIEROWCA_H

#include <string>

class kierowca
{
public:
    kierowca(std::string imie, std::string nazwisko, std::string dataur,
             std::string godzinysuma, std::string godzinywOkr, std::string telefon);

    std::string getImie() const;
    void setImie(std::string value);

    std::string getNazwisko() const;
    void setNazwisko(std::string value);

    std::string getDataUr() const;
    void setDataUr(std::string value);

    std::string getGodzinyPracySuma() const;
    void setGodzinyPracySuma(std::string value);

    std::string getGodzinyPracyWOkresieRozl() const;
    void setGodzinyPracyWOkresieRozl(std::string value);

    std::string getTelefon() const;
    void setTelefon(std::string value);

private:
    std::string imie;
    std::string nazwisko;
    std::string dataUr;
    std::string godzinyPracySuma;
    std::string godzinyPracyWOkresieRozl;
    std::string telefon;
};

#endif // KIEROWCA_H

