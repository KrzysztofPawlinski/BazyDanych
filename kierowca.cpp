#include "kierowca.h"

kierowca::kierowca(std::string imie, std::string nazwisko, std::string dataur,
                   std::string godzinysuma, std::string godzinywOkr, std::string telefon) :
imie(imie),nazwisko(nazwisko),dataUr(dataur),godzinyPracySuma(godzinysuma),
  godzinyPracyWOkresieRozl(godzinywOkr),telefon(telefon)
{}

std::string kierowca::getImie() const
{
    return imie;
}

void kierowca::setImie(std::string value)
{
    imie = value;
}

std::string kierowca::getNazwisko() const
{
    return nazwisko;
}

void kierowca::setNazwisko(std::string value)
{
    nazwisko = value;
}

std::string kierowca::getDataUr() const
{
    return dataUr;
}

void kierowca::setDataUr(std::string value)
{
    dataUr = value;
}

std::string kierowca::getGodzinyPracySuma() const
{
    return godzinyPracySuma;
}

void kierowca::setGodzinyPracySuma(std::string value)
{
    godzinyPracySuma = value;
}

std::string kierowca::getGodzinyPracyWOkresieRozl() const
{
    return godzinyPracyWOkresieRozl;
}

void kierowca::setGodzinyPracyWOkresieRozl(std::string value)
{
    godzinyPracyWOkresieRozl = value;
}

std::string kierowca::getTelefon() const
{
    return telefon;
}

void kierowca::setTelefon(std::string value)
{
    telefon = value;
}


