#include <iostream>
using namespace std;
int main()
{
    const unsigned int rozmiarTablicy = 5;
    
    int * TablicaDynamicznie = new int[rozmiarTablicy];
    int tablica[5];
    
    for(int i = 0; i<5;i++)
    {
       TablicaDynamicznie[i]=i;
       tablica[i]=i+1 ;
    }
    for(int i = 0; i<5;i++)
    {
        cout<<"Adresy tabli statycznej: "<<(unsigned int)&tablica[i]<<" "<<"Adresy tablicy alkowanej dynamicznie: "<<(unsigned int)&TablicaDynamicznie[i]<<endl;
    }
    return 0;
}