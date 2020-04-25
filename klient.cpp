#include "klient.h"

klient:: klient(std::string trasa, std::string imie, std::string nazwisko,
                std::string dataUr, std::string telefon, std::string mail):
    trasa(trasa), imie(imie), nazwisko(nazwisko), dataUr(dataUr), telefon(telefon), mail(mail)
{

}

std::string klient::getTrasa() const
{
    return trasa;
}

void klient::setTrasa(const std::string &value)
{
    trasa = value;
}

std::string klient::getImie() const
{
    return imie;
}

void klient::setImie(const std::string &value)
{
    imie = value;
}

std::string klient::getNazwisko() const
{
    return nazwisko;
}

void klient::setNazwisko(const std::string &value)
{
    nazwisko = value;
}

std::string klient::getDataUr() const
{
    return dataUr;
}

void klient::setDataUr(const std::string &value)
{
    dataUr = value;
}

std::string klient::getTelefon() const
{
    return telefon;
}

void klient::setTelefon(const std::string &value)
{
    telefon = value;
}

std::string klient::getMail() const
{
    return mail;
}

void klient::setMail(const std::string &value)
{
    mail = value;
}

std::string klient::getGodzinaRozpoczecia() const
{
    return godzinaRozpoczecia;
}

void klient::setGodzinaRozpoczecia(const std::string &value)
{
    godzinaRozpoczecia = value;
}

std::string klient::getGodzinaZakonczenia() const
{
    return godzinaZakonczenia;
}

void klient::setGodzinaZakonczenia(const std::string &value)
{
    godzinaZakonczenia = value;
}

std::string klient::getCenaZaKilometr() const
{
    return cenaZaKilometr;
}

void klient::setCenaZaKilometr(const std::string &value)
{
    cenaZaKilometr = value;
}

std::string klient::getOcenaKierowcy() const
{
    return ocenaKierowcy;
}

void klient::setOcenaKierowcy(const std::string &value)
{
    ocenaKierowcy = value;
}
