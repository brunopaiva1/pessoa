#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Pessoa.h"
#include <iostream>

using namespace std;

class Professor : public Pessoa
{
    private:
    float salario;

    public:
    void setSalario(float price);
    Professor(const string &x, int idades, float salar);
  

};

#endif //PROFESSOR_H