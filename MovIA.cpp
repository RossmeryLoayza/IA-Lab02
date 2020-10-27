#include "MovIA.h"

MovIA::MovIA(char c)
{
    ficha = c;
    if(c == 'N')
        ficha_oponente = 'B';
    else
        ficha_oponente = 'N';
}


MovIA::~MovIA()
{
    //dtor
}
