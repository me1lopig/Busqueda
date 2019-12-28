// Busqueda.cpp : Busqueda secuencial en arreglos
// cuantas veces aparece un termino
//

#include <iostream>

using namespace std;

int main()
{
    int a[] = { 3,4,2,1,5,3,2,5,5,5 };
    int v = 55; // elemento a buscar
    int contador=0;
    int long_a = sizeof(a) / sizeof(*a); // numero de elementos de a

    for (int i = 0; i < long_a; i++)
    {
        if (a[i] == v)
        {
            contador++;
            cout << "aparece en la posicion " << i << endl;
        }

    }

    if (contador == 0)
    {
        cout << "El elemento " << v << "  no aparece el la lista "<< endl;
    }
    else
    {
        cout << "El elemento " << v << " aparece " << contador << " veces" << endl;
    }

   
    cout << "Pulsa una tecla para terminan" << endl;
    cin.get();

    return 0;
}


