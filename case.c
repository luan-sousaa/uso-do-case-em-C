#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opcao;
main(void){
    setlocale(LC_ALL, "Portuguese_brazil");
    printf("ESCOLHA UMA OPCAO : \n");
    printf("\n1 - Frase motivacional\n2 - Dica de vida \n3 - Conselho Amoroso\n4 - Sair\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("\n� importante agradecer pelo hoje sem nunca desistir do amanh�!");
        break;
    case 2:
        printf("\nTenha for�a e sabedoria para resistir �s tenta��es do mundo.");
        break;
    case 3:
        printf("\nAcredite no amor, mesmo quando parece algo imposs�vel. Nunca perca sua esperan�a. Por mais dif�cil e imposs�vel que pare�a, saiba que n�o �. Tudo pode dar certo. Basta acreditar.");
        break;
    case 4:
        break;
    default:
        printf("\ninvalido");
    
    }    
}