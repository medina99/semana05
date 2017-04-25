#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector <int> vnumeros;
    int n = 0;
    cout <<"ingrse numero de datos: " <<endl;
    cin >> n ;
    for (int i=1; i<=n; i++)
    {
        int x =0;
        cout<< "ingresar valores# " << i <<":";
        cin >> x;
        vnumeros.push_back(x);
    }
    for (auto i: vnumeros)
    {
        cout <<i << " " ;
    }
    return 0;
}