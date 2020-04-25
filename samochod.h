#ifndef SAMOCHOD_H
#define SAMOCHOD_H

#include <string>

class samochod
{
public:
    samochod(std::string model, std::string marka, std::string kolor, std::string rokprodukcji,
             std::string typpaliwa, std::string rejestracja, std::string numerubezp, std::string numerwin);

    std::string getModel() const;
    void setModel(const std::string &value);

    std::string getMarka() const;
    void setMarka(const std::string &value);

    std::string getKolor() const;
    void setKolor(const std::string &value);

    std::string getRokProdukcji() const;
    void setRokProdukcji(const std::string &value);

    std::string getTypPaliwa() const;
    void setTypPaliwa(const std::string &value);

    std::string getRejestracja() const;
    void setRejestracja(const std::string &value);

    std::string getNumerUbezp() const;
    void setNumerUbezp(const std::string &value);

    std::string getNumerWin() const;
    void setNumerWin(const std::string &value);

private:
    std::string model;
    std::string marka;
    std::string kolor;
    std::string rokProdukcji;
    std::string typPaliwa;
    std::string rejestracja;
    std::string numerUbezp;
    std::string numerWin;
};

#endif // SAMOCHOD_H
