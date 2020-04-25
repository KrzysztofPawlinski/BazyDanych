#ifndef KLIENT_H
#define KLIENT_H

#include <string>

class klient
{
public:
    klient(std::string trasa, std::string imie, std::string nazwisko,
    std::string dataUr, std::string telefon, std::string mail);

    std::string getTrasa() const;
    void setTrasa(const std::string &value);

    std::string getImie() const;
    void setImie(const std::string &value);

    std::string getNazwisko() const;
    void setNazwisko(const std::string &value);

    std::string getDataUr() const;
    void setDataUr(const std::string &value);

    std::string getTelefon() const;
    void setTelefon(const std::string &value);

    std::string getMail() const;
    void setMail(const std::string &value);

    std::string getGodzinaRozpoczecia() const;
    void setGodzinaRozpoczecia(const std::string &value);

    std::string getGodzinaZakonczenia() const;
    void setGodzinaZakonczenia(const std::string &value);

    std::string getCenaZaKilometr() const;
    void setCenaZaKilometr(const std::string &value);

    std::string getOcenaKierowcy() const;
    void setOcenaKierowcy(const std::string &value);

private:
    std::string trasa;
    std::string imie;
    std::string nazwisko;
    std::string dataUr;
    std::string telefon;
    std::string mail;
    std::string godzinaRozpoczecia;
    std::string godzinaZakonczenia;
    std::string cenaZaKilometr;
    std::string ocenaKierowcy;
};

#endif // KLIENT_H
