#include <iostream>
#include "Estudante.h"

using namespace std;


Estudante::Estudante(const string &x, int idades, int idss){
    setPessoa(x, idades);
    setEstudante(idss);
}
void Estudante::visualizar(){
    string n = getNome();
    int l = getIdade();
    cout << "nome: " << n << endl;
    cout << "idade: " << l << endl;
    cout << "id: " << id << endl;
}

void Estudante::setEstudante(int ids){
    id = ids;

}