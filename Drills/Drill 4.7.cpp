/* Felipe Bonilla 2023
Programming/ Principles and Practice Using C++.pdf
Drill 4.7
*/
#include "std_lib_facilities.h"

int main()
{
    vector<double> valores;
    double doble_ingresado, menor, mayor, total{0};
    constexpr double cms_a_ms{0.01}, pulg_a_ms{2.54 * cms_a_ms}, pies_a_ms{12 * pulg_a_ms};
    int indice{0}, indice_menor{indice}, indice_mayor{indice};
    string unidad;
    while (cin >> doble_ingresado >> unidad)
    {
        double doble_en_ms;
        if (unidad == "cm" || unidad == "cms")
        {
            doble_en_ms = doble_ingresado * cms_a_ms;
            cout << "Ingresaste: " << doble_ingresado << unidad << ", que son " << doble_en_ms << "m.\n";
        }
        else if (unidad == "in" || unidad == "inches" || unidad == "pulg" || unidad == "pulgadas")
        {
            doble_en_ms = doble_ingresado * pulg_a_ms;
cout << "Ingresaste: " << doble_ingresado << unidad << ", que son " << doble_en_ms << "m.\n";        }
        else if (unidad == "pie" || unidad == "pies" || unidad == "ft")
        {
            doble_en_ms = doble_ingresado * pies_a_ms;
cout << "Ingresaste: " << doble_ingresado << unidad << ", que son " << doble_en_ms << "m.\n";        }
        else if (unidad == "m" || unidad == "ms" || unidad == "metros")
        {
            doble_en_ms = doble_ingresado;
            cout << "Ingresaste: " << doble_ingresado << unidad << endl;
        }
        else
        {
            cout << "valor inválido\n";
        }
        total += doble_en_ms;
        valores.push_back(doble_en_ms);
        if (valores.size() == 1)
        {
            menor = doble_en_ms;
            mayor = doble_en_ms;
            indice_menor = indice;
            indice_mayor = indice;
        }
        else if (doble_en_ms < menor)
        {
            menor = doble_en_ms;
            cout << "Este es el valor menor ingresado hasta ahora: " << menor << endl;
            
            indice_menor = indice;
        }
        else if (doble_en_ms > mayor)
        {
            mayor = doble_en_ms;
            cout << "Este es el valor mayor ingresado hasta ahora: " << mayor << endl;
            
            indice_mayor = indice;
        }
        else
        {
           
        }
        indice++;
    }
    cout << "While terminado\n";
    cout << "La suma total en metros es de: " << total << " m.\n";
    cout << "El valor menor ingresado, en metros, fue: " << menor << " m.\n";
    cout << "El valor mayor ingresado, en metros, fue: " << mayor << " m.\n";
    cout << "El número de valores ingresados fue: " << indice << ".\n";
    sort(valores);
    cout << "Los valores ingresados fueron, en metros, de menor a mayor: ";
    for (double i : valores)
    {
        cout << i << "m ";
    }
    cout << ".\n";
}