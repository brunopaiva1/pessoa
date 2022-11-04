#include <iostream>
#include "Pessoa.h"
#include "Estudante.h"
#include "Professor.h"

using namespace std;

int main(){
    Pessoa a("Vitor", 25);
    Estudante b("erick", 33, 1222);
    Professor c("Gabriel", 44, 15);

    a.visualizar();
    b.visualizar();
    c.visualizar();

    return 0;
}