

#ifndef JPG_H
#define JPG_H

#include "Archivo.h"

class JPG : public Archivo {
public:
    JPG();
    JPG(const JPG& orig);
    virtual ~JPG();

    string toString();

    JPG(bool conFlash, string resolucion, double largo, double ancho) :
    Archivo(), conFlash(conFlash), resolucion(resolucion), largo(largo), ancho(ancho) {
    }

    double getAncho() const {
        return ancho;
    }

    void setAncho(double ancho) {
        this->ancho = ancho;
    }

    bool isConFlash() const {
        return conFlash;
    }

    void setConFlash(bool conFlash) {
        this->conFlash = conFlash;
    }

    double getLargo() const {
        return largo;
    }

    void setLargo(double largo) {
        this->largo = largo;
    }

    string getResolucion() const {
        return resolucion;
    }

    void setResolucion(string resolucion) {
        this->resolucion = resolucion;
    }

private:
    bool conFlash;
    string resolucion;
    double largo, ancho;
};

#endif /* JPG_H */

