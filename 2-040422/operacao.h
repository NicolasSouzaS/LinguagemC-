#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class Operacoes
{
    public:
        void cadastro(string nome,string senha,string email,string nivel)
        {
            cout<< "\n\nCadastro de usuário realizado\n\n";
        }
        string login(string nome, string senha)
        {
            return "\n\nSeja bem vindo!\n\n";
        }
        string alterar_senha(string nome, string senha)
        {
            return "\n\nSenha alterada\n\n";
        }

};