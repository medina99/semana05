#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool buscar(char caracter, vector<char> vletras)
{
    bool encontro = false;
    for (auto i : vletras)
    {
        if (i == caracter)
        encontro = true;
    }
    return encontro;
}
int posicionletra (char caracter, vector<char> vletras)
{
    int posicion =0;
    for (auto i :vletras)
    {
        if (i== caracter)
        {
            return posicion;
        }
        posicion ++;
    }
    return posicion;
}
int main ()
{
    string palabra;
    cout << "ingrese palabra"<<endl;
    cin >> palabra;
    cout << palabra.size() << endl;
    int n = palabra.size();
    vector<char> letras;
    vector<int> nletras;
    for (auto i : palabra)
    {
        if (buscar (i,letras)==true)
        {
            auto posicion = posicionletra (i, letras);
            nletras[posicion]++;
        }
        else 
        {
            letras.push_back(i);
            nletras.push_back(1);
        }
    }
    for (int i=0; i <= n-1; i++)
    {
        cout << "la cantidad de la letra "<<letras[i]<<" es " << nletras[i] << endl;
    }
    
    return 0;
}