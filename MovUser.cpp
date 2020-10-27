#include "MovUser.h"

MovUser::MovUser()
{
    //
}

MovUser::MovUser(int x_a, int y_a, int x_n, int y_n)
{
    x_actual = x_a;
    y_actual = y_a;
    x_nuevo = x_n;
    y_nuevo = y_n;
}

//Si esta comiendo una ficha retornara la posicion de la ficha
void MovUser::ver_mov(int x , int y)
{
    int npx = (x_actual+x_nuevo)/2;
    int npy = (y_actual+y_nuevo)/2;
    x = npx;
    y = npy;
}

MovUser& MovUser::operator = (const MovUser &p)
{
    if(this != &p)
    {
        this->x_actual = p.x_actual;
        this->y_actual = p.y_actual;
        this->x_nuevo = p.x_nuevo;
        this->y_nuevo = p.y_nuevo;
    }
    return *this;
}

MovUser::~MovUser()
{
    //dtor
}
