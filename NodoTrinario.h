#ifndef NODOBINARIO_H
#define NODOBINARIO_H

#include <iostream>
using namespace std;

class NodoBinario
{
    public:
        string valor;
        NodoBinario *hijo_izq, *hijo_medio, *hijo_der;
        NodoBinario(string valor);
        virtual ~NodoBinario();
    protected:
    private:
};

#endif // NODOBINARIO_H
