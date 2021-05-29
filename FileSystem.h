
#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include "Directorio.h"

class FileSystem {
public:
    FileSystem();
    FileSystem(const FileSystem& orig);
    virtual ~FileSystem();

    FileSystem(Directorio* root) :
    root(root) {
    }

    Directorio* GetRoot() const {
        return root;
    }

    void SetRoot(Directorio* root) {
        this->root = root;
    }

private:
    Directorio* root;
};

#endif /* FILESYSTEM_H */

