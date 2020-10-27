#ifndef ARBOLDIA_H
#define ARBOLDIA_H
#include "Nodo.h"
#include <vector>

class ArbolDIA
{
    public:
        Nodo *root;
        ArbolDIA();
        ArbolDIA(Tablero t);
        void generar_arbol(Tablero t , char c);
        virtual ~ArbolDIA();

    protected:

    private:
};

#endif // ARBOLDIA_H
