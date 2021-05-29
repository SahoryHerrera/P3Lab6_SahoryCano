
#ifndef CPP_H
#define CPP_H

#include "Archivo.h"

class CPP : public Archivo {
public:
    CPP();
    CPP(const CPP& orig);
    virtual ~CPP();
    
    string toString();

    CPP(int lineas_codigo, int num_errores) :
    Archivo(), lineas_codigo(lineas_codigo), num_errores(num_errores) {
    }

    int getLineas_codigo() const {
        return lineas_codigo;
    }

    void setLineas_codigo(int lineas_codigo) {
        this->lineas_codigo = lineas_codigo;
    }

    int getNum_errores() const {
        return num_errores;
    }

    void setNum_errores(int num_errores) {
        this->num_errores = num_errores;
    }

private:
    int lineas_codigo, num_errores;
};

#endif /* CPP_H */

