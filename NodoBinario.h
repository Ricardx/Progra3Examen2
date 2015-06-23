#ifndef NODOBINARIO_H
#define NODOBINARIO_H

#include <iostream>
using namespace std;

class NodoBinario
{
    public:
        int valor;
        NodoBinario *hijo_izq, *hijo_der;
        NodoBinario(int valor);
        virtual ~NodoBinario();
    protected:
    private:
};

#endif // NODOBINARIO_H
