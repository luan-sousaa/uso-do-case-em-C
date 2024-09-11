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
        printf("\nÉ importante agradecer pelo hoje sem nunca desistir do amanhã!");
        break;
    case 2:
        printf("\nTenha força e sabedoria para resistir às tentações do mundo.");
        break;
    case 3:
        printf("\nAcredite no amor, mesmo quando parece algo impossível. Nunca perca sua esperança. Por mais difícil e impossível que pareça, saiba que não é. Tudo pode dar certo. Basta acreditar.");
        break;
    case 4:
        break;
    default:
        printf("\ninvalido");
    
    }    
}