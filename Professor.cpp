#include <iostream>
#include "Professor.h"

using namespace std;

void Professor::setSalario(float price){
    salario = price;
}

Professor::Professor(const string &x, int idades, float salar){
    setPessoa(x, idades);
    setSalario(salar);
}