#include "Evaluador.h"

string getPrimerElemento(queue<string> mi_cola);

bool compareSets(set<string>s1, set<string>s2)
{
    if(s1.size()!=s2.size())
        return false;
    set<string>::iterator j =s2.begin();
    for(set<string>::iterator i=s1.begin();i!=s1.end();i++)
    {
        if(*i!=*j)
            return false;
        j++;
    }
    return true;
}

bool compareSets(stack<char>s1, stack<char>s2)
{
    if(s1.size()!=s2.size())
        return false;
    while(!s1.empty())
    {
        if(s1.top()!=s2.top())
            return false;
        s1.pop();
        s2.pop();
    }
    return true;
}

void evaluar()
{
    int nota = 0;

    escribir("archivo_evaluador1",new Celular("A6",43235653,432.5),2);
    escribir("archivo_evaluador1",new Celular("2+2",98431543,30165.74),0);
    escribir("archivo_evaluador1",new Celular("Xphone",104326764,123541.9),1);

    cout<<"Ejercicio escribir() y leer():\t\t";
    bool correcto = true;

    if(  (leer("archivo_evaluador1",0)->nombre == "2+2"
       && leer("archivo_evaluador1",1)->nombre == "Xphone"
       && leer("archivo_evaluador1",2)->nombre == "A6"
       && leer("archivo_evaluador1",0)->modelo == 98431543
       && leer("archivo_evaluador1",1)->modelo == 104326764
       && leer("archivo_evaluador1",2)->modelo == 43235653
       && leer("archivo_evaluador1",0)->precio == 30165.74
       && leer("archivo_evaluador1",1)->precio == 123541.9
       && leer("archivo_evaluador1",2)->precio == 432.5
       )==false)
    {
        correcto=false;
    }

    escribir("archivo_evaluador2",new Celular("CMobile",54326,30165.74),0);
    escribir("archivo_evaluador2",new Celular("B3",98431543,30565.74),1);

    if(  (leer("archivo_evaluador2",0)->nombre == "CMobile"
       && leer("archivo_evaluador2",1)->nombre == "B3"
       && leer("archivo_evaluador2",0)->modelo == 54326
       && leer("archivo_evaluador2",1)->modelo == 98431543
       && leer("archivo_evaluador2",0)->precio == 30165.74
       && leer("archivo_evaluador2",1)->precio == 30565.74
       )==false)
    {
        correcto=false;
    }

    if(correcto)
    {
        nota+=4;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getUltimoPrecio():\t\t";
    if(getUltimoPrecio("archivo_evaluador1")==432.5
       &&getUltimoPrecio("archivo_evaluador2")==30565.74
       )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    queue<char>q1;
    q1.push('a');
    q1.push('b');
    q1.push('c');
    q1.push('d');

    queue<char>q2;
    q2.push('q');
    q2.push('w');
    q2.push('e');
    q2.push('r');
    q2.push('t');

    queue<char>q3;
    q3.push('f');
    q3.push('d');
    q3.push('s');



    stack<char>sq1;
    sq1.push('d');
    sq1.push('c');
    sq1.push('b');
    sq1.push('a');

    stack<char>sq2;
    sq2.push('t');
    sq2.push('r');
    sq2.push('e');
    sq2.push('w');
    sq2.push('q');

    stack<char>sq3;
    sq3.push('s');
    sq3.push('d');
    sq3.push('f');

    cout<<"Ejercicio convertirAPila():\t\t";
    if(compareSets(sq1,convertirAPila(q1))
       && compareSets(sq2,convertirAPila(q2))
       && compareSets(sq3,convertirAPila(q3))
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    set<int>s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);

    set<int>s2;
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);

    cout<<"Ejercicio estaOrdenado():\t\t";

    if(estaOrdenado(s1)
       && estaOrdenado(s1)
       )
    {
        nota+=1;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getTabla():\t\t\t";
    if(getTablas()[1].size()!=0
       && getTablas()[2].size()!=0
       && getTablas()[3].size()!=0
       && getTablas()[4].size()!=0
       && getTablas()[5].size()!=0
       && getTablas()[6].size()!=0
       && getTablas()[7].size()!=0
       && getTablas()[8].size()!=0
       && getTablas()[9].size()!=0
       && getTablas()[10].size()!=0

       && getTablas()[5][0]==5
       && getTablas()[5][1]==10
       && getTablas()[5][2]==15
       && getTablas()[5][3]==20
       && getTablas()[5][4]==25
       && getTablas()[5][5]==30
       && getTablas()[5][6]==35
       && getTablas()[5][7]==40
       && getTablas()[5][8]==45
       && getTablas()[5][9]==50

       && getTablas()[2][0]==2
       && getTablas()[2][1]==4
       && getTablas()[2][2]==6
       && getTablas()[2][3]==8
       && getTablas()[2][4]==10
       && getTablas()[2][5]==12
       && getTablas()[2][6]==14
       && getTablas()[2][7]==16
       && getTablas()[2][8]==18
       && getTablas()[2][9]==20

       && getTablas()[3][0]==3
       && getTablas()[3][1]==6
       && getTablas()[3][2]==9
       && getTablas()[3][3]==12
       && getTablas()[3][4]==15


       && getTablas()[7][0]==7
       && getTablas()[7][1]==14
       && getTablas()[7][2]==21

       && getTablas()[9][0]==9
       && getTablas()[9][1]==18
       && getTablas()[9][2]==27
       && getTablas()[9][3]==36
       && getTablas()[9][4]==45
       && getTablas()[9][5]==54
       && getTablas()[9][6]==63

       && getTablas()[10][0]==10
       && getTablas()[10][1]==20
       && getTablas()[10][2]==30
       && getTablas()[10][3]==40
       && getTablas()[10][4]==50
       && getTablas()[10][5]==60
       && getTablas()[10][6]==70
       && getTablas()[10][7]==80
       && getTablas()[10][8]==90
       && getTablas()[10][9]==100
       )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    NodoBinario* n1 = new NodoBinario(1);
    NodoBinario* n2 = new NodoBinario(2);
    NodoBinario* n3 = new NodoBinario(5);
    NodoBinario* n4 = new NodoBinario(4);
    NodoBinario* n5 = new NodoBinario(5);
    NodoBinario* n6 = new NodoBinario(11);
    NodoBinario* n7 = new NodoBinario(11);
    NodoBinario* n8 = new NodoBinario(23);
    NodoBinario* n9 = new NodoBinario(37);

    n1->hijo_izq = n2;
    n1->hijo_der = n3;

    n2->hijo_izq = n4;
    n2->hijo_der = n5;

    n3->hijo_izq = n6;
    n3->hijo_der = n8;

    n8->hijo_der = n9;

    n5->hijo_der = n7;

    cout<<"Ejercicio getSuma():\t\t\t";

    if(getSuma(n9)==37
       && getSuma(n1)==1+2+5+4+5+11+11+23+37
       && getSuma(n3)==5+11+23+37
       && getSuma(n5)==5+11
       )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"Ejercicio sonPrimos():\t\t\t";
    if(!sonPrimos(n1)
       && sonPrimos(n3)
       && sonPrimos(n6)
       && !sonPrimos(n2)
       && sonPrimos(n5)
       && !sonPrimos(n4)
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/15"<<endl;
}
