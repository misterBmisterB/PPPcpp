/* Felipe Bonilla 2023
Programming/ Principles and Practice Using C++.pdf
Parte 1, Cap 3, Exec 6.
6 Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas.
So, if the user enters the values 10 4 6, the output should be 4, 6, 10.
If two values are the same, they should just be ordered together.
So, the input 4 5 4 should give 4, 4, 5.
*/
#include "std_lib_facilities.h"
int main()
{
    int x, y, z;
    cout << "Regáleme, por favor, tres valores enteros: ";
    cin >> x >> y >> z;
    if (x <= y && y <= z)
    {
        cout << x << ", " << y << ", " << z << "\n";
    }
    else if (x <= z && z <= y)
    {
        cout << x << ", " << z << ", " << y << "\n";
    }
    else if (y <= x && x <= z)
    {
        cout << y << ", " << x << ", " << z << "\n";
    }
    else if (y <= z && z <= x)
    {
        cout << y << ", " << z << ", " << x << "\n";
    }
    else if (z <= x && x <= y)
    {
        cout << z << ", " << x << ", " << y << "\n";
    }
    else if (z <= y && y <= x)
    {
        cout << z << ", " << y << ", " << x << "\n";
    }
    else
    {
        cout << "Error al intentar comprar os valores.\n";
    }
}