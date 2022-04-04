/*
Programa para trabalhar com orientação 
a objeto. Usando classe e objetos
*/

#include <iostream>

//Chamada da biblioteca std

using std::cout;
using std::cin;

class textos
{
    public:
    void mensagem1()
    {
        cout << "\nOlá!\n\n";

    }
    
    void mensagem2()
    {
        cout << "\nBom dia!\n\n";
    }
};

int main()
{
    textos txt;
    
    txt.mensagem1();
    txt.mensagem2();


    
    
    return 0;
}