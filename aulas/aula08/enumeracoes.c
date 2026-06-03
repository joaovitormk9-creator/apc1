#include <stdio.h>
#include <stdbool.h>

int main(){
    enum dias_da_semana_e {
        domingo = 1,
        segunda,
        terca,
        quarta,
        quinta,
        sexta,
        sabado
    };

    enum meses_e {
        janeiro,
        fevereiro,
        marco,
        abril
        maio,
        junho,
        julho,
        agosto,
        setembro,
        outubro,
        novambro,
        dezembro
    };

    enum sexo_e {
        masculino,
        feminino
    };

    enum situacao_e {
        ativo,
        inativo
    };

    enum tipo_contato_e {
        particular,
        publico
    };

    struct contato_t {
        char nome[61];
        long int telefone;
        enum tipo_contato_e tipo;
    };

    bool esta_presente;
    esta_presente = false;


    return 0;
}