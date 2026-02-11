#include <stdio.h>
#include <string.h>

int bisexto(int ano){ //calcula ano bisexto
    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        return 1;
    } else return 0;
}

int qntd_dias(int mes, int ano){ //retorna a quantidade de dias no mes entregue
    switch (mes){
    case 1: return 31;
    case 2: 
        if (bisexto(ano) == 1)
        {return 29;
        }else return 28;
    case 3: return 31;
    case 4: return 30;
    case 5: return 31;
    case 6: return 30;
    case 7: return 31;
    case 8: return 30;
    case 9: return 31;
    case 10: return 30;
    case 11: return 31;
    case 12: return 30;
    default: return -1;
    }
}

void calendario(int ano){ //imprime o calendario, sem os dias da semana
    int semanal;
    printf("Ano: %d\n",ano);
    for (int i = 1; i <= 12; i++)//loop para imprimir meses
    {
        semanal = 1;
        printf("mes: %d\n",i);
        for (int j = 1; j <= qntd_dias(i,ano); j++)//loop para imprimir dias
        {
            printf("%2.0d ",j);
            if (semanal % 7 == 0 && semanal != 1)
            {
                printf("\n");
            }
            semanal++;
        }
        printf("\n");
        
    }
    
};

int main()
{
    int opc;
    scanf("%d",&opc);
    calendario(opc);

    return 0;
}
