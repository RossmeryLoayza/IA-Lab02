#ifndef MOVUSER_H
#define MOVUSER_H
#include <utility>

class MovUser
{
    public:
        int x_actual;
        int y_actual;
        int x_nuevo;
        int y_nuevo;
        MovUser();
        MovUser(int x_a, int y_a, int x_n, int y_n);
        void ver_mov(int x , int y);
        MovUser& operator = (const MovUser &p);
        virtual ~MovUser();

    protected:

    private:
};

#endif // MOVUSER_H
