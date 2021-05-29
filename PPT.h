
#ifndef PPT_H
#define PPT_H

#include "Archivo.h"

class PPT : public Archivo {
public:
    PPT();
    PPT(const PPT& orig);
    virtual ~PPT();

    string toString();

    PPT(string titulo, int numSlides, int numPlantilla, bool tieneAnimaciones) :
    Archivo(), titulo(titulo), numSlides(numSlides), numPlantilla(numPlantilla), tieneAnimaciones(tieneAnimaciones) {
    }

    int getNumPlantilla() const {
        return numPlantilla;
    }

    void setNumPlantilla(int numPlantilla) {
        this->numPlantilla = numPlantilla;
    }

    int getNumSlides() const {
        return numSlides;
    }

    void setNumSlides(int numSlides) {
        this->numSlides = numSlides;
    }

    bool isTieneAnimaciones() const {
        return tieneAnimaciones;
    }

    void setTieneAnimaciones(bool tieneAnimaciones) {
        this->tieneAnimaciones = tieneAnimaciones;
    }

    string getTitulo() const {
        return titulo;
    }

    void setTitulo(string titulo) {
        this->titulo = titulo;
    }

private:
    string titulo;
    int numSlides, numPlantilla;
    bool tieneAnimaciones;
};

#endif /* PPT_H */

