#ifndef EVALUADOR_H
#define EVALUADOR_H

#include "Celular.h"
#include "NodoBinario.h"
#include <iostream>       // std::cin, std::cout
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <list>
using namespace std;

void evaluar();
void escribir(string nombre_archivo, Celular*planeta, int posicion);
Celular* leer(string nombre_archivo, int posicion);
double getUltimoPrecio(string nombre_archivo);
stack<char> convertirAPila(queue<char> mi_cola);
bool estaOrdenado(set<int> mi_set);
map<int,vector<int> > getTablas();
int getSuma(NodoBinario* raiz);
bool sonPrimos(NodoBinario* raiz);

#endif // EVALUADOR_H
