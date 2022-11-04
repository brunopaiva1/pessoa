#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(const string x, int idades){
    setPessoa(x, idades);
}

Pessoa::Pessoa(){

}

void Pessoa::visualizar(){
     cout << "nome: " << nome << endl;
     cout << "idade: " << idade << endl;
}

void Pessoa::setPessoa(const string &xx, int yy){
    nome = xx; 
    idade = yy;
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}



