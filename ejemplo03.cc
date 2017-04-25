#include <iostream>
#include <string>
#include <vector> 
using namespace std;
int main ()
{
    string nombre;
    cout <<"ingrese su nombre: ";
    getline(cin, nombre);
    cout << nombre.size();
    cout << "el nombre ingresado es: " << nombre << endl;
    for (auto i : nombre)
    {
        if(i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u' && i != 'A' && i != 'E' && i != 'I' && i != 'O' && i != 'U')
        cout << i;
    }
    return 0;
}