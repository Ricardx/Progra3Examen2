#ifndef CELULAR_H
#define CELULAR_H

#include <iostream>

using namespace std;

class Celular
{
    public:
        string nombre;
        int modelo;
        double precio;
        Celular(string nombre, int modelo, double precio);
        virtual ~Celular();
    protected:
    private:
};

#endif // CELULAR_H
