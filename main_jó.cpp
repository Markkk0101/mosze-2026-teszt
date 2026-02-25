#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];// elírás a változó nevében
    std::cout << '1-100 ertekek duplazasa' << std::endl;

    for (int i = 0; i < N_ELEMENTS; i++){ //hiányzott a növekvény, feltétel
        b[i] = (i+1) * 2;//
    }
    for (int i = 0; i < N_ELEMENTS; i++){ // hiányos feltétel
        std::cout << "Ertek:" << b[i] << std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag;

    for (int i = 0; i < N_ELEMENTS; i++){ // pontosvessző helyett vessző volt
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete b; //memória felszabadítás hiányzott
    return 0;
}
