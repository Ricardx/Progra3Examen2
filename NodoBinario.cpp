#include "NodoBinario.h"

NodoBinario::NodoBinario(int valor)
{
    this->valor=valor;
    hijo_der = NULL;
    hijo_izq = NULL;
}

NodoBinario::~NodoBinario()
{
    //dtor
}
