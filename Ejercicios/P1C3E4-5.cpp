/* Felipe Bonilla 2023
Programming/ Principles and Practice Using C++.pdf
Part I Cap 3 Ejercicio 4 y 5
4 Write a program that prompts the user to enter two integer values.
Store these values in int variables named val1 and val2.
Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.
5 Modify the program above to ask the user to enter floating-point values and store them in double variables.
Compare the outputs of the two programs for some inputs of your choice.
Are the results the same? Should they be? What’s the difference?
*/
#include "std_lib_facilities.h"
int main()
{
    // Declaración de variables globales
    int valor_entero_1{0}, valor_entero_2{0};
    double valor_doble_1{0.0}, valor_doble_2{0.0};
    cout << "Escribe dos números y luego presiona la tecla 'Enter':\n";
    cin >> valor_doble_1 >> valor_doble_2; // Pongo en las variables int los valores ingresados
    // Hago un narrow cast de doble a enteros
    valor_entero_1 = valor_doble_1;
    valor_entero_2 = valor_doble_2;
    // determina cuál es mayor
    cout << "Operaciones de enteros:\n";
    if (valor_entero_1 > valor_entero_2)
    {
        cout << valor_entero_1 << " es mayor que: " << valor_entero_2 << " y " << valor_entero_2 << " es menor que: " << valor_entero_1 << endl;
    }
    else if (valor_entero_2 > valor_entero_1)
    {
        cout << valor_entero_2 << " es mayor que: " << valor_entero_1 << " y " << valor_entero_1 << " es menor que: " << valor_entero_2 << endl;
    }
    else
        cout << "Son valores iguales\n";
    cout << "La suma de ambos es: " << valor_entero_1 + valor_entero_2 << endl;
    cout << "La primera diferencia es: " << valor_entero_1 - valor_entero_2 << endl;
    cout << "La segunda diferencia es: " << valor_entero_2 - valor_entero_1 << endl;
    cout << "El producto es: " << valor_entero_2 * valor_entero_1 << endl;
    cout << "El primer ratio es: " << valor_entero_2 / valor_entero_1 << endl;
    cout << "El segundo ratio es: " << valor_entero_1 / valor_entero_2 << endl;
    cout << "Operaciones de dobles:\n";
    if (valor_doble_1 > valor_doble_2)
    {
        cout << valor_doble_1 << " es mayor que: " << valor_doble_2 << " y " << valor_doble_2 << " es menor que: " << valor_doble_1 << endl;
    }
    else if (valor_doble_2 > valor_doble_1)
    {
        cout << valor_doble_2 << " es mayor que: " << valor_doble_1 << " y " << valor_doble_1 << " es menor que: " << valor_doble_2 << endl;
    }
    else
        cout << "Son valores iguales\n";
    cout << "La suma de ambos es: " << valor_doble_1 + valor_doble_2 << endl;
    cout << "La primera diferencia es: " << valor_doble_1 - valor_doble_2 << endl;
    cout << "La segunda diferencia es: " << valor_doble_2 - valor_doble_1 << endl;
    cout << "El producto es: " << valor_doble_2 * valor_doble_1 << endl;
    cout << "El primer ratio es: " << valor_doble_2 / valor_doble_1 << endl;
    cout << "El segundo ratio es: " << valor_doble_1 / valor_doble_2 << endl;
}