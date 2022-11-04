#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include "Pessoa.h"
#include <iostream>

using namespace std;

class Estudante : public Pessoa
{
    private:
    int id;
    
    public:
    Estudante(const string &x, int idades, int idss);
    void visualizar();
    void setEstudante(int ids);

};

#endif //ESTUDANTE_H