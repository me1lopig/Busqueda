// Busqueda_binaria.cpp : 
// es necesario que el elemento este ordenado
// ojo si el elemento no esta en el array se mete en un bucle infinito
// se deben de controlar el número maximo de iteraciones
//


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numeros[] = { 1,2,3,4,5,5,8,7,-7,2 }; // arreglo en el que buscar
    int n_elementos = sizeof(numeros) / sizeof(*numeros); // numero de elementos del arreglo

    // variables para el control de busqueda
    int inf = 0;
    int sup = n_elementos;
    int mitad; // valor del indice a buscar
    int control_pasos=0; // control para que no entre en bucle infinito log2(n_elementos)+1 iteraciones en el peor de los casos

    // bandera
    char bandera='f'; // bandera para el control de localización

    int buscar = 16; // dato a buscar

    // algoritmo de busqueda binaria

    while ((inf <= sup)&&(control_pasos<= log2(n_elementos)+1))
    {
        
        mitad = (inf + sup) / 2;

        if (numeros[mitad] > buscar)
        {
            sup = mitad;
        }

        if (numeros[mitad] < buscar)
        {
            inf = mitad;
        }

        if (numeros[mitad] == buscar)
        {
            bandera = 'v';
            break;
        }

        control_pasos++; // control de iteraciones
    }

    if (bandera == 'v')
    {
        cout << "Elemento " << buscar << " encontrado en la posicion " << mitad << endl;
    }

    else
    {
       cout << "Elemento " << buscar << " no se ha encontrado " << endl;
    }
 
    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}



