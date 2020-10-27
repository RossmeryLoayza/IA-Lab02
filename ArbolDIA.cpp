#include "ArbolDIA.h"

ArbolDIA::ArbolDIA()
{
    root = NULL;
}

ArbolDIA::ArbolDIA(Tablero t)
{
    if(root == NULL)
        root = new Nodo(t , 0);
}

void ArbolDIA::generar_arbol(Tablero t , char c)
{
    if(root == NULL)
        root = new Nodo(t , t.valor());
    vector<MovUser> tmp;
    t.posibles_mov(tmp , c);
    root->hijos = new Nodo*[tmp.size()];
    for(int i = 0 ; i < tmp.size() ; i++)
    {
        root->hijos[i] = new Nodo(t, t.valor());
    }
}

ArbolDIA::~ArbolDIA()
{
    //dtor
}
