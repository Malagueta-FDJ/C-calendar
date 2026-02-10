#include <stdio.h>
// imprime o menu e pede outro número
int menu()
{
    int menu_opc = -999
    ;
    printf("\nMenu\n");
    printf("1. Lista de compromisso\n");
    printf("2. Add compromisso\n");
    printf("3. Tirar compromisso\n");
    printf("4. Editar compromisso\n");
    printf("5. Calendario\n");
    //verifica a opção
    while (menu_opc != 1 && menu_opc != 2 && menu_opc != 3 && menu_opc != 4)
    {
        //apenas numeros
        printf("apenas numeros, pra nao quebrar: ");
        scanf("%d", &menu_opc);
        if (menu_opc != 1 && menu_opc != 2 && menu_opc != 3 && menu_opc != 4)
        {
            printf("Esse numero e ruim\n");
            menu_opc = -999;
        }
    }
    switch (menu_opc)
    {
    case 1:
        printf("opcao: %d nao implementada", menu_opc);
        break;
    
    case 2:
        printf("opcao: %d nao implementada", menu_opc);
        break;

    case 3:
        printf("opcao: %d nao implementada", menu_opc);
        break;

    case 4:
        printf("opcao: %d nao implementada", menu_opc);
        break;
    default:
        break;
    }
    return (menu_opc);
};

int main(int argc, char const *argv[])
{

    int i = menu();
    printf("\n%d\n",i);
    return 0;
}
