#include <iostream>
#include "operacao.h"
#include "usuario.h"

int main()
{
    system("clear");
    Usuario us;
    Operacoes op;
    us.nome = "Joao";
    us.email = "nicolas.santos@gmail.com";
    us.senha = "123";
    us.nivel  = "Admin";
    op.cadastro(us.nome,us.senha,us.email,us.nivel);

    return 0;
}