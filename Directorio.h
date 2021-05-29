
#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include<iostream>
using std::cout;

#include <vector>
using std::vector;

#include <cstring>
using std::strncmp;

#include <string>
using std::string;

#include "FileSystemNode.h"

class Directorio : public FileSystemNode {
public:
    Directorio();
    Directorio(const Directorio& orig);
    virtual ~Directorio();

    void buscarPorNombre(string);
    void imprimirRecursivo(int);
    string toString();
    void agregar_archivo(FileSystemNode*);
    void agregar_directorio(FileSystemNode*);

    vector<FileSystemNode*> getHijos() const {
        return hijos;
    }

    void setHijos(vector<FileSystemNode*> hijos) {
        this->hijos = hijos;
    }

private:
    vector<FileSystemNode*> hijos;
};

#endif /* DIRECTORIO_H */

