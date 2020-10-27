#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include "MovIA.h"
#include "MovUser.h"
#include <vector>

using namespace std;

class Tablero
{
    public:
        int f_blancas;
        int f_negras;
        int tamanho;
        char ganador;
        char **tablero;
        char jugador;
        char jugadorIA;
        Tablero();
        Tablero(int tam);
        void generar_tablero();
        int getFB();
        int getFN();
        int valor();
        void setJugador(char c);
        void imprimir_tablero();
        void posibles_mov(vector<MovUser> p , char c);
        MovUser minimax(int p , char j , MovUser m , ArbolDIA a);
        virtual ~Tablero();

    protected:

    private:
};

#endif // TABLERO_H
