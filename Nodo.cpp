#include "Nodo.h"

Nodo::Nodo()
{
    hijos = NULL;
}

Nodo::Nodo(Tablero t , int v)
{
    for(int i = 0 ; i<t.tamanho ; i++)
    {
        for(int j = 0 ; j < t.tamanho ; j++)
            tab.tablero[i][j] = t.tablero[i][j];
    }
    tab.f_blancas = t.f_blancas;
    tab.f_negras = t.f_negras;
    tab.tamanho = t.tamanho;
    tab.jugador = t.jugador;
    tab.jugadorIA = t.jugadorIA;
    valor = v;
    hijos = NULL;
}


void Nodo::setValor(int a)
{
    valor = a;
}

Nodo::~Nodo()
{
    //dtor
}
