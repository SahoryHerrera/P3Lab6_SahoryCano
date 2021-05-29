
#include <cstdlib>

#include "FileSystem.h"
#include "CPP.h"
#include "JPG.h"
#include "PPT.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    FileSystem* fs = new FileSystem();

    Directorio* carpeta1 = new Directorio();
    CPP* cpp1 = new CPP(10, 0);
    carpeta1->agregar_archivo(cpp1);
    JPG* jpg1 = new JPG(true, "500pix", 410.0, 200.0);
    carpeta1->agregar_archivo(jpg1);
    PPT* ppt1 = new PPT("Titulo 1", 5, 5, true);
    carpeta1->agregar_archivo(ppt1);
    ////////////////////////////////////////
    Directorio* carpeta2 = new Directorio();
    CPP* cpp2 = new CPP(12, 2);
    carpeta2->agregar_archivo(cpp2);
    JPG* jpg2 = new JPG(true, "50pix", 20.0, 20.0);
    carpeta2->agregar_archivo(jpg2);
    PPT* ppt2 = new PPT("Titulo 2", 15, 15, false);
    carpeta2->agregar_archivo(ppt2);
    ////////////////////////////////////////
    Directorio* carpeta3 = new Directorio();
    CPP* cpp3 = new CPP(20, 4);
    carpeta3->agregar_archivo(cpp3);
    JPG* jpg3 = new JPG(false, "30pix", 30.0, 31.0);
    carpeta3->agregar_archivo(jpg3);
    PPT* ppt3 = new PPT("Titulo 3", 25, 53, false);
    carpeta3->agregar_archivo(ppt3);

    carpeta1->agregar_directorio(carpeta2);
    carpeta2->agregar_directorio(carpeta3);
    
    fs->GetRoot()->agregar_directorio(carpeta1);
    
    return 0;
}

