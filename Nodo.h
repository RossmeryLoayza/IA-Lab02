#ifndef NODO_H
#define NODO_H
#include <list>
#include <iostream>
#include "Tablero.h"
#include "MovUser.h"

using namespace std;

class Nodo
{
    public:
        Tablero tab;
        int valor;
        Nodo **hijos;
        Nodo();
        Nodo(Tablero t, int v);
        void setValor(int a);
        virtual ~Nodo();

    protected:

    private:
};

#endif // NODO_H
