
#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "FileSystemNode.h"

class Archivo : public FileSystemNode {
public:
    Archivo();
    Archivo(const Archivo& orig);
    virtual ~Archivo();

    string toString();

private:

};

#endif /* ARCHIVO_H */

