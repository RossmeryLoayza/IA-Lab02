#include "Tablero.h"

Tablero::Tablero()
{
    tamanho = 0;
    tablero = NULL;
    f_blancas = f_negras = 0;
    ganador = '';
}

Tablero::Tablero(int tam)
{
    tamanho = tam;
    tablero = new char*[tam];
    for(int i = 0 ; i < tam ; i++)
        tablero[i] = new char[tam];
    f_blancas = ((tam*tam)-(tam*2))/4;
    f_negras = f_blancas;
    ganador = 'r';
}

void Tablero::generar_tablero()
{
    int f = (tamanho/2);
    for(int i = 0 ; i < f ; i++)
    {
        for (int j = 0 ; j < tamanho ; j++)
        {
            if(i%2==0 && j%2 == 0)
            {
                tablero[i][j] = '_';
                tablero[i][j+1] = 'N';
            }
            else
            {
                if(i%2!=0 && j%2 == 0)
                {
                    tablero[i][j] = 'N';
                    tablero[i][j+1] = '_';
                }
            }
        }
    }
    for(int i = f-1 ; i < f+1 ; i++)
    {
        for(int j = 0 ; j < tamanho ; j++)
            tablero[i][j] = '_';
    }
    f = (tamanho/2)+1;
    for(int i = f ; i < tamanho ; i++)
    {
        for (int j = 0 ; j < tamanho ; j++)
        {
            if(i%2==0 && j%2 == 0)
            {
                tablero[i][j] = '_';
                tablero[i][j+1] = 'B';
            }
            else
            {
                if(i%2!=0 && j%2 == 0)
                {
                    tablero[i][j] = 'B';
                    tablero[i][j+1] = '_';
                }
            }
        }
    }
}

int Tablero::getFB()
{
    return f_blancas;
}

int Tablero::getFN()
{
    return f_negras;
}

int Tablero::valor()
{
    if(jugadorIA == 'B')
        return f_blancas - f_negras;
    else
        return f_negras - f_blancas;
}

void Tablero::posibles_mov(vector<MovUser> p , char c)
{
    for(int i = 0 ; i < tamanho ; i++)
    {
        for(int j = 0 ; j < tamanho ; j++)
        {
            if(tablero[i][j] == c && tablero[i+1][j+1] == '_')
            {
                MovUser n(i,j,i+1,j+1);
                p.push_back(n);
            }
            if(tablero[i][j] == c && tablero[i-1][j-1] == '_')
            {
                MovUser n(i,j,i-1,j-1);
                p.push_back(n);
            }
            if(tablero[i][j] == c && tablero[i+1][j+1] == 'B' && tablero[i+2][j+2] == '_')
            {
                MovUser n(i,j,i+2,j+2);
                p.push_back(n);
            }
            if(tablero[i][j] == c && tablero[i-1][j-1] == 'B' && tablero[i-2][j-2] == '_')
            {
                MovUser n(i,j,i-2,j-2);
                p.push_back(n);
            }
        }
    }
}

void Tablero::imprimir_tablero()
{
    for(int i = 0 ; i < tamanho ; i++)
    {
        cout << '|';
        for(int j = 0 ; j < tamanho ; j++)
            cout << tablero[i][j] << '|';
        cout << endl;
    }
}

void Tablero::setJugador(char c)
{
    jugador = c;
}

Tablero::~Tablero()
{
    //dtor
}
