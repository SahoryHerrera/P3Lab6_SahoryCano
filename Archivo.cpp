

#include "Archivo.h"

Archivo::Archivo() {
}

Archivo::Archivo(const Archivo& orig) {
}

Archivo::~Archivo() {
}

string Archivo::toString(){
    return this->getNombre();
}

