#include "Fisiere.h"
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>
#include <stack>

    

    Fisiere::Fisiere(std::string numeFisier, bool binar) 
    {
        this->numeFisier = numeFisier;
        this->binar = binar;
    }

    std::string Fisiere::getNumeFisier()
    {
        return numeFisier;
    }

    void Fisiere::setNumeFisier(std::string numeFisier)
    {
        this->numeFisier = numeFisier;
    }

    bool Fisiere::getBinar()
    {
        return binar;
    }

    void Fisiere::setBinar(bool binar)
    {
        this->binar = binar;
    }

    void procesare()
    {

        Evaluator e;
        e.Operatii;
        std::ifstream file(numeFisier);
        if (!file.is_open()) {
            std::cout << "Nu s-a putut deschide fisierul." << "\n";
            return;
    }

    void salvareRezultat();
};