#include "std_lib_facilities.h"
int main()
{
    cout << "Escriba el nombre de la persona a la que le desea escribir, seguido de la tecla 'Enter':\n";
    string nombreDestinatario; // first_name is a variable of type string
    cin >> nombreDestinatario; // read characters into first_name
    char genero;
    string queridx, nombreDeAmi, nombreRemitente;
    int edadRemitente;
    bool esperandoGenero{true}, esperandoEdad{true};
    do
    {
        cout << "Escriba m si es un él, f si es una ella o n si es unx elle, seguido de la tecla 'Enter':\n";
        cin >> genero;
        if (genero == 'm')
        {
            queridx = "Querido";
            esperandoGenero = false;
        }
        else if (genero == 'f')
        {
            queridx = "Querida";
            esperandoGenero = false;
        }
        else if (genero == 'n')
        {
            queridx = "Queridx";
            esperandoGenero = false;
        }
        else
        {
            cout << "No entendí, puede repetir?\n";
        }
    } while (esperandoGenero);
    do
    {
        cout << "Escribe la edad de tu primer ami, seguido de la tecla 'Enter'\n";
        cin >> edadRemitente;
        if (edadRemitente <= 0)
        {
            simple_error("jeje, eso no es cierto\n");
        }
        else if (edadRemitente > 100)
        {
            simple_error("jeje, eso no es cierto\n");
        }
        else
        {
            esperandoEdad = false;
        }
    } while (esperandoEdad);
    cout << "Escriba el nombre de un ami con el que no hayan hablado recientemente, seguido de la tecla 'Enter'\n";
    cin >> nombreDeAmi;

    cout << "Cuál es su nombre?\n";
    cin >> nombreRemitente;
    cout << "Aquí está tu carta:\n";
    cout << endl;
    cout << endl;
    cout << queridx << ", " << nombreDestinatario << "!\n";
    cout << "Cómo estas? Yo he estado muy bien últimamente.\n";
    cout << "Hace mucho no hablamos de nuestro ami " << nombreDeAmi << ".\n";
    cout << "Si le ves, pregúntale cómo está de mi parte. Supe que hace poco cumpliste " << edadRemitente << "!\n";
    if (edadRemitente < 12)
    {
        cout << "El siguiente año tendras " << edadRemitente + 1 << "\n";
    }
    else if (edadRemitente == 17)
    {
        cout << "El siguiente año podrás votar!\n";
    }
    cout << "Con cariño:\n";
    cout << nombreRemitente << "\n";
}