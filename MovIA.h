#ifndef MOVIA_H
#define MOVIA_H
#include "Nodo.h"
#include "Tablero.h"

class MovIA
{
    public:
        char ficha;
        char ficha_oponente;
        MovIA(char c);
        /*MovUser mejor_op;
        MovIA(char c);
        int puntaje(Tablero t);
        Nodo arbol_decision(Tablero t);
        void get_mejorop(int x , int y);
        void mejor_mov(int x , int y);*/
        virtual ~MovIA();

    protected:

    private:
};

#endif // MOVIA_H
