/* Felipe Bonilla 2023
Programming/ Principles and Practice Using C++.pdf
Try This
*/
#include "std_lib_facilities.h"

int al_cuadrado(int n)
{
    int m{0};
    for (int i{0}; i <= n; ++i)
    {
        m = n + n;
    }
    return m;
}

int main()
{

    for (int i = 0; i < 100; ++i)
        cout << i << '\t' << al_cuadrado(i) << '\n';
}