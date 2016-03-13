#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string tab[5] = {"Jeden", "Dwa", "Trzy", "Cztery", "Piec"};
    
    for(int i = 0; i < 5; ++i)
    {
        cout << tab[i] << '\n';
    }
    
    return  0;
}