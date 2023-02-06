/* Felipe Bonilla 2023
Programming/ Principles and Practice Using C++.pdf
Try This 4.4.2.1 while-statements
The character 'b' is char('a'+1), 'c' is char('a'+2), etc.
Use a loop to write out a table of characters with their corresponding integer values:
a 97 b 98 ... z 122
*/
#include "std_lib_facilities.h"

int main()
{
    char letra {'a'};
    while (letra<='z') {
        cout << letra << "\t" << (int)letra  << "\n";
        letra++;
    }
}