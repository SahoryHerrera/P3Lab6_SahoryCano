
#ifndef FILESYSTEMNODE_H
#define FILESYSTEMNODE_H

#include<string>
using std::string;

class FileSystemNode {
public:
    FileSystemNode();
    FileSystemNode(const FileSystemNode& orig);
    virtual ~FileSystemNode();

    virtual string toString() = 0;

    FileSystemNode(string nombre, string autor, FileSystemNode* padre) :
    nombre(nombre), autor(autor), padre(padre) {
    }

    string getAutor() const {
        return autor;
    }

    void setAutor(string autor) {
        this->autor = autor;
    }

    string getNombre() const {
        return nombre;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    FileSystemNode* getPadre() const {
        return padre;
    }

    void setPadre(FileSystemNode* padre) {
        this->padre = padre;
    }

private:
    string nombre, autor;
    FileSystemNode* padre;
};

#endif /* FILESYSTEMNODE_H */

