#include <iostream>


int main()
{
    constexpr int N_ELEMENTS = 100;

    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa\n";
    for (int i = 0; i<=99; i++)
    {
        b[i] = (i+1) * 2;
    }
    for (int j = 0; j<=99; j++)
    {
        std::cout << "Ertek:" << b[j] << ' ';
    }    
    std::cout << "\nAtlag szamitasa: " << std::endl;
    int atlag;
    for (int k = 0; k < N_ELEMENTS; k++)
    {
        atlag += b[k];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Kiirtam valamit.";
    return 0;
}
