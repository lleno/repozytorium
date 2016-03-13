#include <iostream>
#include <cstring>

using namespace std;

void wyswietlacz()
{
    string tab[6] = {"Jeden", "Dwa", "Trzy", "Cztery", "Piec", "Osiem"};
    
    for(int i = 0; i < 6; ++i)
    {
        cout << tab[i] << '\n';
    }
}

int main()
{
    wyswietlacz();
    
    return  0;
}