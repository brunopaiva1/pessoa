#ifndef PESSOA_H
#define PESSOA_H

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;

public:
    Pessoa(const string x, int idades);
    Pessoa();
    virtual void visualizar();
    void setPessoa(const string &xx, int yy);
    string getNome();
    int getIdade();
};
#endif // PESSOA_H
