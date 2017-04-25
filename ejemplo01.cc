#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector <char> vtexto ={'h','o','l','a'};
    cout <<"el tamaño es: " << vtexto.size()<< endl;
    cout <<vtexto[2]<< endl;
    for (auto i:vtexto)
    {
        cout << i;
    }
    return 0;
}