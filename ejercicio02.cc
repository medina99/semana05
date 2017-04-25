#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string palabra;
    cout << "ingrese palabra"<<endl;
    cin >> palabra;
    cout << palabra.size() << endl;
    int n = palabra.size();
    for (int i=n-1; i >=0; i--)
    {
        cout << palabra[i];
        
    }
    
    
    return 0;
}