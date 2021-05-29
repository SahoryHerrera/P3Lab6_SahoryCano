
#include "Directorio.h"

Directorio::Directorio() {
}

Directorio::Directorio(const Directorio& orig) {
}

Directorio::~Directorio() {
}

void Directorio::agregar_archivo(FileSystemNode* archivo) {
     hijos.push_back(archivo);
}

void Directorio::agregar_directorio(FileSystemNode* directorio) {
    hijos.push_back(directorio);
}

void Directorio::buscarPorNombre(string buscar) {
    for (int i = 0; i < hijos.size(); i++) {
        if ((((FileSystemNode*) hijos.at(i))->getNombre()) == buscar) {
            imprimirRecursivo(i); 
        } else {
            ((FileSystemNode*) hijos.at(i))->getNombre();
        }//fin else
    }//fin for
}//fin metodo


 void Directorio::imprimirRecursivo(int profundidad){
    if(profundidad >= 0){
        cout << ((FileSystemNode*)(hijos.at(profundidad)))->toString();
        imprimirRecursivo(profundidad-1);
    }//fin if
}//fin metodo
 
 string Directorio::toString(){
     return "";
 }