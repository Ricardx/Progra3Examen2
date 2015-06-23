// queue::push/pop

#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Celular.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;

//Escribe los datos del objeto celular (dado) en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varios celulares en un solo archivo
void escribir(string nombre_archivo, Celular*celular, int posicion)
{
    /*
        nombre 20 bytes
        modelo 4 bytes
        precio 8 bytes
    */

    ofstream out(nombre_archivo.c_str(),ios::in);
    out.seekp(32*posicion);
    out.write(celular->nombre.c_str(),20);
    out.write((char*)&celular->modelo,4);
    out.write((char*)&celular->precio,8);
    out.close();
}

//Devuelve un celular previamente escrito (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varios celulares de un solo archivo
Celular* leer(string nombre_archivo, int posicion)
{
    ifstream in(nombre_archivo.c_str());
    char nombre[20];
    int modelo;
    double precio;

    in.seekg(32*posicion);
    in.read(nombre,20);
    in.read((char*)&modelo,4);
    in.read((char*)&precio,8);
    in.close();

    Celular *c = new Celular(nombre,modelo,precio);
    return c;
}

//Devuelve el precio del celular en la ultima posicion del archivo con nombre dado
double getUltimoPrecio(string nombre_archivo)
{

    ifstream in(nombre_archivo.c_str());
    in.seekg(-8,ios::end);
    double ultimo_precio;
    in.read((char*)&ultimo_precio,8);
    in.close();

    return ultimo_precio;
}

//Convierte la cola (dada) en una pila los datos deben de quedar en el mismo orden
//Nota: El tope de la pila debe de ser el frente de la cola
stack<char> convertirAPila(queue<char> mi_cola)
{
    stack<char> copia;
    while(!mi_cola.empty())
    {
        copia.push(mi_cola.front());
        mi_cola.pop();
    }

    stack<char> resultado;
    while(!copia.empty())
    {
        resultado.push(copia.top());
        copia.pop();
    }
    return resultado;
}

//Devuelve true si el set esta ordenado, de lo contrario devuelve false
bool estaOrdenado(set<int> mi_set)
{
    // el set los ordena automaticamente pueden leerlo en este link : http://www.cplusplus.com/reference/set/set/
    // Internally, the elements in a set are always sorted following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).
    return true;
}

//Devuelve las tablas de los numeros del 1 al 10
//La llave es el numero de la tabla, el valor asociado es un vector que contiene la tabla de dicho numero
map<int,vector<int> > getTablas()
{
    map<int,vector<int> > mi_mapa;
    vector<int>mi_tabla;

    for(int n1=1; n1<=10; n1++)
    {
        for(int n2=1;n2<=10;n2++)
        {
            mi_tabla.push_back(n1*n2);
        }
        mi_mapa[n1] = mi_tabla;
        mi_tabla.clear();
    }
    return mi_mapa;
}

//Devuelve la suma de todos los valores almacenados en el arbol con raiz dada
int getSuma(NodoBinario* raiz)
{
    if(raiz!=NULL)
    {
        return raiz->valor + getSuma(raiz->hijo_der) + getSuma(raiz->hijo_izq);
    }
   return 0;
}

//Devuelve true si todos los valores de los nodos son primos, de lo contrario devuelve false
bool sonPrimos(NodoBinario* raiz)
{
    int valor;
    int valor2;
    int valor3;
    if(raiz!=NULL)
        valor = raiz->valor;

    if(valor%2==0)
        return false;

   if(raiz->hijo_der!=NULL)
        valor2 = raiz->hijo_der->valor;

    if(valor2%2==0)
        return false;

    if(raiz->hijo_izq!=NULL)
        valor3 = raiz->hijo_izq->valor;

    if(valor3%2==0)
        return false;


    return true;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

