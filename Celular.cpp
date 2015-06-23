#include "Celular.h"

Celular::Celular(string nombre, int modelo, double precio)
{
    this->nombre=nombre;
    this->modelo=modelo;
    this->precio=precio;
}

Celular::~Celular()
{
    //dtor
}
