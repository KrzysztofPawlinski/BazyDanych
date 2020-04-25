#include "samochod.h"

samochod::samochod(std::string model, std::string marka, std::string kolor, std::string rokprodukcji,
                   std::string typpaliwa, std::string rejestracja, std::string numerubezp, std::string numerwin) :
    model(model), marka(marka), kolor(kolor), rokProdukcji(rokprodukcji),
    typPaliwa(typpaliwa), rejestracja(rejestracja), numerUbezp(numerubezp), numerWin(numerwin)
{}

std::string samochod::getModel() const
{
    return model;
}

void samochod::setModel(const std::string &value)
{
    model = value;
}

std::string samochod::getMarka() const
{
    return marka;
}

void samochod::setMarka(const std::string &value)
{
    marka = value;
}

std::string samochod::getKolor() const
{
    return kolor;
}

void samochod::setKolor(const std::string &value)
{
    kolor = value;
}

std::string samochod::getRokProdukcji() const
{
    return rokProdukcji;
}

void samochod::setRokProdukcji(const std::string &value)
{
    rokProdukcji = value;
}

std::string samochod::getTypPaliwa() const
{
    return typPaliwa;
}

void samochod::setTypPaliwa(const std::string &value)
{
    typPaliwa = value;
}

std::string samochod::getRejestracja() const
{
    return rejestracja;
}

void samochod::setRejestracja(const std::string &value)
{
    rejestracja = value;
}

std::string samochod::getNumerUbezp() const
{
    return numerUbezp;
}

void samochod::setNumerUbezp(const std::string &value)
{
    numerUbezp = value;
}

std::string samochod::getNumerWin() const
{
    return numerWin;
}

void samochod::setNumerWin(const std::string &value)
{
    numerWin = value;
}
