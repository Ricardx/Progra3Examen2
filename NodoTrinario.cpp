#include "NodoBinario.h"

NodoBinario::NodoBinario(string valor)
{
    this->valor=valor;
    hijo_der = NULL;
    hijo_medio = NULL;
    hijo_izq = NULL;
}

NodoBinario::~NodoBinario()
{
    //dtor
}
