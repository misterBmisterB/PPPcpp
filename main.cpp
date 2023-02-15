/* Felipe Bonilla 2023
Programming/ Principles and Practice Using C++.pdf
*/
#include "std_lib_facilities.h"

int main()
{
    vector<double> enteros;
    double doble_ingresado, menor, mayor;
    while (cin >> doble_ingresado)
    {
        enteros.push_back(doble_ingresado);
        if (enteros.size() == 1)
        {
            cout << "Este es el único valor ingresado: " << enteros[0] << endl;
            menor = doble_ingresado;
            mayor = doble_ingresado;
        }
        else if (doble_ingresado < menor)
        {
            cout << "Este es el valor menor ingresado hasta ahora: " << doble_ingresado << endl;
            menor = doble_ingresado;
        }
        else if (doble_ingresado > mayor)
        {
            cout << "Este es el valor mayor ingresado hasta ahora: " << doble_ingresado << endl;
            mayor = doble_ingresado;
        }
        else
        {
            cout << "Este es el valor ingresado: " << doble_ingresado << endl;
        }
    }
    cout << "While terminado\n";
    sort(enteros);
    cout << "El menor es: " << enteros[0] << ", y el mayor es: " << enteros[enteros.size()-1] << endl;
}