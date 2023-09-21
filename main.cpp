#include <iostream>

constexpr int N_ELEMENTS = 100; //a main() belulre kell

int main()
{
    int *b = new int[NELEMENTS]; //hianyzo _
    std::cout << '1-100 ertekek duplazasa' // \n a vegere hogy normalisan nezzen ki
    for (int i = 0;) //befejezetlen for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hianyzo feltetel
    {
        std::cout << "Ertek:" //konkret ertek kiratas hianyzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl; // \n elejere hogy normalisan nezzen ki
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //vesszo van a pontosvesszo helyett
    {
        atlag += b[i] // hianyzo ; a sor vegerol
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
