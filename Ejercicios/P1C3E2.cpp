/* Felipe Bonilla 2023
Programming/ Principles and Practice Using C++.pdf
Part I Cap 3 Ejercicio 2
Write a program in C++ that converts from miles to kilometers.
Your program should have a reasonable prompt for the
user to enter a number of miles. Hint: There are 1.609 kilometers to the mile. */
#include "std_lib_facilities.h"
int main()
{
    cout << "Indique el número de millas que quiere convertir a kms:\n";
    float millas_a_convertir{0.0f}; // tuve que colocar F para que sea un float y no un double
    cin >> millas_a_convertir;
    float kms{(millas_a_convertir * 1.609f)}; // también tuve que colocar una f para evitar que se vuelva un double
    string texto_de_kms{" kilómetro"}, texto_de_millas{" milla"};
    // abajo comprueba si kms y millas son singular o plural, para escribir la palabra correcta
    if (kms != 1)
    {
        texto_de_kms += "s";
    }
    if (millas_a_convertir != 1)
    {
        texto_de_millas += "s";
    }
    cout << millas_a_convertir << texto_de_millas << " son, aproximadamente " << kms << texto_de_kms << endl;
}